// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Game/ESGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESGameInstance() {}
// Cross Module References
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESGameInstance();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESGameInstance_NoRegister();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UMCSGameInstance();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	void UESGameInstance::StaticRegisterNativesUESGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UESGameInstance);
	UClass* Z_Construct_UClass_UESGameInstance_NoRegister()
	{
		return UESGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UESGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UESGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMCSGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESGameInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESGameInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Game/ESGameInstance.h" },
		{ "ModuleRelativePath", "Public/Core/Game/ESGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UESGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UESGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UESGameInstance_Statics::ClassParams = {
		&UESGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UESGameInstance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UESGameInstance()
	{
		if (!Z_Registration_Info_UClass_UESGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UESGameInstance.OuterSingleton, Z_Construct_UClass_UESGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UESGameInstance.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<UESGameInstance>()
	{
		return UESGameInstance::StaticClass();
	}
	UESGameInstance::UESGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UESGameInstance);
	UESGameInstance::~UESGameInstance() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UESGameInstance, UESGameInstance::StaticClass, TEXT("UESGameInstance"), &Z_Registration_Info_UClass_UESGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UESGameInstance), 3468572921U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameInstance_h_2807330985(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
