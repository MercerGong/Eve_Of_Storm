// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Definition/ESCardFragment_Ground.h"
#include "EveOfTheStorm/Public/Core/Grid/ESGridSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESCardFragment_Ground() {}
// Cross Module References
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardFragment_Ground();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardFragment_Ground_NoRegister();
	EVEOFTHESTORM_API UScriptStruct* Z_Construct_UScriptStruct_FGridTile();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UCardFragment();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	void UESCardFragment_Ground::StaticRegisterNativesUESCardFragment_Ground()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UESCardFragment_Ground);
	UClass* Z_Construct_UClass_UESCardFragment_Ground_NoRegister()
	{
		return UESCardFragment_Ground::StaticClass();
	}
	struct Z_Construct_UClass_UESCardFragment_Ground_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Grid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UESCardFragment_Ground_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCardFragment,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_Ground_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardFragment_Ground_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Definition/ESCardFragment_Ground.h" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_Ground.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardFragment_Ground_Statics::NewProp_Grid_MetaData[] = {
		{ "Category", "ESCardFragment_Ground" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_Ground.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UESCardFragment_Ground_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESCardFragment_Ground, Grid), Z_Construct_UScriptStruct_FGridTile, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_Ground_Statics::NewProp_Grid_MetaData), Z_Construct_UClass_UESCardFragment_Ground_Statics::NewProp_Grid_MetaData) }; // 2185704064
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UESCardFragment_Ground_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESCardFragment_Ground_Statics::NewProp_Grid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UESCardFragment_Ground_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UESCardFragment_Ground>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UESCardFragment_Ground_Statics::ClassParams = {
		&UESCardFragment_Ground::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UESCardFragment_Ground_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_Ground_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_Ground_Statics::Class_MetaDataParams), Z_Construct_UClass_UESCardFragment_Ground_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_Ground_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UESCardFragment_Ground()
	{
		if (!Z_Registration_Info_UClass_UESCardFragment_Ground.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UESCardFragment_Ground.OuterSingleton, Z_Construct_UClass_UESCardFragment_Ground_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UESCardFragment_Ground.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<UESCardFragment_Ground>()
	{
		return UESCardFragment_Ground::StaticClass();
	}
	UESCardFragment_Ground::UESCardFragment_Ground(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UESCardFragment_Ground);
	UESCardFragment_Ground::~UESCardFragment_Ground() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_Ground_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_Ground_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UESCardFragment_Ground, UESCardFragment_Ground::StaticClass, TEXT("UESCardFragment_Ground"), &Z_Registration_Info_UClass_UESCardFragment_Ground, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UESCardFragment_Ground), 1563047447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_Ground_h_1214108686(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_Ground_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_Ground_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
