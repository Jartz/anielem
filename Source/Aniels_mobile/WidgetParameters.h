#pragma once

#include "CoreMinimal.h"
#include "WidgetParameters.generated.h"

USTRUCT(BlueprintType)
struct FHealthStruct
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Widget Parameters")
	float Value;

	// UPROPERTY(BlueprintReadWrite, Category = "Widget Parameters")
	// FVector Location;
	//
	// UPROPERTY(BlueprintReadWrite, Category = "Widget Parameters")
	// FString Name;
};