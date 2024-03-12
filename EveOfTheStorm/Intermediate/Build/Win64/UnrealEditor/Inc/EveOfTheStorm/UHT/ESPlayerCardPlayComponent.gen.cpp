// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Player/ESPlayerCardPlayComponent.h"
#include "ModularCardSystem/Public/Types/Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESPlayerCardPlayComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardAction_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESPlayerCardPlayComponent();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESPlayerCardPlayComponent_NoRegister();
	EVEOFTHESTORM_API UEnum* Z_Construct_UEnum_EveOfTheStorm_ECardType();
	MODULARCARDSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCardData();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	DEFINE_FUNCTION(UESPlayerCardPlayComponent::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESPlayerCardPlayComponent::execOnRotate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRotate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESPlayerCardPlayComponent::execOnMouseTrigger)
	{
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMouseTrigger(Z_Param_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESPlayerCardPlayComponent::execCancelPlayCard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelPlayCard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESPlayerCardPlayComponent::execPlayCard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlayCard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESPlayerCardPlayComponent::execStartPlayCard)
	{
		P_GET_STRUCT(FCardData,Z_Param_CardData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPlayCard(Z_Param_CardData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESPlayerCardPlayComponent::execCanPlayCard)
	{
		P_GET_STRUCT(FCardData,Z_Param_CardData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPlayCard(Z_Param_CardData);
		P_NATIVE_END;
	}
	void UESPlayerCardPlayComponent::StaticRegisterNativesUESPlayerCardPlayComponent()
	{
		UClass* Class = UESPlayerCardPlayComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelPlayCard", &UESPlayerCardPlayComponent::execCancelPlayCard },
			{ "CanPlayCard", &UESPlayerCardPlayComponent::execCanPlayCard },
			{ "Clear", &UESPlayerCardPlayComponent::execClear },
			{ "OnMouseTrigger", &UESPlayerCardPlayComponent::execOnMouseTrigger },
			{ "OnRotate", &UESPlayerCardPlayComponent::execOnRotate },
			{ "PlayCard", &UESPlayerCardPlayComponent::execPlayCard },
			{ "StartPlayCard", &UESPlayerCardPlayComponent::execStartPlayCard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UESPlayerCardPlayComponent_CancelPlayCard_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESPlayerCardPlayComponent_CancelPlayCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerCardPlayComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESPlayerCardPlayComponent_CancelPlayCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESPlayerCardPlayComponent, nullptr, "CancelPlayCard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESPlayerCardPlayComponent_CancelPlayCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESPlayerCardPlayComponent_CancelPlayCard_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UESPlayerCardPlayComponent_CancelPlayCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESPlayerCardPlayComponent_CancelPlayCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard_Statics
	{
		struct ESPlayerCardPlayComponent_eventCanPlayCard_Parms
		{
			FCardData CardData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CardData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard_Statics::NewProp_CardData = { "CardData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESPlayerCardPlayComponent_eventCanPlayCard_Parms, CardData), Z_Construct_UScriptStruct_FCardData, METADATA_PARAMS(0, nullptr) }; // 3044133914
	void Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESPlayerCardPlayComponent_eventCanPlayCard_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESPlayerCardPlayComponent_eventCanPlayCard_Parms), &Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard_Statics::NewProp_CardData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerCardPlayComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESPlayerCardPlayComponent, nullptr, "CanPlayCard", nullptr, nullptr, Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard_Statics::ESPlayerCardPlayComponent_eventCanPlayCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard_Statics::ESPlayerCardPlayComponent_eventCanPlayCard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESPlayerCardPlayComponent_Clear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESPlayerCardPlayComponent_Clear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerCardPlayComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESPlayerCardPlayComponent_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESPlayerCardPlayComponent, nullptr, "Clear", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESPlayerCardPlayComponent_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESPlayerCardPlayComponent_Clear_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UESPlayerCardPlayComponent_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESPlayerCardPlayComponent_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESPlayerCardPlayComponent_OnMouseTrigger_Statics
	{
		struct ESPlayerCardPlayComponent_eventOnMouseTrigger_Parms
		{
			FVector Position;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESPlayerCardPlayComponent_OnMouseTrigger_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESPlayerCardPlayComponent_eventOnMouseTrigger_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESPlayerCardPlayComponent_OnMouseTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESPlayerCardPlayComponent_OnMouseTrigger_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESPlayerCardPlayComponent_OnMouseTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerCardPlayComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESPlayerCardPlayComponent_OnMouseTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESPlayerCardPlayComponent, nullptr, "OnMouseTrigger", nullptr, nullptr, Z_Construct_UFunction_UESPlayerCardPlayComponent_OnMouseTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESPlayerCardPlayComponent_OnMouseTrigger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESPlayerCardPlayComponent_OnMouseTrigger_Statics::ESPlayerCardPlayComponent_eventOnMouseTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESPlayerCardPlayComponent_OnMouseTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESPlayerCardPlayComponent_OnMouseTrigger_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESPlayerCardPlayComponent_OnMouseTrigger_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESPlayerCardPlayComponent_OnMouseTrigger_Statics::ESPlayerCardPlayComponent_eventOnMouseTrigger_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESPlayerCardPlayComponent_OnMouseTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESPlayerCardPlayComponent_OnMouseTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESPlayerCardPlayComponent_OnRotate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESPlayerCardPlayComponent_OnRotate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerCardPlayComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESPlayerCardPlayComponent_OnRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESPlayerCardPlayComponent, nullptr, "OnRotate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESPlayerCardPlayComponent_OnRotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESPlayerCardPlayComponent_OnRotate_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UESPlayerCardPlayComponent_OnRotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESPlayerCardPlayComponent_OnRotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESPlayerCardPlayComponent_PlayCard_Statics
	{
		struct ESPlayerCardPlayComponent_eventPlayCard_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UESPlayerCardPlayComponent_PlayCard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESPlayerCardPlayComponent_eventPlayCard_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESPlayerCardPlayComponent_PlayCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESPlayerCardPlayComponent_eventPlayCard_Parms), &Z_Construct_UFunction_UESPlayerCardPlayComponent_PlayCard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESPlayerCardPlayComponent_PlayCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESPlayerCardPlayComponent_PlayCard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESPlayerCardPlayComponent_PlayCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerCardPlayComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESPlayerCardPlayComponent_PlayCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESPlayerCardPlayComponent, nullptr, "PlayCard", nullptr, nullptr, Z_Construct_UFunction_UESPlayerCardPlayComponent_PlayCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESPlayerCardPlayComponent_PlayCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESPlayerCardPlayComponent_PlayCard_Statics::ESPlayerCardPlayComponent_eventPlayCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESPlayerCardPlayComponent_PlayCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESPlayerCardPlayComponent_PlayCard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESPlayerCardPlayComponent_PlayCard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESPlayerCardPlayComponent_PlayCard_Statics::ESPlayerCardPlayComponent_eventPlayCard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESPlayerCardPlayComponent_PlayCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESPlayerCardPlayComponent_PlayCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESPlayerCardPlayComponent_StartPlayCard_Statics
	{
		struct ESPlayerCardPlayComponent_eventStartPlayCard_Parms
		{
			FCardData CardData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CardData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESPlayerCardPlayComponent_StartPlayCard_Statics::NewProp_CardData = { "CardData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESPlayerCardPlayComponent_eventStartPlayCard_Parms, CardData), Z_Construct_UScriptStruct_FCardData, METADATA_PARAMS(0, nullptr) }; // 3044133914
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESPlayerCardPlayComponent_StartPlayCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESPlayerCardPlayComponent_StartPlayCard_Statics::NewProp_CardData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESPlayerCardPlayComponent_StartPlayCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerCardPlayComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESPlayerCardPlayComponent_StartPlayCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESPlayerCardPlayComponent, nullptr, "StartPlayCard", nullptr, nullptr, Z_Construct_UFunction_UESPlayerCardPlayComponent_StartPlayCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESPlayerCardPlayComponent_StartPlayCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESPlayerCardPlayComponent_StartPlayCard_Statics::ESPlayerCardPlayComponent_eventStartPlayCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESPlayerCardPlayComponent_StartPlayCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESPlayerCardPlayComponent_StartPlayCard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESPlayerCardPlayComponent_StartPlayCard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESPlayerCardPlayComponent_StartPlayCard_Statics::ESPlayerCardPlayComponent_eventStartPlayCard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESPlayerCardPlayComponent_StartPlayCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESPlayerCardPlayComponent_StartPlayCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UESPlayerCardPlayComponent);
	UClass* Z_Construct_UClass_UESPlayerCardPlayComponent_NoRegister()
	{
		return UESPlayerCardPlayComponent::StaticClass();
	}
	struct Z_Construct_UClass_UESPlayerCardPlayComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActionClass_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActionClass_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionClass_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionClass_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActionClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Actions_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Actions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Actions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCard_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentCard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayingCard_MetaData[];
#endif
		static void NewProp_bIsPlayingCard_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayingCard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UESPlayerCardPlayComponent_CancelPlayCard, "CancelPlayCard" }, // 4237220077
		{ &Z_Construct_UFunction_UESPlayerCardPlayComponent_CanPlayCard, "CanPlayCard" }, // 2548073208
		{ &Z_Construct_UFunction_UESPlayerCardPlayComponent_Clear, "Clear" }, // 504752409
		{ &Z_Construct_UFunction_UESPlayerCardPlayComponent_OnMouseTrigger, "OnMouseTrigger" }, // 2763837244
		{ &Z_Construct_UFunction_UESPlayerCardPlayComponent_OnRotate, "OnRotate" }, // 1335030670
		{ &Z_Construct_UFunction_UESPlayerCardPlayComponent_PlayCard, "PlayCard" }, // 1909920418
		{ &Z_Construct_UFunction_UESPlayerCardPlayComponent_StartPlayCard, "StartPlayCard" }, // 909522148
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Core/Player/ESPlayerCardPlayComponent.h" },
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerCardPlayComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_ActionClass_ValueProp = { "ActionClass", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UESCardAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_ActionClass_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_ActionClass_Key_KeyProp = { "ActionClass_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_EveOfTheStorm_ECardType, METADATA_PARAMS(0, nullptr) }; // 2593328734
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_ActionClass_MetaData[] = {
		{ "Category", "ESPlayerCardPlayComponent" },
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerCardPlayComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_ActionClass = { "ActionClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESPlayerCardPlayComponent, ActionClass), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_ActionClass_MetaData), Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_ActionClass_MetaData) }; // 2593328734
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_Actions_ValueProp = { "Actions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UESCardAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_Actions_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_Actions_Key_KeyProp = { "Actions_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_EveOfTheStorm_ECardType, METADATA_PARAMS(0, nullptr) }; // 2593328734
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_Actions_MetaData[] = {
		{ "Category", "ESPlayerCardPlayComponent" },
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerCardPlayComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESPlayerCardPlayComponent, Actions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_Actions_MetaData), Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_Actions_MetaData) }; // 2593328734
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_CurrentAction_MetaData[] = {
		{ "Category", "ESPlayerCardPlayComponent" },
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerCardPlayComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_CurrentAction = { "CurrentAction", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESPlayerCardPlayComponent, CurrentAction), Z_Construct_UClass_UESCardAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_CurrentAction_MetaData), Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_CurrentAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_CurrentCard_MetaData[] = {
		{ "Category", "ESPlayerCardPlayComponent" },
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerCardPlayComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_CurrentCard = { "CurrentCard", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESPlayerCardPlayComponent, CurrentCard), Z_Construct_UScriptStruct_FCardData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_CurrentCard_MetaData), Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_CurrentCard_MetaData) }; // 3044133914
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_bIsPlayingCard_MetaData[] = {
		{ "Category", "ESPlayerCardPlayComponent" },
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerCardPlayComponent.h" },
	};
#endif
	void Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_bIsPlayingCard_SetBit(void* Obj)
	{
		((UESPlayerCardPlayComponent*)Obj)->bIsPlayingCard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_bIsPlayingCard = { "bIsPlayingCard", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UESPlayerCardPlayComponent), &Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_bIsPlayingCard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_bIsPlayingCard_MetaData), Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_bIsPlayingCard_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_ActionClass_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_ActionClass_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_ActionClass_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_ActionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_Actions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_Actions_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_Actions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_Actions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_CurrentAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_CurrentCard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::NewProp_bIsPlayingCard,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UESPlayerCardPlayComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::ClassParams = {
		&UESPlayerCardPlayComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UESPlayerCardPlayComponent()
	{
		if (!Z_Registration_Info_UClass_UESPlayerCardPlayComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UESPlayerCardPlayComponent.OuterSingleton, Z_Construct_UClass_UESPlayerCardPlayComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UESPlayerCardPlayComponent.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<UESPlayerCardPlayComponent>()
	{
		return UESPlayerCardPlayComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UESPlayerCardPlayComponent);
	UESPlayerCardPlayComponent::~UESPlayerCardPlayComponent() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UESPlayerCardPlayComponent, UESPlayerCardPlayComponent::StaticClass, TEXT("UESPlayerCardPlayComponent"), &Z_Registration_Info_UClass_UESPlayerCardPlayComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UESPlayerCardPlayComponent), 1692190888U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_2131860542(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
