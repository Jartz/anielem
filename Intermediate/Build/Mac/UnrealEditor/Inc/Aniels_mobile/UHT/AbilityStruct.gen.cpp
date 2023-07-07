// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aniels_mobile/AbilityStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityStruct() {}
// Cross Module References
	ANIELS_MOBILE_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityStruct();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aniels_mobile();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilityStruct;
class UScriptStruct* FAbilityStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilityStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityStruct, (UObject*)Z_Construct_UPackage__Script_Aniels_mobile(), TEXT("AbilityStruct"));
	}
	return Z_Registration_Info_UScriptStruct_AbilityStruct.OuterSingleton;
}
template<> ANIELS_MOBILE_API UScriptStruct* StaticStruct<FAbilityStruct>()
{
	return FAbilityStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAbilityStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CastTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IconName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilityStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "AbilityStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbilityStruct, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "AbilityStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbilityStruct, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Cost_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "AbilityStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbilityStruct, Cost), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Cost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Cost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Cooldown_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "AbilityStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbilityStruct, Cooldown), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Cooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Cooldown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_CastTime_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "AbilityStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_CastTime = { "CastTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbilityStruct, CastTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_CastTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_CastTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "AbilityStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbilityStruct, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_IconName_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "AbilityStruct.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_IconName = { "IconName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbilityStruct, IconName), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_IconName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_IconName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Cost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Cooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_CastTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_IconName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aniels_mobile,
		nullptr,
		&NewStructOps,
		"AbilityStruct",
		sizeof(FAbilityStruct),
		alignof(FAbilityStruct),
		Z_Construct_UScriptStruct_FAbilityStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbilityStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_AbilityStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilityStruct.InnerSingleton, Z_Construct_UScriptStruct_FAbilityStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AbilityStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_julianramos_Documents_Unreal_Projects_Aniels_mobile_Source_Aniels_mobile_AbilityStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_julianramos_Documents_Unreal_Projects_Aniels_mobile_Source_Aniels_mobile_AbilityStruct_h_Statics::ScriptStructInfo[] = {
		{ FAbilityStruct::StaticStruct, Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewStructOps, TEXT("AbilityStruct"), &Z_Registration_Info_UScriptStruct_AbilityStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityStruct), 3456184983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_julianramos_Documents_Unreal_Projects_Aniels_mobile_Source_Aniels_mobile_AbilityStruct_h_140172570(TEXT("/Script/Aniels_mobile"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_julianramos_Documents_Unreal_Projects_Aniels_mobile_Source_Aniels_mobile_AbilityStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_julianramos_Documents_Unreal_Projects_Aniels_mobile_Source_Aniels_mobile_AbilityStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
