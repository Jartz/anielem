
#pragma once

#include "Model/CombatStruct.h"
#include "CombatInterface.generated.h"


UINTERFACE(BlueprintType)
class UCombatInterface : public UInterface
{
	GENERATED_BODY()
};

class ICombatInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interface")
	void ActionCombat(const FCombatStruct& CombatStruct);
};