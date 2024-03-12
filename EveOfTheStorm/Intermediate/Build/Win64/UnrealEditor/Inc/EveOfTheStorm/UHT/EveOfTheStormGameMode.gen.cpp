// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/EveOfTheStormGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEveOfTheStormGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AEveOfTheStormGameMode();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AEveOfTheStormGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	void AEveOfTheStormGameMode::StaticRegisterNativesAEveOfTheStormGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEveOfTheStormGameMode);
	UClass* Z_Construct_UClass_AEveOfTheStormGameMode_NoRegister()
	{
		return AEveOfTheStormGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AEveOfTheStormGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEveOfTheStormGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EveOfTheStormGameMode.h" },
		{ "ModuleRelativePath", "EveOfTheStormGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEveOfTheStormGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEveOfTheStormGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEveOfTheStormGameMode_Statics::ClassParams = {
		&AEveOfTheStormGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AEveOfTheStormGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEveOfTheStormGameMode()
	{
		if (!Z_Registration_Info_UClass_AEveOfTheStormGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEveOfTheStormGameMode.OuterSingleton, Z_Construct_UClass_AEveOfTheStormGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEveOfTheStormGameMode.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<AEveOfTheStormGameMode>()
	{
		return AEveOfTheStormGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEveOfTheStormGameMode);
	AEveOfTheStormGameMode::~AEveOfTheStormGameMode() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_EveOfTheStormGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_EveOfTheStormGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEveOfTheStormGameMode, AEveOfTheStormGameMode::StaticClass, TEXT("AEveOfTheStormGameMode"), &Z_Registration_Info_UClass_AEveOfTheStormGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEveOfTheStormGameMode), 2052523315U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_EveOfTheStormGameMode_h_3921560096(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_EveOfTheStormGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_EveOfTheStormGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
