// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Definition/ESCardFragment_GroundBuilding.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESCardFragment_GroundBuilding() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardFragment_GroundBuilding();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardFragment_GroundBuilding_NoRegister();
	EVEOFTHESTORM_API UScriptStruct* Z_Construct_UScriptStruct_FGridBuildStruct();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UCardFragment();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridBuildStruct;
class UScriptStruct* FGridBuildStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridBuildStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridBuildStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridBuildStruct, (UObject*)Z_Construct_UPackage__Script_EveOfTheStorm(), TEXT("GridBuildStruct"));
	}
	return Z_Registration_Info_UScriptStruct_GridBuildStruct.OuterSingleton;
}
template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<FGridBuildStruct>()
{
	return FGridBuildStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGridBuildStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Percentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Percentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Building_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Building;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridBuildStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_GroundBuilding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridBuildStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridBuildStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridBuildStruct_Statics::NewProp_Percentage_MetaData[] = {
		{ "Category", "GridBuildStruct" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_GroundBuilding.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGridBuildStruct_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridBuildStruct, Percentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBuildStruct_Statics::NewProp_Percentage_MetaData), Z_Construct_UScriptStruct_FGridBuildStruct_Statics::NewProp_Percentage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridBuildStruct_Statics::NewProp_Limit_MetaData[] = {
		{ "Category", "GridBuildStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If limit is zero, that means it has no limit\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_GroundBuilding.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If limit is zero, that means it has no limit" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridBuildStruct_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridBuildStruct, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBuildStruct_Statics::NewProp_Limit_MetaData), Z_Construct_UScriptStruct_FGridBuildStruct_Statics::NewProp_Limit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridBuildStruct_Statics::NewProp_Building_MetaData[] = {
		{ "Category", "GridBuildStruct" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_GroundBuilding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridBuildStruct_Statics::NewProp_Building = { "Building", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridBuildStruct, Building), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBuildStruct_Statics::NewProp_Building_MetaData), Z_Construct_UScriptStruct_FGridBuildStruct_Statics::NewProp_Building_MetaData) }; // 1575649708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridBuildStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridBuildStruct_Statics::NewProp_Percentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridBuildStruct_Statics::NewProp_Limit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridBuildStruct_Statics::NewProp_Building,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridBuildStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
		nullptr,
		&NewStructOps,
		"GridBuildStruct",
		Z_Construct_UScriptStruct_FGridBuildStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBuildStruct_Statics::PropPointers),
		sizeof(FGridBuildStruct),
		alignof(FGridBuildStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBuildStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridBuildStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBuildStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGridBuildStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_GridBuildStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridBuildStruct.InnerSingleton, Z_Construct_UScriptStruct_FGridBuildStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GridBuildStruct.InnerSingleton;
	}
	void UESCardFragment_GroundBuilding::StaticRegisterNativesUESCardFragment_GroundBuilding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UESCardFragment_GroundBuilding);
	UClass* Z_Construct_UClass_UESCardFragment_GroundBuilding_NoRegister()
	{
		return UESCardFragment_GroundBuilding::StaticClass();
	}
	struct Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Building_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Building_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Building;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCardFragment,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Definition/ESCardFragment_GroundBuilding.h" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_GroundBuilding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics::NewProp_Building_Inner = { "Building", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridBuildStruct, METADATA_PARAMS(0, nullptr) }; // 710488553
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics::NewProp_Building_MetaData[] = {
		{ "Category", "ESCardFragment_GroundBuilding" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_GroundBuilding.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics::NewProp_Building = { "Building", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESCardFragment_GroundBuilding, Building), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics::NewProp_Building_MetaData), Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics::NewProp_Building_MetaData) }; // 710488553
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics::NewProp_Building_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics::NewProp_Building,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UESCardFragment_GroundBuilding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics::ClassParams = {
		&UESCardFragment_GroundBuilding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics::Class_MetaDataParams), Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UESCardFragment_GroundBuilding()
	{
		if (!Z_Registration_Info_UClass_UESCardFragment_GroundBuilding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UESCardFragment_GroundBuilding.OuterSingleton, Z_Construct_UClass_UESCardFragment_GroundBuilding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UESCardFragment_GroundBuilding.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<UESCardFragment_GroundBuilding>()
	{
		return UESCardFragment_GroundBuilding::StaticClass();
	}
	UESCardFragment_GroundBuilding::UESCardFragment_GroundBuilding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UESCardFragment_GroundBuilding);
	UESCardFragment_GroundBuilding::~UESCardFragment_GroundBuilding() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_GroundBuilding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_GroundBuilding_h_Statics::ScriptStructInfo[] = {
		{ FGridBuildStruct::StaticStruct, Z_Construct_UScriptStruct_FGridBuildStruct_Statics::NewStructOps, TEXT("GridBuildStruct"), &Z_Registration_Info_UScriptStruct_GridBuildStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridBuildStruct), 710488553U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_GroundBuilding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UESCardFragment_GroundBuilding, UESCardFragment_GroundBuilding::StaticClass, TEXT("UESCardFragment_GroundBuilding"), &Z_Registration_Info_UClass_UESCardFragment_GroundBuilding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UESCardFragment_GroundBuilding), 3778845168U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_GroundBuilding_h_1102253305(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_GroundBuilding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_GroundBuilding_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_GroundBuilding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_GroundBuilding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
