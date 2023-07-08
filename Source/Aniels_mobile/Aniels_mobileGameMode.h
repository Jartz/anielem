// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Aniels_mobileGameMode.generated.h"

UCLASS(minimalapi)
class AAniels_mobileGameMode : public AGameModeBase
{
	GENERATED_BODY()

private:
	ACharacter* ActiveCharacter;
public:
	AAniels_mobileGameMode();
};



