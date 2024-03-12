// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularCardSystem/Public/Actors/MCSCard.h"
#include "ModularCardSystem/Public/Types/Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMCSCard() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_AMCSCard();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_AMCSCard_NoRegister();
	MODULARCARDSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCardData();
	UPackage* Z_Construct_UPackage__Script_ModularCardSystem();
// End Cross Module References
	DEFINE_FUNCTION(AMCSCard::execInit)
	{
		P_GET_STRUCT_REF(FCardData,Z_Param_Out_InCardData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_Out_InCardData);
		P_NATIVE_END;
	}
	static FName NAME_AMCSCard_ReceiveRenderCard = FName(TEXT("ReceiveRenderCard"));
	void AMCSCard::ReceiveRenderCard()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMCSCard_ReceiveRenderCard),NULL);
	}
	void AMCSCard::StaticRegisterNativesAMCSCard()
	{
		UClass* Class = AMCSCard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &AMCSCard::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMCSCard_Init_Statics
	{
		struct MCSCard_eventInit_Parms
		{
			FCardData InCardData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCardData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCardData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMCSCard_Init_Statics::NewProp_InCardData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMCSCard_Init_Statics::NewProp_InCardData = { "InCardData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCSCard_eventInit_Parms, InCardData), Z_Construct_UScriptStruct_FCardData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMCSCard_Init_Statics::NewProp_InCardData_MetaData), Z_Construct_UFunction_AMCSCard_Init_Statics::NewProp_InCardData_MetaData) }; // 3044133914
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMCSCard_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMCSCard_Init_Statics::NewProp_InCardData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMCSCard_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Card" },
		{ "ModuleRelativePath", "Public/Actors/MCSCard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMCSCard_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMCSCard, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_AMCSCard_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMCSCard_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMCSCard_Init_Statics::MCSCard_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMCSCard_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMCSCard_Init_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMCSCard_Init_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMCSCard_Init_Statics::MCSCard_eventInit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMCSCard_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMCSCard_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMCSCard_ReceiveRenderCard_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMCSCard_ReceiveRenderCard_Statics::Function_MetaDataParams[] = {
		{ "Category", "Card|Event" },
		{ "DisplayName", "RenderCard" },
		{ "ModuleRelativePath", "Public/Actors/MCSCard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMCSCard_ReceiveRenderCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMCSCard, nullptr, "ReceiveRenderCard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMCSCard_ReceiveRenderCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMCSCard_ReceiveRenderCard_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMCSCard_ReceiveRenderCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMCSCard_ReceiveRenderCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMCSCard);
	UClass* Z_Construct_UClass_AMCSCard_NoRegister()
	{
		return AMCSCard::StaticClass();
	}
	struct Z_Construct_UClass_AMCSCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CardData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMCSCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularCardSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMCSCard_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMCSCard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMCSCard_Init, "Init" }, // 3704997450
		{ &Z_Construct_UFunction_AMCSCard_ReceiveRenderCard, "ReceiveRenderCard" }, // 3803948201
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMCSCard_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCSCard_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Actors/MCSCard.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actors/MCSCard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCSCard_Statics::NewProp_CardData_MetaData[] = {
		{ "Category", "Card" },
		{ "ModuleRelativePath", "Public/Actors/MCSCard.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMCSCard_Statics::NewProp_CardData = { "CardData", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCSCard, CardData), Z_Construct_UScriptStruct_FCardData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCSCard_Statics::NewProp_CardData_MetaData), Z_Construct_UClass_AMCSCard_Statics::NewProp_CardData_MetaData) }; // 3044133914
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMCSCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCSCard_Statics::NewProp_CardData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMCSCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMCSCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMCSCard_Statics::ClassParams = {
		&AMCSCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMCSCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMCSCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCSCard_Statics::Class_MetaDataParams), Z_Construct_UClass_AMCSCard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMCSCard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMCSCard()
	{
		if (!Z_Registration_Info_UClass_AMCSCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMCSCard.OuterSingleton, Z_Construct_UClass_AMCSCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMCSCard.OuterSingleton;
	}
	template<> MODULARCARDSYSTEM_API UClass* StaticClass<AMCSCard>()
	{
		return AMCSCard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMCSCard);
	AMCSCard::~AMCSCard() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Actors_MCSCard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Actors_MCSCard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMCSCard, AMCSCard::StaticClass, TEXT("AMCSCard"), &Z_Registration_Info_UClass_AMCSCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMCSCard), 219083165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Actors_MCSCard_h_2995516949(TEXT("/Script/ModularCardSystem"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Actors_MCSCard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Actors_MCSCard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
