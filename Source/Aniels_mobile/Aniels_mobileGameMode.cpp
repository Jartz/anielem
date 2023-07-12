// Copyright Epic Games, Inc. All Rights Reserved.

#include "Aniels_mobileGameMode.h"
#include "Aniels_mobileCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAniels_mobileGameMode::AAniels_mobileGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_PokemonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
