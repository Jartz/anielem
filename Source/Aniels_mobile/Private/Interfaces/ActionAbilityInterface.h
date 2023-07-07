#pragma once

#include "Aniels_mobile/AbilityStruct.h"
#include "ActionAbilityInterface.generated.h"


UINTERFACE(BlueprintType)
class UActionAbilityInterface : public UInterface
{
    GENERATED_BODY()
};

class IActionAbilityInterface
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interface")
    void PressAbility(const FAbilityStruct& AbilityStruct);
};