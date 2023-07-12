#pragma once
#include "CoreMinimal.h"
#include "AbilityStruct.generated.h"

USTRUCT(BlueprintType)
struct FAbilityStruct
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Ability")
	FString Name;

	UPROPERTY(BlueprintReadWrite, Category = "Ability")
	FString Description;

	UPROPERTY(BlueprintReadWrite, Category = "Ability")
	float Cost;

	UPROPERTY(BlueprintReadWrite, Category = "Ability")
	float Cooldown;

	UPROPERTY(BlueprintReadWrite, Category = "Ability")
	float CastTime;

	UPROPERTY(BlueprintReadWrite, Category = "Ability")
	float Damage;
	
	UPROPERTY(BlueprintReadWrite, Category = "Ability")
	UTexture2D* IconName;
	
};