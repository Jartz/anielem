// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aniels_mobile/WidgetParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetParameters() {}
// Cross Module References
	ANIELS_MOBILE_API UScriptStruct* Z_Construct_UScriptStruct_FHealthStruct();
	UPackage* Z_Construct_UPackage__Script_Aniels_mobile();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HealthStruct;
class UScriptStruct* FHealthStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HealthStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HealthStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHealthStruct, (UObject*)Z_Construct_UPackage__Script_Aniels_mobile(), TEXT("HealthStruct"));
	}
	return Z_Registration_Info_UScriptStruct_HealthStruct.OuterSingleton;
}
template<> ANIELS_MOBILE_API UScriptStruct* StaticStruct<FHealthStruct>()
{
	return FHealthStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHealthStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WidgetParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHealthStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHealthStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealthStruct_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Widget Parameters" },
		{ "ModuleRelativePath", "WidgetParameters.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHealthStruct_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHealthStruct, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthStruct_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthStruct_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHealthStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthStruct_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHealthStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aniels_mobile,
		nullptr,
		&NewStructOps,
		"HealthStruct",
		sizeof(FHealthStruct),
		alignof(FHealthStruct),
		Z_Construct_UScriptStruct_FHealthStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHealthStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHealthStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_HealthStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HealthStruct.InnerSingleton, Z_Construct_UScriptStruct_FHealthStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HealthStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_julianramos_Documents_Unreal_Projects_Aniels_mobile_Source_Aniels_mobile_WidgetParameters_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_julianramos_Documents_Unreal_Projects_Aniels_mobile_Source_Aniels_mobile_WidgetParameters_h_Statics::ScriptStructInfo[] = {
		{ FHealthStruct::StaticStruct, Z_Construct_UScriptStruct_FHealthStruct_Statics::NewStructOps, TEXT("HealthStruct"), &Z_Registration_Info_UScriptStruct_HealthStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHealthStruct), 1391524959U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_julianramos_Documents_Unreal_Projects_Aniels_mobile_Source_Aniels_mobile_WidgetParameters_h_4239825052(TEXT("/Script/Aniels_mobile"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_julianramos_Documents_Unreal_Projects_Aniels_mobile_Source_Aniels_mobile_WidgetParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_julianramos_Documents_Unreal_Projects_Aniels_mobile_Source_Aniels_mobile_WidgetParameters_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
