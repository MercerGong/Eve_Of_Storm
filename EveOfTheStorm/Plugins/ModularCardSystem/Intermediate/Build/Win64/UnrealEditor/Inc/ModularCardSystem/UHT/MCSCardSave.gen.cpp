// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularCardSystem/Public/Saves/MCSCardSave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMCSCardSave() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UMCSCardSave();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UMCSCardSave_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModularCardSystem();
// End Cross Module References
	void UMCSCardSave::StaticRegisterNativesUMCSCardSave()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMCSCardSave);
	UClass* Z_Construct_UClass_UMCSCardSave_NoRegister()
	{
		return UMCSCardSave::StaticClass();
	}
	struct Z_Construct_UClass_UMCSCardSave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_UnlockedCardNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnlockedCardNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UnlockedCardNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMCSCardSave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularCardSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardSave_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSCardSave_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Saves/MCSCardSave.h" },
		{ "ModuleRelativePath", "Public/Saves/MCSCardSave.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMCSCardSave_Statics::NewProp_UnlockedCardNames_Inner = { "UnlockedCardNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSCardSave_Statics::NewProp_UnlockedCardNames_MetaData[] = {
		{ "Category", "Card Save" },
		{ "ModuleRelativePath", "Public/Saves/MCSCardSave.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMCSCardSave_Statics::NewProp_UnlockedCardNames = { "UnlockedCardNames", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMCSCardSave, UnlockedCardNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardSave_Statics::NewProp_UnlockedCardNames_MetaData), Z_Construct_UClass_UMCSCardSave_Statics::NewProp_UnlockedCardNames_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMCSCardSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardSave_Statics::NewProp_UnlockedCardNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardSave_Statics::NewProp_UnlockedCardNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMCSCardSave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMCSCardSave>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMCSCardSave_Statics::ClassParams = {
		&UMCSCardSave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMCSCardSave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardSave_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardSave_Statics::Class_MetaDataParams), Z_Construct_UClass_UMCSCardSave_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardSave_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMCSCardSave()
	{
		if (!Z_Registration_Info_UClass_UMCSCardSave.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMCSCardSave.OuterSingleton, Z_Construct_UClass_UMCSCardSave_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMCSCardSave.OuterSingleton;
	}
	template<> MODULARCARDSYSTEM_API UClass* StaticClass<UMCSCardSave>()
	{
		return UMCSCardSave::StaticClass();
	}
	UMCSCardSave::UMCSCardSave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMCSCardSave);
	UMCSCardSave::~UMCSCardSave() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Saves_MCSCardSave_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Saves_MCSCardSave_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMCSCardSave, UMCSCardSave::StaticClass, TEXT("UMCSCardSave"), &Z_Registration_Info_UClass_UMCSCardSave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMCSCardSave), 3965976076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Saves_MCSCardSave_h_2854860862(TEXT("/Script/ModularCardSystem"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Saves_MCSCardSave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Saves_MCSCardSave_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
