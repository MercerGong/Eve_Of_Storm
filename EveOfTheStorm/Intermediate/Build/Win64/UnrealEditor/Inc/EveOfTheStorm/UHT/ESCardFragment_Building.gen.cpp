// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Definition/ESCardFragment_Building.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESCardFragment_Building() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardFragment_Building();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardFragment_Building_NoRegister();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UCardFragment();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	void UESCardFragment_Building::StaticRegisterNativesUESCardFragment_Building()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UESCardFragment_Building);
	UClass* Z_Construct_UClass_UESCardFragment_Building_NoRegister()
	{
		return UESCardFragment_Building::StaticClass();
	}
	struct Z_Construct_UClass_UESCardFragment_Building_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Building_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Building;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UESCardFragment_Building_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCardFragment,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_Building_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardFragment_Building_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Definition/ESCardFragment_Building.h" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_Building.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardFragment_Building_Statics::NewProp_Building_MetaData[] = {
		{ "Category", "ESCardFragment_Building" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_Building.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UESCardFragment_Building_Statics::NewProp_Building = { "Building", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESCardFragment_Building, Building), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_Building_Statics::NewProp_Building_MetaData), Z_Construct_UClass_UESCardFragment_Building_Statics::NewProp_Building_MetaData) }; // 1575649708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UESCardFragment_Building_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESCardFragment_Building_Statics::NewProp_Building,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UESCardFragment_Building_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UESCardFragment_Building>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UESCardFragment_Building_Statics::ClassParams = {
		&UESCardFragment_Building::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UESCardFragment_Building_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_Building_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_Building_Statics::Class_MetaDataParams), Z_Construct_UClass_UESCardFragment_Building_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_Building_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UESCardFragment_Building()
	{
		if (!Z_Registration_Info_UClass_UESCardFragment_Building.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UESCardFragment_Building.OuterSingleton, Z_Construct_UClass_UESCardFragment_Building_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UESCardFragment_Building.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<UESCardFragment_Building>()
	{
		return UESCardFragment_Building::StaticClass();
	}
	UESCardFragment_Building::UESCardFragment_Building(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UESCardFragment_Building);
	UESCardFragment_Building::~UESCardFragment_Building() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_Building_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_Building_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UESCardFragment_Building, UESCardFragment_Building::StaticClass, TEXT("UESCardFragment_Building"), &Z_Registration_Info_UClass_UESCardFragment_Building, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UESCardFragment_Building), 911567477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_Building_h_1206923574(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_Building_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_Building_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
