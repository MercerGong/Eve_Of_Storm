// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Definition/ESCardFragment_CardUpgrade.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESCardFragment_CardUpgrade() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardFragment_CardUpgrade();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardFragment_CardUpgrade_NoRegister();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UCardFragment();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	void UESCardFragment_CardUpgrade::StaticRegisterNativesUESCardFragment_CardUpgrade()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UESCardFragment_CardUpgrade);
	UClass* Z_Construct_UClass_UESCardFragment_CardUpgrade_NoRegister()
	{
		return UESCardFragment_CardUpgrade::StaticClass();
	}
	struct Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpgradeCards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpgradeCards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UpgradeCards;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCardFragment,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Definition/ESCardFragment_CardUpgrade.h" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_CardUpgrade.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics::NewProp_UpgradeCards_Inner = { "UpgradeCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(0, nullptr) }; // 1575649708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics::NewProp_UpgradeCards_MetaData[] = {
		{ "Category", "ESCardFragment_CardUpgrade" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_CardUpgrade.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics::NewProp_UpgradeCards = { "UpgradeCards", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESCardFragment_CardUpgrade, UpgradeCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics::NewProp_UpgradeCards_MetaData), Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics::NewProp_UpgradeCards_MetaData) }; // 1575649708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics::NewProp_UpgradeCards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics::NewProp_UpgradeCards,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UESCardFragment_CardUpgrade>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics::ClassParams = {
		&UESCardFragment_CardUpgrade::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics::Class_MetaDataParams), Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UESCardFragment_CardUpgrade()
	{
		if (!Z_Registration_Info_UClass_UESCardFragment_CardUpgrade.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UESCardFragment_CardUpgrade.OuterSingleton, Z_Construct_UClass_UESCardFragment_CardUpgrade_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UESCardFragment_CardUpgrade.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<UESCardFragment_CardUpgrade>()
	{
		return UESCardFragment_CardUpgrade::StaticClass();
	}
	UESCardFragment_CardUpgrade::UESCardFragment_CardUpgrade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UESCardFragment_CardUpgrade);
	UESCardFragment_CardUpgrade::~UESCardFragment_CardUpgrade() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_CardUpgrade_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_CardUpgrade_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UESCardFragment_CardUpgrade, UESCardFragment_CardUpgrade::StaticClass, TEXT("UESCardFragment_CardUpgrade"), &Z_Registration_Info_UClass_UESCardFragment_CardUpgrade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UESCardFragment_CardUpgrade), 418872649U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_CardUpgrade_h_3231054290(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_CardUpgrade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_CardUpgrade_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
