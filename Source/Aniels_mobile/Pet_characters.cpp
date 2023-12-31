// Fill out your copyright notice in the Description page of Project Settings.


#include "Pet_characters.h"

#include "Blueprint/UserWidget.h"

// Sets default values
APet_characters::APet_characters()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APet_characters::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APet_characters::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APet_characters::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}




float APet_characters::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Health -= DamageAmount;

	if (Health <= 0.0f && !isDeath)
	{
		FString AnimationPath = "/Game/Assets/Pokemon/Scyther/Animations/Anim_Scyther_Faint.Anim_Scyther_Faint";
		UAnimationAsset* Animation = Cast<UAnimationAsset>(StaticLoadObject(UAnimationAsset::StaticClass(), nullptr, *AnimationPath));
		ACharacter* CurrentCharacter = Cast<ACharacter>(this->GetController()->GetPawn());
		CurrentCharacter->GetMesh()->PlayAnimation(Animation, false);
		
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Enemy is death"));
		SetLifeSpan(3.0f);
		isDeath = true;
	}
	
	return Health;
}





