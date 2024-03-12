// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularCardSystem/Public/UI/MCSCardWidget.h"
#include "ModularCardSystem/Public/Types/Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMCSCardWidget() {}
// Cross Module References
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UMCSCardWidget();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UMCSCardWidget_NoRegister();
	MODULARCARDSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCardData();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ModularCardSystem();
// End Cross Module References
	DEFINE_FUNCTION(UMCSCardWidget::execInit)
	{
		P_GET_STRUCT_REF(FCardData,Z_Param_Out_InCardData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_Out_InCardData);
		P_NATIVE_END;
	}
	struct MCSCardWidget_eventK2_Init_Parms
	{
		FCardData InCardData;
	};
	static FName NAME_UMCSCardWidget_K2_Init = FName(TEXT("K2_Init"));
	void UMCSCardWidget::K2_Init(FCardData const& InCardData)
	{
		MCSCardWidget_eventK2_Init_Parms Parms;
		Parms.InCardData=InCardData;
		ProcessEvent(FindFunctionChecked(NAME_UMCSCardWidget_K2_Init),&Parms);
	}
	void UMCSCardWidget::StaticRegisterNativesUMCSCardWidget()
	{
		UClass* Class = UMCSCardWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UMCSCardWidget::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMCSCardWidget_Init_Statics
	{
		struct MCSCardWidget_eventInit_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCSCardWidget_Init_Statics::NewProp_InCardData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMCSCardWidget_Init_Statics::NewProp_InCardData = { "InCardData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCSCardWidget_eventInit_Parms, InCardData), Z_Construct_UScriptStruct_FCardData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardWidget_Init_Statics::NewProp_InCardData_MetaData), Z_Construct_UFunction_UMCSCardWidget_Init_Statics::NewProp_InCardData_MetaData) }; // 3044133914
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMCSCardWidget_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardWidget_Init_Statics::NewProp_InCardData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCSCardWidget_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Card" },
		{ "ModuleRelativePath", "Public/UI/MCSCardWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMCSCardWidget_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMCSCardWidget, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_UMCSCardWidget_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardWidget_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMCSCardWidget_Init_Statics::MCSCardWidget_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardWidget_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMCSCardWidget_Init_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardWidget_Init_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMCSCardWidget_Init_Statics::MCSCardWidget_eventInit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMCSCardWidget_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMCSCardWidget_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMCSCardWidget_K2_Init_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCSCardWidget_K2_Init_Statics::NewProp_InCardData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMCSCardWidget_K2_Init_Statics::NewProp_InCardData = { "InCardData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCSCardWidget_eventK2_Init_Parms, InCardData), Z_Construct_UScriptStruct_FCardData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardWidget_K2_Init_Statics::NewProp_InCardData_MetaData), Z_Construct_UFunction_UMCSCardWidget_K2_Init_Statics::NewProp_InCardData_MetaData) }; // 3044133914
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMCSCardWidget_K2_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCSCardWidget_K2_Init_Statics::NewProp_InCardData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCSCardWidget_K2_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Card" },
		{ "DisplayName", "OnInit" },
		{ "ModuleRelativePath", "Public/UI/MCSCardWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMCSCardWidget_K2_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMCSCardWidget, nullptr, "K2_Init", nullptr, nullptr, Z_Construct_UFunction_UMCSCardWidget_K2_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardWidget_K2_Init_Statics::PropPointers), sizeof(MCSCardWidget_eventK2_Init_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardWidget_K2_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMCSCardWidget_K2_Init_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMCSCardWidget_K2_Init_Statics::PropPointers) < 2048);
	static_assert(sizeof(MCSCardWidget_eventK2_Init_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMCSCardWidget_K2_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMCSCardWidget_K2_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMCSCardWidget);
	UClass* Z_Construct_UClass_UMCSCardWidget_NoRegister()
	{
		return UMCSCardWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMCSCardWidget_Statics
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
	UObject* (*const Z_Construct_UClass_UMCSCardWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularCardSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMCSCardWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMCSCardWidget_Init, "Init" }, // 779139293
		{ &Z_Construct_UFunction_UMCSCardWidget_K2_Init, "K2_Init" }, // 3591491625
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSCardWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/MCSCardWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MCSCardWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSCardWidget_Statics::NewProp_CardData_MetaData[] = {
		{ "Category", "Card" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/UI/MCSCardWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMCSCardWidget_Statics::NewProp_CardData = { "CardData", nullptr, (EPropertyFlags)0x0021080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMCSCardWidget, CardData), Z_Construct_UScriptStruct_FCardData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardWidget_Statics::NewProp_CardData_MetaData), Z_Construct_UClass_UMCSCardWidget_Statics::NewProp_CardData_MetaData) }; // 3044133914
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMCSCardWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSCardWidget_Statics::NewProp_CardData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMCSCardWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMCSCardWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMCSCardWidget_Statics::ClassParams = {
		&UMCSCardWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMCSCardWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMCSCardWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSCardWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMCSCardWidget()
	{
		if (!Z_Registration_Info_UClass_UMCSCardWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMCSCardWidget.OuterSingleton, Z_Construct_UClass_UMCSCardWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMCSCardWidget.OuterSingleton;
	}
	template<> MODULARCARDSYSTEM_API UClass* StaticClass<UMCSCardWidget>()
	{
		return UMCSCardWidget::StaticClass();
	}
	UMCSCardWidget::UMCSCardWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMCSCardWidget);
	UMCSCardWidget::~UMCSCardWidget() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_UI_MCSCardWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_UI_MCSCardWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMCSCardWidget, UMCSCardWidget::StaticClass, TEXT("UMCSCardWidget"), &Z_Registration_Info_UClass_UMCSCardWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMCSCardWidget), 2913272028U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_UI_MCSCardWidget_h_2966239496(TEXT("/Script/ModularCardSystem"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_UI_MCSCardWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_UI_MCSCardWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
