// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularCardSystem/Public/Types/Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCard() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UCardDefinition_NoRegister();
	MODULARCARDSYSTEM_API UEnum* Z_Construct_UEnum_ModularCardSystem_ECardModOp();
	MODULARCARDSYSTEM_API UEnum* Z_Construct_UEnum_ModularCardSystem_ECardRarity();
	MODULARCARDSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCardAttribute();
	MODULARCARDSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCardData();
	MODULARCARDSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCardVisual();
	UPackage* Z_Construct_UPackage__Script_ModularCardSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECardRarity;
	static UEnum* ECardRarity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECardRarity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECardRarity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularCardSystem_ECardRarity, (UObject*)Z_Construct_UPackage__Script_ModularCardSystem(), TEXT("ECardRarity"));
		}
		return Z_Registration_Info_UEnum_ECardRarity.OuterSingleton;
	}
	template<> MODULARCARDSYSTEM_API UEnum* StaticEnum<ECardRarity>()
	{
		return ECardRarity_StaticEnum();
	}
	struct Z_Construct_UEnum_ModularCardSystem_ECardRarity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModularCardSystem_ECardRarity_Statics::Enumerators[] = {
		{ "ECardRarity::Common", (int64)ECardRarity::Common },
		{ "ECardRarity::Uncommon", (int64)ECardRarity::Uncommon },
		{ "ECardRarity::Rare", (int64)ECardRarity::Rare },
		{ "ECardRarity::Epic", (int64)ECardRarity::Epic },
		{ "ECardRarity::Legendary", (int64)ECardRarity::Legendary },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModularCardSystem_ECardRarity_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Common.Name", "ECardRarity::Common" },
		{ "Epic.Name", "ECardRarity::Epic" },
		{ "Legendary.Name", "ECardRarity::Legendary" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
		{ "Rare.Name", "ECardRarity::Rare" },
		{ "Uncommon.Name", "ECardRarity::Uncommon" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModularCardSystem_ECardRarity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModularCardSystem,
		nullptr,
		"ECardRarity",
		"ECardRarity",
		Z_Construct_UEnum_ModularCardSystem_ECardRarity_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModularCardSystem_ECardRarity_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModularCardSystem_ECardRarity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModularCardSystem_ECardRarity_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ModularCardSystem_ECardRarity()
	{
		if (!Z_Registration_Info_UEnum_ECardRarity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECardRarity.InnerSingleton, Z_Construct_UEnum_ModularCardSystem_ECardRarity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECardRarity.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECardModOp;
	static UEnum* ECardModOp_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECardModOp.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECardModOp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularCardSystem_ECardModOp, (UObject*)Z_Construct_UPackage__Script_ModularCardSystem(), TEXT("ECardModOp"));
		}
		return Z_Registration_Info_UEnum_ECardModOp.OuterSingleton;
	}
	template<> MODULARCARDSYSTEM_API UEnum* StaticEnum<ECardModOp>()
	{
		return ECardModOp_StaticEnum();
	}
	struct Z_Construct_UEnum_ModularCardSystem_ECardModOp_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModularCardSystem_ECardModOp_Statics::Enumerators[] = {
		{ "Additive", (int64)Additive },
		{ "Multiplicitive", (int64)Multiplicitive },
		{ "Division", (int64)Division },
		{ "Override", (int64)Override },
		{ "Max", (int64)Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModularCardSystem_ECardModOp_Statics::Enum_MetaDataParams[] = {
		{ "Additive.Comment", "/** Numeric. */" },
		{ "Additive.DisplayName", "Add" },
		{ "Additive.Name", "Additive" },
		{ "Additive.ToolTip", "Numeric." },
		{ "BlueprintType", "true" },
		{ "Division.Comment", "/** Numeric. */" },
		{ "Division.DisplayName", "Divide" },
		{ "Division.Name", "Division" },
		{ "Division.ToolTip", "Numeric." },
		{ "Max.Comment", "// This must always be at the end.\n" },
		{ "Max.DisplayName", "Invalid" },
		{ "Max.Name", "Max" },
		{ "Max.ToolTip", "This must always be at the end." },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
		{ "Multiplicitive.Comment", "/** Numeric. */" },
		{ "Multiplicitive.DisplayName", "Multiply" },
		{ "Multiplicitive.Name", "Multiplicitive" },
		{ "Multiplicitive.ToolTip", "Numeric." },
		{ "Override.Comment", "/** Other. */" },
		{ "Override.DisplayName", "Override" },
		{ "Override.Name", "Override" },
		{ "Override.ToolTip", "Other." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModularCardSystem_ECardModOp_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModularCardSystem,
		nullptr,
		"ECardModOp",
		"ECardModOp",
		Z_Construct_UEnum_ModularCardSystem_ECardModOp_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModularCardSystem_ECardModOp_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModularCardSystem_ECardModOp_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModularCardSystem_ECardModOp_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ModularCardSystem_ECardModOp()
	{
		if (!Z_Registration_Info_UEnum_ECardModOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECardModOp.InnerSingleton, Z_Construct_UEnum_ModularCardSystem_ECardModOp_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECardModOp.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CardAttribute;
class UScriptStruct* FCardAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CardAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CardAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCardAttribute, (UObject*)Z_Construct_UPackage__Script_ModularCardSystem(), TEXT("CardAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_CardAttribute.OuterSingleton;
}
template<> MODULARCARDSYSTEM_API UScriptStruct* StaticStruct<FCardAttribute>()
{
	return FCardAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCardAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceId_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierOp_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModifierOp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCardAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCardAttribute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardAttribute_Statics::NewProp_ResourceId_MetaData[] = {
		{ "Category", "Card Attribute Data" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCardAttribute_Statics::NewProp_ResourceId = { "ResourceId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardAttribute, ResourceId), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardAttribute_Statics::NewProp_ResourceId_MetaData), Z_Construct_UScriptStruct_FCardAttribute_Statics::NewProp_ResourceId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardAttribute_Statics::NewProp_ModifierOp_MetaData[] = {
		{ "Category", "Card Attribute Data" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCardAttribute_Statics::NewProp_ModifierOp = { "ModifierOp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardAttribute, ModifierOp), Z_Construct_UEnum_ModularCardSystem_ECardModOp, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardAttribute_Statics::NewProp_ModifierOp_MetaData), Z_Construct_UScriptStruct_FCardAttribute_Statics::NewProp_ModifierOp_MetaData) }; // 283696021
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardAttribute_Statics::NewProp_EffectValue_MetaData[] = {
		{ "Category", "Card Attribute Data" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCardAttribute_Statics::NewProp_EffectValue = { "EffectValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardAttribute, EffectValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardAttribute_Statics::NewProp_EffectValue_MetaData), Z_Construct_UScriptStruct_FCardAttribute_Statics::NewProp_EffectValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCardAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardAttribute_Statics::NewProp_ResourceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardAttribute_Statics::NewProp_ModifierOp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardAttribute_Statics::NewProp_EffectValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCardAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModularCardSystem,
		nullptr,
		&NewStructOps,
		"CardAttribute",
		Z_Construct_UScriptStruct_FCardAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardAttribute_Statics::PropPointers),
		sizeof(FCardAttribute),
		alignof(FCardAttribute),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCardAttribute_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardAttribute_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCardAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_CardAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CardAttribute.InnerSingleton, Z_Construct_UScriptStruct_FCardAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CardAttribute.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCardVisual>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCardVisual cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CardVisual;
class UScriptStruct* FCardVisual::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CardVisual.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CardVisual.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCardVisual, (UObject*)Z_Construct_UPackage__Script_ModularCardSystem(), TEXT("CardVisual"));
	}
	return Z_Registration_Info_UScriptStruct_CardVisual.OuterSingleton;
}
template<> MODULARCARDSYSTEM_API UScriptStruct* StaticStruct<FCardVisual>()
{
	return FCardVisual::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCardVisual_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Rarity;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardVisual_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCardVisual_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCardVisual>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Card Pack Visual" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardVisual, Type), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_Type_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "Card Pack Visual" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardVisual, Rarity), Z_Construct_UEnum_ModularCardSystem_ECardRarity, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_Rarity_MetaData), Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_Rarity_MetaData) }; // 3661568023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_FrameTexture_MetaData[] = {
		{ "Category", "Visual Data" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_FrameTexture = { "FrameTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardVisual, FrameTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_FrameTexture_MetaData), Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_FrameTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_BackTexture_MetaData[] = {
		{ "Category", "Visual Data" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_BackTexture = { "BackTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardVisual, BackTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_BackTexture_MetaData), Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_BackTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_FrameMaterial_MetaData[] = {
		{ "Category", "Visual Data" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_FrameMaterial = { "FrameMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardVisual, FrameMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_FrameMaterial_MetaData), Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_FrameMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_BackMaterial_MetaData[] = {
		{ "Category", "Visual Data" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_BackMaterial = { "BackMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardVisual, BackMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_BackMaterial_MetaData), Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_BackMaterial_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCardVisual_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_Rarity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_Rarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_FrameTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_BackTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_FrameMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardVisual_Statics::NewProp_BackMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCardVisual_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModularCardSystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CardVisual",
		Z_Construct_UScriptStruct_FCardVisual_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardVisual_Statics::PropPointers),
		sizeof(FCardVisual),
		alignof(FCardVisual),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardVisual_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCardVisual_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardVisual_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCardVisual()
	{
		if (!Z_Registration_Info_UScriptStruct_CardVisual.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CardVisual.InnerSingleton, Z_Construct_UScriptStruct_FCardVisual_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CardVisual.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCardData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCardData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CardData;
class UScriptStruct* FCardData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CardData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CardData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCardData, (UObject*)Z_Construct_UPackage__Script_ModularCardSystem(), TEXT("CardData"));
	}
	return Z_Registration_Info_UScriptStruct_CardData.OuterSingleton;
}
template<> MODULARCARDSYSTEM_API UScriptStruct* StaticStruct<FCardData>()
{
	return FCardData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCardData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Rarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Definition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCardData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCardData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Card Data" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Card Data" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
		{ "MultiLine", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Card Data" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardData, Type), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Type_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "Card Data" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardData, Rarity), Z_Construct_UEnum_ModularCardSystem_ECardRarity, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Rarity_MetaData), Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Rarity_MetaData) }; // 3661568023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "Card Visual" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardData, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Image_MetaData), Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Image_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCardAttribute, METADATA_PARAMS(0, nullptr) }; // 1981160096
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Attributes_MetaData[] = {
		{ "Category", "Card Effect" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardData, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Attributes_MetaData), Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Attributes_MetaData) }; // 1981160096
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Definition_MetaData[] = {
		{ "Category", "Card Effect" },
		{ "ModuleRelativePath", "Public/Types/Card.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardData, Definition), Z_Construct_UClass_UClass, Z_Construct_UClass_UCardDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Definition_MetaData), Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Definition_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCardData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Rarity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Rarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Attributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardData_Statics::NewProp_Definition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCardData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModularCardSystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CardData",
		Z_Construct_UScriptStruct_FCardData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardData_Statics::PropPointers),
		sizeof(FCardData),
		alignof(FCardData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCardData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCardData()
	{
		if (!Z_Registration_Info_UScriptStruct_CardData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CardData.InnerSingleton, Z_Construct_UScriptStruct_FCardData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CardData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_Card_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_Card_h_Statics::EnumInfo[] = {
		{ ECardRarity_StaticEnum, TEXT("ECardRarity"), &Z_Registration_Info_UEnum_ECardRarity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3661568023U) },
		{ ECardModOp_StaticEnum, TEXT("ECardModOp"), &Z_Registration_Info_UEnum_ECardModOp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 283696021U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_Card_h_Statics::ScriptStructInfo[] = {
		{ FCardAttribute::StaticStruct, Z_Construct_UScriptStruct_FCardAttribute_Statics::NewStructOps, TEXT("CardAttribute"), &Z_Registration_Info_UScriptStruct_CardAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCardAttribute), 1981160096U) },
		{ FCardVisual::StaticStruct, Z_Construct_UScriptStruct_FCardVisual_Statics::NewStructOps, TEXT("CardVisual"), &Z_Registration_Info_UScriptStruct_CardVisual, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCardVisual), 2055685442U) },
		{ FCardData::StaticStruct, Z_Construct_UScriptStruct_FCardData_Statics::NewStructOps, TEXT("CardData"), &Z_Registration_Info_UScriptStruct_CardData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCardData), 3044133914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_Card_h_3755111753(TEXT("/Script/ModularCardSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_Card_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_Card_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_Card_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_Card_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
