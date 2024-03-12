// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularCardSystem/Public/MCSCardRegistrySubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "ModularCardSystem/Public/Types/Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMCSCardRegistrySubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_AMCSCard_NoRegister();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UCardPackAsset_NoRegister();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UMCSCardRegistrySubsystem();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UMCSCardRegistrySubsystem_NoRegister();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UMCSCardWidget_NoRegister();
	MODULARCARDSYSTEM_API UEnum* Z_Construct_UEnum_ModularCardSystem_ECardRarity();
	MODULARCARDSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCardData();
	MODULARCARDSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCardFilterParameters();
	MODULARCARDSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCardVisual();
	UPackage* Z_Construct_UPackage__Script_ModularCardSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CardFilterParameters;
class UScriptStruct* FCardFilterParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CardFilterParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CardFilterParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCardFilterParameters, (UObject*)Z_Construct_UPackage__Script_ModularCardSystem(), TEXT("CardFilterParameters"));
	}
	return Z_Registration_Info_UScriptStruct_CardFilterParameters.OuterSingleton;
}
template<> MODULARCARDSYSTEM_API UScriptStruct* StaticStruct<FCardFilterParameters>()
{
	return FCardFilterParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCardFilterParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Rarity_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Rarity_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rarity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardFilterParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCardFilterParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCardFilterParameters>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCardFilterParameters_Statics::NewProp_Rarity_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCardFilterParameters_Statics::NewProp_Rarity_Inner = { "Rarity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ModularCardSystem_ECardRarity, METADATA_PARAMS(0, nullptr) }; // 3661568023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardFilterParameters_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "Card Filter" },
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCardFilterParameters_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardFilterParameters, Rarity), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardFilterParameters_Statics::NewProp_Rarity_MetaData), Z_Construct_UScriptStruct_FCardFilterParameters_Statics::NewProp_Rarity_MetaData) }; // 3661568023
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCardFilterParameters_Statics::NewProp_Type_Inner = { "Type", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardFilterParameters_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Card Filter" },
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCardFilterParameters_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardFilterParameters, Type), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardFilterParameters_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FCardFilterParameters_Statics::NewProp_Type_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCardFilterParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardFilterParameters_Statics::NewProp_Rarity_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardFilterParameters_Statics::NewProp_Rarity_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardFilterParameters_Statics::NewProp_Rarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardFilterParameters_Statics::NewProp_Type_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardFilterParameters_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCardFilterParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModularCardSystem,
		nullptr,
		&NewStructOps,
		"CardFilterParameters",
		Z_Construct_UScriptStruct_FCardFilterParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardFilterParameters_Statics::PropPointers),
		sizeof(FCardFilterParameters),
		alignof(FCardFilterParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardFilterParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCardFilterParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardFilterParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCardFilterParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_CardFilterParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CardFilterParameters.InnerSingleton, Z_Construct_UScriptStruct_FCardFilterParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CardFilterParameters.InnerSingleton;
	}
	DEFINE_FUNCTION(UMCSCardRegistrySubsystem::execGetCardVisual)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FByteProperty,Z_Param_InType);
		P_GET_ENUM(ECardRarity,Z_Param_InRarity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCardVisual*)Z_Param__Result=P_THIS->GetCardVisual(Z_Param_Name,Z_Param_InType,ECardRarity(Z_Param_InRarity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMCSCardRegistrySubsystem::execGetCardPacks)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutCardPacks);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCardPacks(Z_Param_Out_OutCardPacks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMCSCardRegistrySubsystem::execGetRandomCard)
	{
		P_GET_STRUCT_REF(FCardFilterParameters,Z_Param_Out_Filter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetRandomCard(Z_Param_Out_Filter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMCSCardRegistrySubsystem::execDrawRandomCard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->DrawRandomCard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMCSCardRegistrySubsystem::execFilterCards)
	{
		P_GET_STRUCT_REF(FCardFilterParameters,Z_Param_Out_Filter);
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutCards);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FilterCards(Z_Param_Out_Filter,Z_Param_Out_OutCards);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMCSCardRegistrySubsystem::execGetCardData)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CardName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCardData*)Z_Param__Result=P_THIS->GetCardData(Z_Param_CardName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMCSCardRegistrySubsystem::execRegisterCardPack)
	{
		P_GET_OBJECT(UCardPackAsset,Z_Param_CardPack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterCardPack(Z_Param_CardPack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMCSCardRegistrySubsystem::execRegisterTheme)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Theme);
		P_GET_OBJECT(UDataTable,Z_Param_CardTheme);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterTheme(Z_Param_Theme,Z_Param_CardTheme);
		P_NATIVE_END;
	}
	void UMCSCardRegistrySubsystem::StaticRegisterNativesUMCSCardRegistrySubsystem()
	{
		UClass* Class = UMCSCardRegistrySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawRandomCard", &UMCSCardRegistrySubsystem::execDrawRandomCard },
			{ "FilterCards", &UMCSCardRegistrySubsystem::execFilterCards },
			{ "GetCardData", &UMCSCardRegistrySubsystem::execGetCardData },
			{ "GetCardPacks", &UMCSCardRegistrySubsystem::execGetCardPacks },
			{ "GetCardVisual", &UMCSCardRegistrySubsystem::execGetCardVisual },
			{ "GetRandomCard", &UMCSCardRegistrySubsystem::execGetRandomCard },
			{ "RegisterCardPack", &UMCSCardRegistrySubsystem::execRegisterCardPack },
			{ "RegisterTheme", &UMCSCardRegistrySubsystem::execRegisterTheme },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMCSCardRegistrySubsystem_DrawRandomCard_Statics
	{
		struct MCSCardRegistrySubsystem_eventDrawRandomCard_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_DrawRandomCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCSCardRegistrySubsystem_eventDrawRandomCard_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMCSCardRegistrySubsystem_DrawRandomCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardRegistrySubsystem_DrawRandomCard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCSCardRegistrySubsystem_DrawRandomCard_Statics::Function_MetaDataParams[] = {
		{ "Category", "Card|Registry" },
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_DrawRandomCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMCSCardRegistrySubsystem, nullptr, "DrawRandomCard", nullptr, nullptr, Z_Construct_UFunction_UMCSCardRegistrySubsystem_DrawRandomCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_DrawRandomCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMCSCardRegistrySubsystem_DrawRandomCard_Statics::MCSCardRegistrySubsystem_eventDrawRandomCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_DrawRandomCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMCSCardRegistrySubsystem_DrawRandomCard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_DrawRandomCard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMCSCardRegistrySubsystem_DrawRandomCard_Statics::MCSCardRegistrySubsystem_eventDrawRandomCard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMCSCardRegistrySubsystem_DrawRandomCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMCSCardRegistrySubsystem_DrawRandomCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics
	{
		struct MCSCardRegistrySubsystem_eventFilterCards_Parms
		{
			FCardFilterParameters Filter;
			TArray<FName> OutCards;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutCards_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutCards;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCSCardRegistrySubsystem_eventFilterCards_Parms, Filter), Z_Construct_UScriptStruct_FCardFilterParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::NewProp_Filter_MetaData), Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::NewProp_Filter_MetaData) }; // 2702240916
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::NewProp_OutCards_Inner = { "OutCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::NewProp_OutCards = { "OutCards", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCSCardRegistrySubsystem_eventFilterCards_Parms, OutCards), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::NewProp_OutCards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::NewProp_OutCards,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::Function_MetaDataParams[] = {
		{ "Category", "Card|Registry" },
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMCSCardRegistrySubsystem, nullptr, "FilterCards", nullptr, nullptr, Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::MCSCardRegistrySubsystem_eventFilterCards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::MCSCardRegistrySubsystem_eventFilterCards_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardData_Statics
	{
		struct MCSCardRegistrySubsystem_eventGetCardData_Parms
		{
			FName CardName;
			FCardData ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_CardName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardData_Statics::NewProp_CardName = { "CardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCSCardRegistrySubsystem_eventGetCardData_Parms, CardName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCSCardRegistrySubsystem_eventGetCardData_Parms, ReturnValue), Z_Construct_UScriptStruct_FCardData, METADATA_PARAMS(0, nullptr) }; // 3044133914
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardData_Statics::NewProp_CardName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Card|Registry" },
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMCSCardRegistrySubsystem, nullptr, "GetCardData", nullptr, nullptr, Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardData_Statics::MCSCardRegistrySubsystem_eventGetCardData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardData_Statics::MCSCardRegistrySubsystem_eventGetCardData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardPacks_Statics
	{
		struct MCSCardRegistrySubsystem_eventGetCardPacks_Parms
		{
			TArray<FName> OutCardPacks;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutCardPacks_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutCardPacks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardPacks_Statics::NewProp_OutCardPacks_Inner = { "OutCardPacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardPacks_Statics::NewProp_OutCardPacks = { "OutCardPacks", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCSCardRegistrySubsystem_eventGetCardPacks_Parms, OutCardPacks), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardPacks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardPacks_Statics::NewProp_OutCardPacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardPacks_Statics::NewProp_OutCardPacks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardPacks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Card|Registry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GETTER\n" },
#endif
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GETTER" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardPacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMCSCardRegistrySubsystem, nullptr, "GetCardPacks", nullptr, nullptr, Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardPacks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardPacks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardPacks_Statics::MCSCardRegistrySubsystem_eventGetCardPacks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardPacks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardPacks_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardPacks_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardPacks_Statics::MCSCardRegistrySubsystem_eventGetCardPacks_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardPacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardPacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics
	{
		struct MCSCardRegistrySubsystem_eventGetCardVisual_Parms
		{
			FName Name;
			uint8 InType;
			ECardRarity InRarity;
			FCardVisual ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InRarity_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InRarity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCSCardRegistrySubsystem_eventGetCardVisual_Parms, Name), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCSCardRegistrySubsystem_eventGetCardVisual_Parms, InType), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::NewProp_InRarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::NewProp_InRarity = { "InRarity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCSCardRegistrySubsystem_eventGetCardVisual_Parms, InRarity), Z_Construct_UEnum_ModularCardSystem_ECardRarity, METADATA_PARAMS(0, nullptr) }; // 3661568023
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCSCardRegistrySubsystem_eventGetCardVisual_Parms, ReturnValue), Z_Construct_UScriptStruct_FCardVisual, METADATA_PARAMS(0, nullptr) }; // 2055685442
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::NewProp_InType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::NewProp_InRarity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::NewProp_InRarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::Function_MetaDataParams[] = {
		{ "Category", "Card|Registry" },
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMCSCardRegistrySubsystem, nullptr, "GetCardVisual", nullptr, nullptr, Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::MCSCardRegistrySubsystem_eventGetCardVisual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::MCSCardRegistrySubsystem_eventGetCardVisual_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard_Statics
	{
		struct MCSCardRegistrySubsystem_eventGetRandomCard_Parms
		{
			FCardFilterParameters Filter;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard_Statics::NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCSCardRegistrySubsystem_eventGetRandomCard_Parms, Filter), Z_Construct_UScriptStruct_FCardFilterParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard_Statics::NewProp_Filter_MetaData), Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard_Statics::NewProp_Filter_MetaData) }; // 2702240916
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCSCardRegistrySubsystem_eventGetRandomCard_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard_Statics::Function_MetaDataParams[] = {
		{ "Category", "Card|Registry" },
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMCSCardRegistrySubsystem, nullptr, "GetRandomCard", nullptr, nullptr, Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard_Statics::MCSCardRegistrySubsystem_eventGetRandomCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard_Statics::MCSCardRegistrySubsystem_eventGetRandomCard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterCardPack_Statics
	{
		struct MCSCardRegistrySubsystem_eventRegisterCardPack_Parms
		{
			UCardPackAsset* CardPack;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardPack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterCardPack_Statics::NewProp_CardPack = { "CardPack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCSCardRegistrySubsystem_eventRegisterCardPack_Parms, CardPack), Z_Construct_UClass_UCardPackAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterCardPack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterCardPack_Statics::NewProp_CardPack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterCardPack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Card|Registry" },
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterCardPack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMCSCardRegistrySubsystem, nullptr, "RegisterCardPack", nullptr, nullptr, Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterCardPack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterCardPack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterCardPack_Statics::MCSCardRegistrySubsystem_eventRegisterCardPack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterCardPack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterCardPack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterCardPack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterCardPack_Statics::MCSCardRegistrySubsystem_eventRegisterCardPack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterCardPack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterCardPack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterTheme_Statics
	{
		struct MCSCardRegistrySubsystem_eventRegisterTheme_Parms
		{
			FName Theme;
			UDataTable* CardTheme;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Theme;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardTheme;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterTheme_Statics::NewProp_Theme = { "Theme", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCSCardRegistrySubsystem_eventRegisterTheme_Parms, Theme), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterTheme_Statics::NewProp_CardTheme = { "CardTheme", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCSCardRegistrySubsystem_eventRegisterTheme_Parms, CardTheme), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterTheme_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterTheme_Statics::NewProp_Theme,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterTheme_Statics::NewProp_CardTheme,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterTheme_Statics::Function_MetaDataParams[] = {
		{ "Category", "Card|Registry" },
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterTheme_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMCSCardRegistrySubsystem, nullptr, "RegisterTheme", nullptr, nullptr, Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterTheme_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterTheme_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterTheme_Statics::MCSCardRegistrySubsystem_eventRegisterTheme_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterTheme_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterTheme_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterTheme_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterTheme_Statics::MCSCardRegistrySubsystem_eventRegisterTheme_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterTheme()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterTheme_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMCSCardRegistrySubsystem);
	UClass* Z_Construct_UClass_UMCSCardRegistrySubsystem_NoRegister()
	{
		return UMCSCardRegistrySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rarity_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Rarity_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Rarity_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Rarity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Type_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Type;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CardPacks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardPacks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CardPacks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CardWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CardActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCardLock_MetaData[];
#endif
		static void NewProp_bEnableCardLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCardLock;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CardUnlockMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CardUnlockMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardUnlockMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CardUnlockMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CardMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CardMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CardMap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VisualMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_VisualMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_VisualMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularCardSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMCSCardRegistrySubsystem_DrawRandomCard, "DrawRandomCard" }, // 789541974
		{ &Z_Construct_UFunction_UMCSCardRegistrySubsystem_FilterCards, "FilterCards" }, // 59735376
		{ &Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardData, "GetCardData" }, // 3294078115
		{ &Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardPacks, "GetCardPacks" }, // 341998467
		{ &Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetCardVisual, "GetCardVisual" }, // 3196742241
		{ &Z_Construct_UFunction_UMCSCardRegistrySubsystem_GetRandomCard, "GetRandomCard" }, // 1789317616
		{ &Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterCardPack, "RegisterCardPack" }, // 211734466
		{ &Z_Construct_UFunction_UMCSCardRegistrySubsystem_RegisterTheme, "RegisterTheme" }, // 142589768
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MCSCardRegistrySubsystem.h" },
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Rarity_ValueProp = { "Rarity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Rarity_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Rarity_Key_KeyProp = { "Rarity_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ModularCardSystem_ECardRarity, METADATA_PARAMS(0, nullptr) }; // 3661568023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "Cards" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = \"Cards\")\n// TArray<class UCardPackAsset*> CardPacks;\n" },
#endif
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = \"Cards\")\nTArray<class UCardPackAsset*> CardPacks;" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMCSCardRegistrySubsystem, Rarity), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Rarity_MetaData), Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Rarity_MetaData) }; // 3661568023
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Type_ValueProp = { "Type", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Type_Key_KeyProp = { "Type_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Cards" },
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMCSCardRegistrySubsystem, Type), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Type_MetaData), Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Type_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardPacks_Inner = { "CardPacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardPacks_MetaData[] = {
		{ "Category", "Cards" },
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardPacks = { "CardPacks", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMCSCardRegistrySubsystem, CardPacks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardPacks_MetaData), Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardPacks_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardWidget_MetaData[] = {
		{ "Category", "Cards" },
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardWidget = { "CardWidget", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMCSCardRegistrySubsystem, CardWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UMCSCardWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardWidget_MetaData), Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardActor_MetaData[] = {
		{ "Category", "Cards" },
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardActor = { "CardActor", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMCSCardRegistrySubsystem, CardActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AMCSCard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardActor_MetaData), Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_bEnableCardLock_MetaData[] = {
		{ "Category", "Cards" },
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_bEnableCardLock_SetBit(void* Obj)
	{
		((UMCSCardRegistrySubsystem*)Obj)->bEnableCardLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_bEnableCardLock = { "bEnableCardLock", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMCSCardRegistrySubsystem), &Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_bEnableCardLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_bEnableCardLock_MetaData), Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_bEnableCardLock_MetaData) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardUnlockMap_ValueProp = { "CardUnlockMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardUnlockMap_Key_KeyProp = { "CardUnlockMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardUnlockMap_MetaData[] = {
		{ "Category", "Cards" },
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardUnlockMap = { "CardUnlockMap", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMCSCardRegistrySubsystem, CardUnlockMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardUnlockMap_MetaData), Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardUnlockMap_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardMap_ValueProp = { "CardMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCardData, METADATA_PARAMS(0, nullptr) }; // 3044133914
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardMap_Key_KeyProp = { "CardMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardMap = { "CardMap", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMCSCardRegistrySubsystem, CardMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardMap_MetaData), Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardMap_MetaData) }; // 3044133914
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_VisualMap_ValueProp = { "VisualMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_VisualMap_Key_KeyProp = { "VisualMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_VisualMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MCSCardRegistrySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_VisualMap = { "VisualMap", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMCSCardRegistrySubsystem, VisualMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_VisualMap_MetaData), Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_VisualMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Rarity_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Rarity_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Rarity_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Rarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Type_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Type_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardPacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardPacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_bEnableCardLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardUnlockMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardUnlockMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardUnlockMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_CardMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_VisualMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_VisualMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::NewProp_VisualMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMCSCardRegistrySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::ClassParams = {
		&UMCSCardRegistrySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMCSCardRegistrySubsystem()
	{
		if (!Z_Registration_Info_UClass_UMCSCardRegistrySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMCSCardRegistrySubsystem.OuterSingleton, Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMCSCardRegistrySubsystem.OuterSingleton;
	}
	template<> MODULARCARDSYSTEM_API UClass* StaticClass<UMCSCardRegistrySubsystem>()
	{
		return UMCSCardRegistrySubsystem::StaticClass();
	}
	UMCSCardRegistrySubsystem::UMCSCardRegistrySubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMCSCardRegistrySubsystem);
	UMCSCardRegistrySubsystem::~UMCSCardRegistrySubsystem() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_Statics::ScriptStructInfo[] = {
		{ FCardFilterParameters::StaticStruct, Z_Construct_UScriptStruct_FCardFilterParameters_Statics::NewStructOps, TEXT("CardFilterParameters"), &Z_Registration_Info_UScriptStruct_CardFilterParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCardFilterParameters), 2702240916U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMCSCardRegistrySubsystem, UMCSCardRegistrySubsystem::StaticClass, TEXT("UMCSCardRegistrySubsystem"), &Z_Registration_Info_UClass_UMCSCardRegistrySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMCSCardRegistrySubsystem), 2985367743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_2865849547(TEXT("/Script/ModularCardSystem"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
