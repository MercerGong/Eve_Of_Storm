// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularCardSystem/Public/MCSSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMCSSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_AMCSCard_NoRegister();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UCardPackAsset_NoRegister();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UMCSSettings();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UMCSSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModularCardSystem();
// End Cross Module References
	void UMCSSettings::StaticRegisterNativesUMCSSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMCSSettings);
	UClass* Z_Construct_UClass_UMCSSettings_NoRegister()
	{
		return UMCSSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMCSSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CardActor;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CardPacks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardPacks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CardPacks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMCSSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularCardSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSSettings_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Modular Cards" },
		{ "IncludePath", "MCSSettings.h" },
		{ "ModuleRelativePath", "Public/MCSSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSSettings_Statics::NewProp_CardActor_MetaData[] = {
		{ "Category", "Cards" },
		{ "ModuleRelativePath", "Public/MCSSettings.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMCSSettings_Statics::NewProp_CardActor = { "CardActor", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMCSSettings, CardActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AMCSCard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSSettings_Statics::NewProp_CardActor_MetaData), Z_Construct_UClass_UMCSSettings_Statics::NewProp_CardActor_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMCSSettings_Statics::NewProp_CardPacks_Inner = { "CardPacks", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCardPackAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSSettings_Statics::NewProp_CardPacks_MetaData[] = {
		{ "Category", "Cards" },
		{ "ModuleRelativePath", "Public/MCSSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMCSSettings_Statics::NewProp_CardPacks = { "CardPacks", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMCSSettings, CardPacks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSSettings_Statics::NewProp_CardPacks_MetaData), Z_Construct_UClass_UMCSSettings_Statics::NewProp_CardPacks_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMCSSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSSettings_Statics::NewProp_CardActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSSettings_Statics::NewProp_CardPacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSSettings_Statics::NewProp_CardPacks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMCSSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMCSSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMCSSettings_Statics::ClassParams = {
		&UMCSSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMCSSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMCSSettings_Statics::PropPointers),
		0,
		0x001002A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMCSSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMCSSettings()
	{
		if (!Z_Registration_Info_UClass_UMCSSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMCSSettings.OuterSingleton, Z_Construct_UClass_UMCSSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMCSSettings.OuterSingleton;
	}
	template<> MODULARCARDSYSTEM_API UClass* StaticClass<UMCSSettings>()
	{
		return UMCSSettings::StaticClass();
	}
	UMCSSettings::UMCSSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMCSSettings);
	UMCSSettings::~UMCSSettings() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMCSSettings, UMCSSettings::StaticClass, TEXT("UMCSSettings"), &Z_Registration_Info_UClass_UMCSSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMCSSettings), 60648253U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSSettings_h_2447766617(TEXT("/Script/ModularCardSystem"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
