
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Model/ItemStructure.h"
#include "ItemBase.generated.h"

UCLASS()
class ANIELS_MOBILE_API UItemBase : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category="Item Data", meta=(UIMin=1,UIMax=100))
	int32 Quantity;
	
	UPROPERTY(EditAnywhere, Category="Item Data")
	FName ID;
	
	UPROPERTY(EditAnywhere, Category="Item Data")
	EItemQuality ItemQuality;

	UPROPERTY(EditAnywhere, Category="Item Data")
	EItemType ItemType;
	
	UPROPERTY(EditAnywhere, Category="Item Data")
	FItemStatistics ItemTypeStatistics;
	
	UPROPERTY(EditAnywhere, Category="Item Data")
	FItemAssetData ItemAssetData;
	
};



