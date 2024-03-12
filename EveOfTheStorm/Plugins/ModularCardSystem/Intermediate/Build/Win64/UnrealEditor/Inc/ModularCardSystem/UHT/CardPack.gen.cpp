// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularCardSystem/Public/Types/CardPack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardPack() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UCardPackAsset();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UCardPackAsset_NoRegister();
	MODULARCARDSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCardPackVisual();
	UPackage* Z_Construct_UPackage__Script_ModularCardSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CardPackVisual;
class UScriptStruct* FCardPackVisual::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CardPackVisual.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CardPackVisual.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCardPackVisual, (UObject*)Z_Construct_UPackage__Script_ModularCardSystem(), TEXT("CardPackVisual"));
	}
	return Z_Registration_Info_UScriptStruct_CardPackVisual.OuterSingleton;
}
template<> MODULARCARDSYSTEM_API UScriptStruct* StaticStruct<FCardPackVisual>()
{
	return FCardPackVisual::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCardPackVisual_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrameTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrameMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardPackVisual_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/CardPack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCardPackVisual>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Card Pack Visual" },
		{ "ModuleRelativePath", "Public/Types/CardPack.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardPackVisual, Type), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_Type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_FrameTexture_MetaData[] = {
		{ "Category", "Visual Data" },
		{ "ModuleRelativePath", "Public/Types/CardPack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_FrameTexture = { "FrameTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardPackVisual, FrameTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_FrameTexture_MetaData), Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_FrameTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_BackTexture_MetaData[] = {
		{ "Category", "Visual Data" },
		{ "ModuleRelativePath", "Public/Types/CardPack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_BackTexture = { "BackTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardPackVisual, BackTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_BackTexture_MetaData), Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_BackTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_FrameMaterial_MetaData[] = {
		{ "Category", "Visual Data" },
		{ "ModuleRelativePath", "Public/Types/CardPack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_FrameMaterial = { "FrameMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardPackVisual, FrameMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_FrameMaterial_MetaData), Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_FrameMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_BackMaterial_MetaData[] = {
		{ "Category", "Visual Data" },
		{ "ModuleRelativePath", "Public/Types/CardPack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_BackMaterial = { "BackMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardPackVisual, BackMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_BackMaterial_MetaData), Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_BackMaterial_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCardPackVisual_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_FrameTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_BackTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_FrameMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewProp_BackMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCardPackVisual_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModularCardSystem,
		nullptr,
		&NewStructOps,
		"CardPackVisual",
		Z_Construct_UScriptStruct_FCardPackVisual_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardPackVisual_Statics::PropPointers),
		sizeof(FCardPackVisual),
		alignof(FCardPackVisual),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardPackVisual_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCardPackVisual_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardPackVisual_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCardPackVisual()
	{
		if (!Z_Registration_Info_UScriptStruct_CardPackVisual.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CardPackVisual.InnerSingleton, Z_Construct_UScriptStruct_FCardPackVisual_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CardPackVisual.InnerSingleton;
	}
	void UCardPackAsset::StaticRegisterNativesUCardPackAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCardPackAsset);
	UClass* Z_Construct_UClass_UCardPackAsset_NoRegister()
	{
		return UCardPackAsset::StaticClass();
	}
	struct Z_Construct_UClass_UCardPackAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardTable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Visuals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Visuals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Visuals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCardPackAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularCardSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCardPackAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardPackAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Types/CardPack.h" },
		{ "ModuleRelativePath", "Public/Types/CardPack.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Pack Data" },
		{ "ModuleRelativePath", "Public/Types/CardPack.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardPackAsset, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Pack Data" },
		{ "ModuleRelativePath", "Public/Types/CardPack.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardPackAsset, Title), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Title_MetaData), Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Title_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Pack Data" },
		{ "ModuleRelativePath", "Public/Types/CardPack.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardPackAsset, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Description_MetaData), Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Pack Data" },
		{ "ModuleRelativePath", "Public/Types/CardPack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardPackAsset, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Icon_MetaData), Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Icon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardPackAsset_Statics::NewProp_CardTable_MetaData[] = {
		{ "Category", "Pack Data" },
		{ "ModuleRelativePath", "Public/Types/CardPack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardPackAsset_Statics::NewProp_CardTable = { "CardTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardPackAsset, CardTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCardPackAsset_Statics::NewProp_CardTable_MetaData), Z_Construct_UClass_UCardPackAsset_Statics::NewProp_CardTable_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Visuals_Inner = { "Visuals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCardPackVisual, METADATA_PARAMS(0, nullptr) }; // 1334872615
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Visuals_MetaData[] = {
		{ "Category", "Pack Data" },
		{ "ModuleRelativePath", "Public/Types/CardPack.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Visuals = { "Visuals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardPackAsset, Visuals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Visuals_MetaData), Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Visuals_MetaData) }; // 1334872615
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCardPackAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardPackAsset_Statics::NewProp_CardTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Visuals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardPackAsset_Statics::NewProp_Visuals,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCardPackAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCardPackAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCardPackAsset_Statics::ClassParams = {
		&UCardPackAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCardPackAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCardPackAsset_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCardPackAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCardPackAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCardPackAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCardPackAsset()
	{
		if (!Z_Registration_Info_UClass_UCardPackAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCardPackAsset.OuterSingleton, Z_Construct_UClass_UCardPackAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCardPackAsset.OuterSingleton;
	}
	template<> MODULARCARDSYSTEM_API UClass* StaticClass<UCardPackAsset>()
	{
		return UCardPackAsset::StaticClass();
	}
	UCardPackAsset::UCardPackAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCardPackAsset);
	UCardPackAsset::~UCardPackAsset() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_CardPack_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_CardPack_h_Statics::ScriptStructInfo[] = {
		{ FCardPackVisual::StaticStruct, Z_Construct_UScriptStruct_FCardPackVisual_Statics::NewStructOps, TEXT("CardPackVisual"), &Z_Registration_Info_UScriptStruct_CardPackVisual, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCardPackVisual), 1334872615U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_CardPack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCardPackAsset, UCardPackAsset::StaticClass, TEXT("UCardPackAsset"), &Z_Registration_Info_UClass_UCardPackAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCardPackAsset), 3719061034U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_CardPack_h_4055686134(TEXT("/Script/ModularCardSystem"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_CardPack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_CardPack_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_CardPack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_CardPack_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
