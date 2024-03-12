// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Player/ESPlayerState.h"
#include "EveOfTheStorm/Public/Core/Game/ESResourceSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESPlayerState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESPlayerState();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESPlayerState_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESResourceSystem_NoRegister();
	EVEOFTHESTORM_API UFunction* Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature();
	EVEOFTHESTORM_API UScriptStruct* Z_Construct_UScriptStruct_FResourceDefinition();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature_Statics
	{
		struct _Script_EveOfTheStorm_eventOnFoodChangeEvent_Parms
		{
			float NewValue;
			float OldValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EveOfTheStorm_eventOnFoodChangeEvent_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EveOfTheStorm_eventOnFoodChangeEvent_Parms, OldValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EveOfTheStorm, nullptr, "OnFoodChangeEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature_Statics::_Script_EveOfTheStorm_eventOnFoodChangeEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature_Statics::_Script_EveOfTheStorm_eventOnFoodChangeEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFoodChangeEvent_DelegateWrapper(const FMulticastScriptDelegate& OnFoodChangeEvent, float NewValue, float OldValue)
{
	struct _Script_EveOfTheStorm_eventOnFoodChangeEvent_Parms
	{
		float NewValue;
		float OldValue;
	};
	_Script_EveOfTheStorm_eventOnFoodChangeEvent_Parms Parms;
	Parms.NewValue=NewValue;
	Parms.OldValue=OldValue;
	OnFoodChangeEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AESPlayerState::execGetCurrentDrawCost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentDrawCost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESPlayerState::execOnDraw)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDraw();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESPlayerState::execOnTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTurn();
		P_NATIVE_END;
	}
	void AESPlayerState::StaticRegisterNativesAESPlayerState()
	{
		UClass* Class = AESPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentDrawCost", &AESPlayerState::execGetCurrentDrawCost },
			{ "OnDraw", &AESPlayerState::execOnDraw },
			{ "OnTurn", &AESPlayerState::execOnTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AESPlayerState_GetCurrentDrawCost_Statics
	{
		struct ESPlayerState_eventGetCurrentDrawCost_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AESPlayerState_GetCurrentDrawCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESPlayerState_eventGetCurrentDrawCost_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESPlayerState_GetCurrentDrawCost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESPlayerState_GetCurrentDrawCost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESPlayerState_GetCurrentDrawCost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESPlayerState_GetCurrentDrawCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESPlayerState, nullptr, "GetCurrentDrawCost", nullptr, nullptr, Z_Construct_UFunction_AESPlayerState_GetCurrentDrawCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESPlayerState_GetCurrentDrawCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESPlayerState_GetCurrentDrawCost_Statics::ESPlayerState_eventGetCurrentDrawCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESPlayerState_GetCurrentDrawCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESPlayerState_GetCurrentDrawCost_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESPlayerState_GetCurrentDrawCost_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESPlayerState_GetCurrentDrawCost_Statics::ESPlayerState_eventGetCurrentDrawCost_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESPlayerState_GetCurrentDrawCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESPlayerState_GetCurrentDrawCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESPlayerState_OnDraw_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESPlayerState_OnDraw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESPlayerState_OnDraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESPlayerState, nullptr, "OnDraw", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESPlayerState_OnDraw_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESPlayerState_OnDraw_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AESPlayerState_OnDraw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESPlayerState_OnDraw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESPlayerState_OnTurn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESPlayerState_OnTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESPlayerState_OnTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESPlayerState, nullptr, "OnTurn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESPlayerState_OnTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESPlayerState_OnTurn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AESPlayerState_OnTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESPlayerState_OnTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AESPlayerState);
	UClass* Z_Construct_UClass_AESPlayerState_NoRegister()
	{
		return AESPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AESPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFoodChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFoodChange;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FoodDefinition_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoodDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FoodDefinition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResourceSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDrawCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentDrawCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnDrawCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnDrawCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentConsumeFood_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentConsumeFood;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnConsumeFood_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnConsumeFood;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDrawBuff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentDrawBuff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDrawBuffTempo_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentDrawBuffTempo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AESPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AESPlayerState_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AESPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AESPlayerState_GetCurrentDrawCost, "GetCurrentDrawCost" }, // 1582581637
		{ &Z_Construct_UFunction_AESPlayerState_OnDraw, "OnDraw" }, // 1512706414
		{ &Z_Construct_UFunction_AESPlayerState_OnTurn, "OnTurn" }, // 60022773
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AESPlayerState_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/Player/ESPlayerState.h" },
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESPlayerState_Statics::NewProp_OnFoodChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AESPlayerState_Statics::NewProp_OnFoodChange = { "OnFoodChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESPlayerState, OnFoodChange), Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESPlayerState_Statics::NewProp_OnFoodChange_MetaData), Z_Construct_UClass_AESPlayerState_Statics::NewProp_OnFoodChange_MetaData) }; // 1924118357
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AESPlayerState_Statics::NewProp_FoodDefinition_Inner = { "FoodDefinition", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FResourceDefinition, METADATA_PARAMS(0, nullptr) }; // 2484151747
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESPlayerState_Statics::NewProp_FoodDefinition_MetaData[] = {
		{ "Category", "ES|PlayerState" },
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AESPlayerState_Statics::NewProp_FoodDefinition = { "FoodDefinition", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESPlayerState, FoodDefinition), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESPlayerState_Statics::NewProp_FoodDefinition_MetaData), Z_Construct_UClass_AESPlayerState_Statics::NewProp_FoodDefinition_MetaData) }; // 2484151747
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESPlayerState_Statics::NewProp_ResourceSystem_MetaData[] = {
		{ "Category", "ES|PlayerState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// virtual void FoodChanged(const FOnAttributeChangeData& Data);\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "virtual void FoodChanged(const FOnAttributeChangeData& Data);" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESPlayerState_Statics::NewProp_ResourceSystem = { "ResourceSystem", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESPlayerState, ResourceSystem), Z_Construct_UClass_UESResourceSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESPlayerState_Statics::NewProp_ResourceSystem_MetaData), Z_Construct_UClass_AESPlayerState_Statics::NewProp_ResourceSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentDrawCost_MetaData[] = {
		{ "Category", "ES|PlayerState" },
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentDrawCost = { "CurrentDrawCost", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESPlayerState, CurrentDrawCost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentDrawCost_MetaData), Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentDrawCost_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESPlayerState_Statics::NewProp_TurnDrawCost_MetaData[] = {
		{ "Category", "ES|PlayerState" },
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AESPlayerState_Statics::NewProp_TurnDrawCost = { "TurnDrawCost", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESPlayerState, TurnDrawCost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESPlayerState_Statics::NewProp_TurnDrawCost_MetaData), Z_Construct_UClass_AESPlayerState_Statics::NewProp_TurnDrawCost_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentConsumeFood_MetaData[] = {
		{ "Category", "ES|PlayerState" },
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentConsumeFood = { "CurrentConsumeFood", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESPlayerState, CurrentConsumeFood), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentConsumeFood_MetaData), Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentConsumeFood_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESPlayerState_Statics::NewProp_TurnConsumeFood_MetaData[] = {
		{ "Category", "ES|PlayerState" },
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AESPlayerState_Statics::NewProp_TurnConsumeFood = { "TurnConsumeFood", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESPlayerState, TurnConsumeFood), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESPlayerState_Statics::NewProp_TurnConsumeFood_MetaData), Z_Construct_UClass_AESPlayerState_Statics::NewProp_TurnConsumeFood_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentDrawBuff_MetaData[] = {
		{ "Category", "ES|PlayerState" },
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentDrawBuff = { "CurrentDrawBuff", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESPlayerState, CurrentDrawBuff), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentDrawBuff_MetaData), Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentDrawBuff_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentDrawBuffTempo_MetaData[] = {
		{ "Category", "ES|PlayerState" },
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentDrawBuffTempo = { "CurrentDrawBuffTempo", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESPlayerState, CurrentDrawBuffTempo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentDrawBuffTempo_MetaData), Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentDrawBuffTempo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AESPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESPlayerState_Statics::NewProp_OnFoodChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESPlayerState_Statics::NewProp_FoodDefinition_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESPlayerState_Statics::NewProp_FoodDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESPlayerState_Statics::NewProp_ResourceSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentDrawCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESPlayerState_Statics::NewProp_TurnDrawCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentConsumeFood,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESPlayerState_Statics::NewProp_TurnConsumeFood,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentDrawBuff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESPlayerState_Statics::NewProp_CurrentDrawBuffTempo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AESPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AESPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AESPlayerState_Statics::ClassParams = {
		&AESPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AESPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AESPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AESPlayerState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AESPlayerState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AESPlayerState()
	{
		if (!Z_Registration_Info_UClass_AESPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AESPlayerState.OuterSingleton, Z_Construct_UClass_AESPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AESPlayerState.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<AESPlayerState>()
	{
		return AESPlayerState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AESPlayerState);
	AESPlayerState::~AESPlayerState() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AESPlayerState, AESPlayerState::StaticClass, TEXT("AESPlayerState"), &Z_Registration_Info_UClass_AESPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AESPlayerState), 3067406840U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_4119460916(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
