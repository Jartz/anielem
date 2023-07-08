// Copyright Epic Games, Inc. All Rights Reserved.

#include "Aniels_mobileCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Pet_characters.h"
#include "WidgetParameters.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetTree.h"
#include "Components/Button.h"
#include "Engine/DamageEvents.h"
#include "AbilityStruct.h"
#include "EngineUtils.h"
// #include "NavigationSystem.h"
#include "AIController.h"
// #include "Aniels_mobile/Public/Helper/Helper.h"
#include "Helper/Helper.h"
#include "Perception/AIPerceptionComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/PawnSensingComponent.h"


//////////////////////////////////////////////////////////////////////////
// AAniels_mobileCharacter


AAniels_mobileCharacter::AAniels_mobileCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

void AAniels_mobileCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
	
	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	if(WidgetHealth)
	{
		WidgetHealth->AddToViewport();
		SetHealth(Health);
		ListenActionWidget();
	} else
	{
		WidgetHealth = UHelper::LoadWidgetWithName("Health_Main_UI", GetWorld());
		SetHealth(Health);
		ListenActionWidget();
	}
	
	// Obtén el jugador del mundo
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	// Habilita la visibilidad del cursor del mouse
	PlayerController->bShowMouseCursor = true;
	// Opcionalmente, puedes ocultar el cursor predeterminado del motor
	PlayerController->bEnableMouseOverEvents = true;
	PlayerController->bEnableClickEvents = true;

	// add AiController default
	AIControllerPlayer = GetWorld()->SpawnActor<AAIController>(AAIController::StaticClass());
	LoadSensingComponent();
    FollowPokemonToPlayer();
	
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetInputMode(FInputModeGameAndUI());
}

void AAniels_mobileCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsHuman) {return;}
	FVector CurrentLocation = GetActorLocation();
	if (CurrentLocation == PreviousLocation)
	{
		isMoved = false;
	} else
	{
		isMoved = true;
	}
	PreviousLocation = CurrentLocation;
	
	
}

//////////////////////////////////////////////////////////////////////////
// Input

void AAniels_mobileCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAniels_mobileCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AAniels_mobileCharacter::Look);

	}
	InputComponent->BindKey(EKeys::F, IE_Pressed, this, &AAniels_mobileCharacter::OnPressF);
	InputComponent->BindKey(EKeys::G, IE_Pressed, this, &AAniels_mobileCharacter::OnPressG);
}

void AAniels_mobileCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AAniels_mobileCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AAniels_mobileCharacter::OnPressF()
{
	ShowInventory();
}

void AAniels_mobileCharacter::OnPressG()
{

	CambiarEntrePersonajes();
}


void AAniels_mobileCharacter::ShowInventory()
{
	isActiveInventary = !isActiveInventary;
	if (WidgetMenu)
	{
		if (isActiveInventary)
		{
			WidgetMenu->AddToViewport();
		}
		else
		{
			WidgetMenu->RemoveFromParent();
		}
	}
}


APet_characters* AAniels_mobileCharacter::GetEnemyPetInstance()
{
	APet_characters* EnemyPet = nullptr;
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APet_characters::StaticClass(), FoundActors);
	if (FoundActors.Num() > 0)
	{
		EnemyPet = Cast<APet_characters>(FoundActors[0]);
	}

	return EnemyPet;
}


void AAniels_mobileCharacter::ListenActionWidget()
{

	WidgetHealth->WidgetTree->ForEachWidget([&](UWidget* ChildWidget) {
		   FString WidgetName = ChildWidget->GetName();
		   UE_LOG(LogTemp, Warning, TEXT("Child Widget Name: %s"), *WidgetName);
	   });

	UButton* Button = Cast<UButton>(WidgetHealth->GetWidgetFromName(TEXT("Button_183")));
	if (Button)
	{
		
		Button->OnClicked.AddDynamic(this, &AAniels_mobileCharacter::ClickedCallback);
	}
}


void AAniels_mobileCharacter::ClickedCallback()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("detect button"));
}

void AAniels_mobileCharacter::SetHealth(float Value) const
{
	UFunction* Method = WidgetHealth->FindFunction(FName("setHealth"));
	if (Method)
	{
		FHealthStruct parameter;
		parameter.Value = Value / 100.0f;
		WidgetHealth->ProcessEvent(Method, &parameter);
	} else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Failed to load SetHealthRowfuction."));
	}
}

void AAniels_mobileCharacter::PressAbility_Implementation(const FAbilityStruct& AbilityStruct)
{
	makeDamage(AbilityStruct);

}


void AAniels_mobileCharacter::makeDamage(const FAbilityStruct& AbilityStruct)
{
	APet_characters* EnemyPet = GetEnemyPetInstance();
	if(EnemyPet)
	{
		FString damageText = FString::Printf(TEXT("Apply Damage: %.2f"), AbilityStruct.Damage);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, damageText);
		EnemyPet->TakeDamage(AbilityStruct.Damage,FDamageEvent{}, GetController(), this);	
	}
}

void AAniels_mobileCharacter::CambiarEntrePersonajes()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("CHANGE CHARACTER"));
	TArray<ACharacter*> CharactersInLevel;
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	ACharacter* CurrentCharacter = Cast<ACharacter>(PlayerController->GetPawn());
	for (TActorIterator<ACharacter> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		ACharacter* NewCharacter = *ActorItr;
		AAniels_mobileCharacter* AnielsCharacter = Cast<AAniels_mobileCharacter>(NewCharacter);
		if (CurrentCharacter != NewCharacter && AnielsCharacter) {
			PlayerController->UnPossess();
			PlayerController->Possess(NewCharacter);
			FollowCharacter(NewCharacter,CurrentCharacter, PlayerController);
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, NewCharacter->GetName());
		}
	}
}



void AAniels_mobileCharacter::LoadSensingComponent()
{
	UPawnSensingComponent* SensingComponent = FindComponentByClass<UPawnSensingComponent>();
	if (SensingComponent)
	{
		SensingComponent->OnSeePawn.AddDynamic(this, &AAniels_mobileCharacter::OnSeePawnHandler);
	}
}

void AAniels_mobileCharacter::OnSeePawnHandler(APawn* DetectedPawn)
{
	if (!isMoved)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("OnSeePawnHandler"));
		FollowPokemonToPlayer();	
	}
}


void AAniels_mobileCharacter::FollowPokemonToPlayer()
{
	
	if (IsHuman) {return;}
	TArray<ACharacter*> CharactersInLevel;
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	ACharacter* CurrentCharacterPLayer = Cast<ACharacter>(PlayerController->GetPawn());

	for (TActorIterator<ACharacter> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		ACharacter* NewCharacter = *ActorItr;
		AAniels_mobileCharacter* AnielsCharacter = Cast<AAniels_mobileCharacter>(NewCharacter);
		if (CurrentCharacterPLayer != NewCharacter && AnielsCharacter) {
			FollowCharacter(CurrentCharacterPLayer,NewCharacter, PlayerController);
		}
	}
}


void AAniels_mobileCharacter::FollowCharacter(ACharacter* CharacterToFollow, ACharacter* FollowerCharacter, APlayerController* PlayerController)
{
	if (IsHuman) { return; }
	ACharacter* CurrentCharacter = Cast<ACharacter>(FollowerCharacter);
	AIControllerPlayer->UnPossess();
	AIControllerPlayer->Possess(CurrentCharacter);
	
	if (CharacterToFollow && FollowerCharacter)
	{
		if (AIControllerPlayer)
		{
				AIControllerPlayer->MoveToActor(CharacterToFollow);
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("MoveToActor"));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("The controller no have AIControllerPlayer"));
		}
	}
}







