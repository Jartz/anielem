// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Private/Interfaces/ActionAbilityInterface.h"
#include "Private/Interfaces/CombatInterface.h"
#include "InputActionValue.h"
#include "Pet_characters.h"
#include "GameFramework/Character.h"
#include "AbilityStruct.h"
#include "AIController.h"
#include "Model/CombatStruct.h"
#include "Aniels_mobileCharacter.generated.h"


UCLASS(config=Game)
class AAniels_mobileCharacter : public ACharacter, public IActionAbilityInterface, public ICombatInterface
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
	
	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input, meta = (AllowPrivateAccess = "true"))
	double Health = 100.0f;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input, meta = (AllowPrivateAccess = "true"))
	UUserWidget* WidgetHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input, meta = (AllowPrivateAccess = "true"))
	UUserWidget* WidgetMenu;

	AAIController* AIControllerPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input, meta = (AllowPrivateAccess = "true"))
	bool IsHuman = true;

public:
	AAniels_mobileCharacter();

	// Interface	
	void PressAbility_Implementation(const FAbilityStruct& AbilityStruct) override;
	void ActionCombat_Implementation(const FCombatStruct& CombatStruct) override;

	// Method
	void makeDamage(const FAbilityStruct& AbilityStruct);
	void CambiarEntrePersonajes();
	void FollowCharacter(ACharacter* CharacterToFollow, ACharacter* FollowerCharacter,
	                     APlayerController* PlayerController);
	void LoadSensingComponent();
	void FollowPokemonToPlayer();
	void LoadCharacter();


protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
	void OnPressF();
	void OnPressG();
	void ShowInventory();
	APet_characters* GetEnemyPetInstance();
	void ShowHealth(float Value);
	void ListenActionWidget();
	void SetHealth(float Value) const;
	bool isActiveInventary = false;
	FVector PreviousLocation;
	bool isMoved = false;
	

	UFUNCTION()
	void ClickedCallback();
	UFUNCTION()
	void OnSeePawnHandler(APawn* DetectedPawn);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();
	void Tick(float DeltaTime);

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }


};

