// Fill out your copyright notice in the Description page of Project Settings.


#include "Pet_characters.h"

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

