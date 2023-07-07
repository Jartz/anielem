#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemStructure.generated.h"


UENUM()
enum class EItemQuality: uint8
{
	Shoddy UMETA(DisplayName = "Shoddy"),
	Common UMETA(DisplayName = "Common"),
	Quality UMETA(DisplayName = "Quality"),
	MasterWork UMETA(DisplayName = "MasterWork")
};

UENUM()
enum class EItemType: uint8
{
	Armor UMETA(DisplayName = "Armor"),
	Weapon UMETA(DisplayName = "Weapon"),
	Shield UMETA(DisplayName = "Shield"),
	Spell UMETA(DisplayName = "Spell"),
	Consumable UMETA(DisplayName = "Consumible"),
	Quest UMETA(DisplayName = "Quest")
};


USTRUCT(BlueprintType)
struct FItemStatistics
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FName Name;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FName Description;
	
};

USTRUCT(BlueprintType)
struct FItemAssetData
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UStaticMesh* Mesh;
};

USTRUCT(BlueprintType)
struct FItemData : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Item Data")
	FName ID;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Item Data")
	EItemQuality ItemQuality;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Item Data")
	EItemType ItemType;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Item Data")
	FItemStatistics ItemTypeStatistics;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Item Data")
	FItemAssetData ItemAssetData;
};

