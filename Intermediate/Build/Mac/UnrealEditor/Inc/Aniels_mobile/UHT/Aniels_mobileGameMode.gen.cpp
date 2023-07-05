// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aniels_mobile/Aniels_mobileGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAniels_mobileGameMode() {}
// Cross Module References
	ANIELS_MOBILE_API UClass* Z_Construct_UClass_AAniels_mobileGameMode();
	ANIELS_MOBILE_API UClass* Z_Construct_UClass_AAniels_mobileGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Aniels_mobile();
// End Cross Module References
	void AAniels_mobileGameMode::StaticRegisterNativesAAniels_mobileGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAniels_mobileGameMode);
	UClass* Z_Construct_UClass_AAniels_mobileGameMode_NoRegister()
	{
		return AAniels_mobileGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAniels_mobileGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAniels_mobileGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Aniels_mobile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAniels_mobileGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Aniels_mobileGameMode.h" },
		{ "ModuleRelativePath", "Aniels_mobileGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAniels_mobileGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAniels_mobileGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAniels_mobileGameMode_Statics::ClassParams = {
		&AAniels_mobileGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAniels_mobileGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAniels_mobileGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAniels_mobileGameMode()
	{
		if (!Z_Registration_Info_UClass_AAniels_mobileGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAniels_mobileGameMode.OuterSingleton, Z_Construct_UClass_AAniels_mobileGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAniels_mobileGameMode.OuterSingleton;
	}
	template<> ANIELS_MOBILE_API UClass* StaticClass<AAniels_mobileGameMode>()
	{
		return AAniels_mobileGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAniels_mobileGameMode);
	AAniels_mobileGameMode::~AAniels_mobileGameMode() {}
	struct Z_CompiledInDeferFile_FID_julianramos_Documents_Unreal_Projects_Aniels_mobile_Source_Aniels_mobile_Aniels_mobileGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_julianramos_Documents_Unreal_Projects_Aniels_mobile_Source_Aniels_mobile_Aniels_mobileGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAniels_mobileGameMode, AAniels_mobileGameMode::StaticClass, TEXT("AAniels_mobileGameMode"), &Z_Registration_Info_UClass_AAniels_mobileGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAniels_mobileGameMode), 3243288761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_julianramos_Documents_Unreal_Projects_Aniels_mobile_Source_Aniels_mobile_Aniels_mobileGameMode_h_882899133(TEXT("/Script/Aniels_mobile"),
		Z_CompiledInDeferFile_FID_julianramos_Documents_Unreal_Projects_Aniels_mobile_Source_Aniels_mobile_Aniels_mobileGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_julianramos_Documents_Unreal_Projects_Aniels_mobile_Source_Aniels_mobile_Aniels_mobileGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
