#pragma once
#include "Aniels_mobile/AbilityStruct.h"
#include "CombatStruct.generated.h"


USTRUCT(BlueprintType)
struct FCombatStruct
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	FAbilityStruct Ability;

	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	bool StartAttack;
	
	
};