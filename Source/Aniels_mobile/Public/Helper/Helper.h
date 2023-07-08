#pragma once

#include "Helper.generated.h"

UCLASS() 
class UHelper final : public UObject
{
	GENERATED_BODY()
public:
	static UUserWidget* LoadWidgetWithName(FString Value, UWorld* GetWorld);
};