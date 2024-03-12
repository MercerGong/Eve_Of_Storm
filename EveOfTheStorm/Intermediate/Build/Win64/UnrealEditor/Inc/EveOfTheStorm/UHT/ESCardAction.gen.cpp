// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Player/ESCardAction.h"
#include "ModularCardSystem/Public/Types/Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESCardAction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESDefaultGameMode_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardAction();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardAction_NoRegister();
	MODULARCARDSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCardData();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	DEFINE_FUNCTION(UESCardAction::execGetESGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AESDefaultGameMode**)Z_Param__Result=P_THIS->GetESGameMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESCardAction::execOnRotate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRotate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESCardAction::execOnMouseTrigger)
	{
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMouseTrigger(Z_Param_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESCardAction::execCancelPlayCard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelPlayCard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESCardAction::execPlayCard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlayCard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESCardAction::execStartPlayCard)
	{
		P_GET_STRUCT(FCardData,Z_Param_CardData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPlayCard(Z_Param_CardData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESCardAction::execCanPlayCard)
	{
		P_GET_STRUCT(FCardData,Z_Param_CardData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPlayCard(Z_Param_CardData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESCardAction::execInit)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_World,Z_Param_PlayerController);
		P_NATIVE_END;
	}
	struct ESCardAction_eventK2_CanPlayCard_Parms
	{
		FCardData CardData;
		bool Result;
	};
	struct ESCardAction_eventK2_Init_Parms
	{
		APlayerController* PlayerController;
	};
	struct ESCardAction_eventK2_MouseTrigger_Parms
	{
		FVector Position;
	};
	struct ESCardAction_eventK2_PlayCard_Parms
	{
		bool Result;
	};
	struct ESCardAction_eventK2_StartPlayCard_Parms
	{
		FCardData CardData;
	};
	static FName NAME_UESCardAction_K2_CancelPlayCard = FName(TEXT("K2_CancelPlayCard"));
	void UESCardAction::K2_CancelPlayCard()
	{
		ProcessEvent(FindFunctionChecked(NAME_UESCardAction_K2_CancelPlayCard),NULL);
	}
	static FName NAME_UESCardAction_K2_CanPlayCard = FName(TEXT("K2_CanPlayCard"));
	void UESCardAction::K2_CanPlayCard(FCardData CardData, bool& Result)
	{
		ESCardAction_eventK2_CanPlayCard_Parms Parms;
		Parms.CardData=CardData;
		Parms.Result=Result ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UESCardAction_K2_CanPlayCard),&Parms);
		Result=Parms.Result;
	}
	static FName NAME_UESCardAction_K2_Init = FName(TEXT("K2_Init"));
	void UESCardAction::K2_Init(APlayerController* PlayerController)
	{
		ESCardAction_eventK2_Init_Parms Parms;
		Parms.PlayerController=PlayerController;
		ProcessEvent(FindFunctionChecked(NAME_UESCardAction_K2_Init),&Parms);
	}
	static FName NAME_UESCardAction_K2_MouseTrigger = FName(TEXT("K2_MouseTrigger"));
	void UESCardAction::K2_MouseTrigger(FVector Position)
	{
		ESCardAction_eventK2_MouseTrigger_Parms Parms;
		Parms.Position=Position;
		ProcessEvent(FindFunctionChecked(NAME_UESCardAction_K2_MouseTrigger),&Parms);
	}
	static FName NAME_UESCardAction_K2_PlayCard = FName(TEXT("K2_PlayCard"));
	void UESCardAction::K2_PlayCard(bool& Result)
	{
		ESCardAction_eventK2_PlayCard_Parms Parms;
		Parms.Result=Result ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UESCardAction_K2_PlayCard),&Parms);
		Result=Parms.Result;
	}
	static FName NAME_UESCardAction_K2_Rotate = FName(TEXT("K2_Rotate"));
	void UESCardAction::K2_Rotate()
	{
		ProcessEvent(FindFunctionChecked(NAME_UESCardAction_K2_Rotate),NULL);
	}
	static FName NAME_UESCardAction_K2_StartPlayCard = FName(TEXT("K2_StartPlayCard"));
	void UESCardAction::K2_StartPlayCard(FCardData CardData)
	{
		ESCardAction_eventK2_StartPlayCard_Parms Parms;
		Parms.CardData=CardData;
		ProcessEvent(FindFunctionChecked(NAME_UESCardAction_K2_StartPlayCard),&Parms);
	}
	void UESCardAction::StaticRegisterNativesUESCardAction()
	{
		UClass* Class = UESCardAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelPlayCard", &UESCardAction::execCancelPlayCard },
			{ "CanPlayCard", &UESCardAction::execCanPlayCard },
			{ "GetESGameMode", &UESCardAction::execGetESGameMode },
			{ "Init", &UESCardAction::execInit },
			{ "OnMouseTrigger", &UESCardAction::execOnMouseTrigger },
			{ "OnRotate", &UESCardAction::execOnRotate },
			{ "PlayCard", &UESCardAction::execPlayCard },
			{ "StartPlayCard", &UESCardAction::execStartPlayCard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UESCardAction_CancelPlayCard_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardAction_CancelPlayCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESCardAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardAction_CancelPlayCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardAction, nullptr, "CancelPlayCard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_CancelPlayCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardAction_CancelPlayCard_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UESCardAction_CancelPlayCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardAction_CancelPlayCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESCardAction_CanPlayCard_Statics
	{
		struct ESCardAction_eventCanPlayCard_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESCardAction_CanPlayCard_Statics::NewProp_CardData = { "CardData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardAction_eventCanPlayCard_Parms, CardData), Z_Construct_UScriptStruct_FCardData, METADATA_PARAMS(0, nullptr) }; // 3044133914
	void Z_Construct_UFunction_UESCardAction_CanPlayCard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESCardAction_eventCanPlayCard_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESCardAction_CanPlayCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESCardAction_eventCanPlayCard_Parms), &Z_Construct_UFunction_UESCardAction_CanPlayCard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESCardAction_CanPlayCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardAction_CanPlayCard_Statics::NewProp_CardData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardAction_CanPlayCard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardAction_CanPlayCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESCardAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardAction_CanPlayCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardAction, nullptr, "CanPlayCard", nullptr, nullptr, Z_Construct_UFunction_UESCardAction_CanPlayCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_CanPlayCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESCardAction_CanPlayCard_Statics::ESCardAction_eventCanPlayCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_CanPlayCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardAction_CanPlayCard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_CanPlayCard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESCardAction_CanPlayCard_Statics::ESCardAction_eventCanPlayCard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESCardAction_CanPlayCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardAction_CanPlayCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESCardAction_GetESGameMode_Statics
	{
		struct ESCardAction_eventGetESGameMode_Parms
		{
			AESDefaultGameMode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UESCardAction_GetESGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardAction_eventGetESGameMode_Parms, ReturnValue), Z_Construct_UClass_AESDefaultGameMode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESCardAction_GetESGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardAction_GetESGameMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardAction_GetESGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESCardAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardAction_GetESGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardAction, nullptr, "GetESGameMode", nullptr, nullptr, Z_Construct_UFunction_UESCardAction_GetESGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_GetESGameMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESCardAction_GetESGameMode_Statics::ESCardAction_eventGetESGameMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_GetESGameMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardAction_GetESGameMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_GetESGameMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESCardAction_GetESGameMode_Statics::ESCardAction_eventGetESGameMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESCardAction_GetESGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardAction_GetESGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESCardAction_Init_Statics
	{
		struct ESCardAction_eventInit_Parms
		{
			UWorld* World;
			APlayerController* PlayerController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UESCardAction_Init_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardAction_eventInit_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UESCardAction_Init_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardAction_eventInit_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESCardAction_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardAction_Init_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardAction_Init_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardAction_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESCardAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardAction_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardAction, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_UESCardAction_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESCardAction_Init_Statics::ESCardAction_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardAction_Init_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_Init_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESCardAction_Init_Statics::ESCardAction_eventInit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESCardAction_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardAction_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESCardAction_K2_CancelPlayCard_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardAction_K2_CancelPlayCard_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnCancelPlayCard" },
		{ "ModuleRelativePath", "Public/Core/Player/ESCardAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardAction_K2_CancelPlayCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardAction, nullptr, "K2_CancelPlayCard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_K2_CancelPlayCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardAction_K2_CancelPlayCard_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UESCardAction_K2_CancelPlayCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardAction_K2_CancelPlayCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESCardAction_K2_CanPlayCard_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_CardData;
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESCardAction_K2_CanPlayCard_Statics::NewProp_CardData = { "CardData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardAction_eventK2_CanPlayCard_Parms, CardData), Z_Construct_UScriptStruct_FCardData, METADATA_PARAMS(0, nullptr) }; // 3044133914
	void Z_Construct_UFunction_UESCardAction_K2_CanPlayCard_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((ESCardAction_eventK2_CanPlayCard_Parms*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESCardAction_K2_CanPlayCard_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESCardAction_eventK2_CanPlayCard_Parms), &Z_Construct_UFunction_UESCardAction_K2_CanPlayCard_Statics::NewProp_Result_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESCardAction_K2_CanPlayCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardAction_K2_CanPlayCard_Statics::NewProp_CardData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardAction_K2_CanPlayCard_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardAction_K2_CanPlayCard_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "CanPlayCard" },
		{ "ModuleRelativePath", "Public/Core/Player/ESCardAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardAction_K2_CanPlayCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardAction, nullptr, "K2_CanPlayCard", nullptr, nullptr, Z_Construct_UFunction_UESCardAction_K2_CanPlayCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_K2_CanPlayCard_Statics::PropPointers), sizeof(ESCardAction_eventK2_CanPlayCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_K2_CanPlayCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardAction_K2_CanPlayCard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_K2_CanPlayCard_Statics::PropPointers) < 2048);
	static_assert(sizeof(ESCardAction_eventK2_CanPlayCard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESCardAction_K2_CanPlayCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardAction_K2_CanPlayCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESCardAction_K2_Init_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UESCardAction_K2_Init_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardAction_eventK2_Init_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESCardAction_K2_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardAction_K2_Init_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardAction_K2_Init_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnInit" },
		{ "ModuleRelativePath", "Public/Core/Player/ESCardAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardAction_K2_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardAction, nullptr, "K2_Init", nullptr, nullptr, Z_Construct_UFunction_UESCardAction_K2_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_K2_Init_Statics::PropPointers), sizeof(ESCardAction_eventK2_Init_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_K2_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardAction_K2_Init_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_K2_Init_Statics::PropPointers) < 2048);
	static_assert(sizeof(ESCardAction_eventK2_Init_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESCardAction_K2_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardAction_K2_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESCardAction_K2_MouseTrigger_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESCardAction_K2_MouseTrigger_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardAction_eventK2_MouseTrigger_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESCardAction_K2_MouseTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardAction_K2_MouseTrigger_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardAction_K2_MouseTrigger_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnMouseTrigger" },
		{ "ModuleRelativePath", "Public/Core/Player/ESCardAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardAction_K2_MouseTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardAction, nullptr, "K2_MouseTrigger", nullptr, nullptr, Z_Construct_UFunction_UESCardAction_K2_MouseTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_K2_MouseTrigger_Statics::PropPointers), sizeof(ESCardAction_eventK2_MouseTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_K2_MouseTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardAction_K2_MouseTrigger_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_K2_MouseTrigger_Statics::PropPointers) < 2048);
	static_assert(sizeof(ESCardAction_eventK2_MouseTrigger_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESCardAction_K2_MouseTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardAction_K2_MouseTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESCardAction_K2_PlayCard_Statics
	{
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UESCardAction_K2_PlayCard_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((ESCardAction_eventK2_PlayCard_Parms*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESCardAction_K2_PlayCard_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESCardAction_eventK2_PlayCard_Parms), &Z_Construct_UFunction_UESCardAction_K2_PlayCard_Statics::NewProp_Result_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESCardAction_K2_PlayCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardAction_K2_PlayCard_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardAction_K2_PlayCard_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnPlayCard" },
		{ "ModuleRelativePath", "Public/Core/Player/ESCardAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardAction_K2_PlayCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardAction, nullptr, "K2_PlayCard", nullptr, nullptr, Z_Construct_UFunction_UESCardAction_K2_PlayCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_K2_PlayCard_Statics::PropPointers), sizeof(ESCardAction_eventK2_PlayCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_K2_PlayCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardAction_K2_PlayCard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_K2_PlayCard_Statics::PropPointers) < 2048);
	static_assert(sizeof(ESCardAction_eventK2_PlayCard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESCardAction_K2_PlayCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardAction_K2_PlayCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESCardAction_K2_Rotate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardAction_K2_Rotate_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnRotate" },
		{ "ModuleRelativePath", "Public/Core/Player/ESCardAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardAction_K2_Rotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardAction, nullptr, "K2_Rotate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_K2_Rotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardAction_K2_Rotate_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UESCardAction_K2_Rotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardAction_K2_Rotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESCardAction_K2_StartPlayCard_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_CardData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESCardAction_K2_StartPlayCard_Statics::NewProp_CardData = { "CardData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardAction_eventK2_StartPlayCard_Parms, CardData), Z_Construct_UScriptStruct_FCardData, METADATA_PARAMS(0, nullptr) }; // 3044133914
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESCardAction_K2_StartPlayCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardAction_K2_StartPlayCard_Statics::NewProp_CardData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardAction_K2_StartPlayCard_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnStartPlayCard" },
		{ "ModuleRelativePath", "Public/Core/Player/ESCardAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardAction_K2_StartPlayCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardAction, nullptr, "K2_StartPlayCard", nullptr, nullptr, Z_Construct_UFunction_UESCardAction_K2_StartPlayCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_K2_StartPlayCard_Statics::PropPointers), sizeof(ESCardAction_eventK2_StartPlayCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_K2_StartPlayCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardAction_K2_StartPlayCard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_K2_StartPlayCard_Statics::PropPointers) < 2048);
	static_assert(sizeof(ESCardAction_eventK2_StartPlayCard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESCardAction_K2_StartPlayCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardAction_K2_StartPlayCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESCardAction_OnMouseTrigger_Statics
	{
		struct ESCardAction_eventOnMouseTrigger_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESCardAction_OnMouseTrigger_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardAction_eventOnMouseTrigger_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESCardAction_OnMouseTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardAction_OnMouseTrigger_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardAction_OnMouseTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESCardAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardAction_OnMouseTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardAction, nullptr, "OnMouseTrigger", nullptr, nullptr, Z_Construct_UFunction_UESCardAction_OnMouseTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_OnMouseTrigger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESCardAction_OnMouseTrigger_Statics::ESCardAction_eventOnMouseTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_OnMouseTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardAction_OnMouseTrigger_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_OnMouseTrigger_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESCardAction_OnMouseTrigger_Statics::ESCardAction_eventOnMouseTrigger_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESCardAction_OnMouseTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardAction_OnMouseTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESCardAction_OnRotate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardAction_OnRotate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESCardAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardAction_OnRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardAction, nullptr, "OnRotate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_OnRotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardAction_OnRotate_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UESCardAction_OnRotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardAction_OnRotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESCardAction_PlayCard_Statics
	{
		struct ESCardAction_eventPlayCard_Parms
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
	void Z_Construct_UFunction_UESCardAction_PlayCard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESCardAction_eventPlayCard_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESCardAction_PlayCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESCardAction_eventPlayCard_Parms), &Z_Construct_UFunction_UESCardAction_PlayCard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESCardAction_PlayCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardAction_PlayCard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardAction_PlayCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESCardAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardAction_PlayCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardAction, nullptr, "PlayCard", nullptr, nullptr, Z_Construct_UFunction_UESCardAction_PlayCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_PlayCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESCardAction_PlayCard_Statics::ESCardAction_eventPlayCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_PlayCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardAction_PlayCard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_PlayCard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESCardAction_PlayCard_Statics::ESCardAction_eventPlayCard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESCardAction_PlayCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardAction_PlayCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESCardAction_StartPlayCard_Statics
	{
		struct ESCardAction_eventStartPlayCard_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESCardAction_StartPlayCard_Statics::NewProp_CardData = { "CardData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardAction_eventStartPlayCard_Parms, CardData), Z_Construct_UScriptStruct_FCardData, METADATA_PARAMS(0, nullptr) }; // 3044133914
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESCardAction_StartPlayCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardAction_StartPlayCard_Statics::NewProp_CardData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardAction_StartPlayCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Player/ESCardAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardAction_StartPlayCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardAction, nullptr, "StartPlayCard", nullptr, nullptr, Z_Construct_UFunction_UESCardAction_StartPlayCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_StartPlayCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESCardAction_StartPlayCard_Statics::ESCardAction_eventStartPlayCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_StartPlayCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardAction_StartPlayCard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardAction_StartPlayCard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESCardAction_StartPlayCard_Statics::ESCardAction_eventStartPlayCard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESCardAction_StartPlayCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardAction_StartPlayCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UESCardAction);
	UClass* Z_Construct_UClass_UESCardAction_NoRegister()
	{
		return UESCardAction::StaticClass();
	}
	struct Z_Construct_UClass_UESCardAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCard_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentCard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPlayingCard_MetaData[];
#endif
		static void NewProp_IsPlayingCard_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPlayingCard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UESCardAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UESCardAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UESCardAction_CancelPlayCard, "CancelPlayCard" }, // 1857871081
		{ &Z_Construct_UFunction_UESCardAction_CanPlayCard, "CanPlayCard" }, // 1561109731
		{ &Z_Construct_UFunction_UESCardAction_GetESGameMode, "GetESGameMode" }, // 1360468740
		{ &Z_Construct_UFunction_UESCardAction_Init, "Init" }, // 1776509925
		{ &Z_Construct_UFunction_UESCardAction_K2_CancelPlayCard, "K2_CancelPlayCard" }, // 1243984235
		{ &Z_Construct_UFunction_UESCardAction_K2_CanPlayCard, "K2_CanPlayCard" }, // 3945212086
		{ &Z_Construct_UFunction_UESCardAction_K2_Init, "K2_Init" }, // 3009700132
		{ &Z_Construct_UFunction_UESCardAction_K2_MouseTrigger, "K2_MouseTrigger" }, // 840060197
		{ &Z_Construct_UFunction_UESCardAction_K2_PlayCard, "K2_PlayCard" }, // 3185801977
		{ &Z_Construct_UFunction_UESCardAction_K2_Rotate, "K2_Rotate" }, // 1787569526
		{ &Z_Construct_UFunction_UESCardAction_K2_StartPlayCard, "K2_StartPlayCard" }, // 284757929
		{ &Z_Construct_UFunction_UESCardAction_OnMouseTrigger, "OnMouseTrigger" }, // 604949309
		{ &Z_Construct_UFunction_UESCardAction_OnRotate, "OnRotate" }, // 538728125
		{ &Z_Construct_UFunction_UESCardAction_PlayCard, "PlayCard" }, // 4101083133
		{ &Z_Construct_UFunction_UESCardAction_StartPlayCard, "StartPlayCard" }, // 1877660273
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Player/ESCardAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Player/ESCardAction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowWorldContextPin", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardAction_Statics::NewProp_CurrentCard_MetaData[] = {
		{ "Category", "ESCardAction" },
		{ "ModuleRelativePath", "Public/Core/Player/ESCardAction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UESCardAction_Statics::NewProp_CurrentCard = { "CurrentCard", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESCardAction, CurrentCard), Z_Construct_UScriptStruct_FCardData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardAction_Statics::NewProp_CurrentCard_MetaData), Z_Construct_UClass_UESCardAction_Statics::NewProp_CurrentCard_MetaData) }; // 3044133914
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardAction_Statics::NewProp_IsPlayingCard_MetaData[] = {
		{ "Category", "ESCardAction" },
		{ "ModuleRelativePath", "Public/Core/Player/ESCardAction.h" },
	};
#endif
	void Z_Construct_UClass_UESCardAction_Statics::NewProp_IsPlayingCard_SetBit(void* Obj)
	{
		((UESCardAction*)Obj)->IsPlayingCard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UESCardAction_Statics::NewProp_IsPlayingCard = { "IsPlayingCard", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UESCardAction), &Z_Construct_UClass_UESCardAction_Statics::NewProp_IsPlayingCard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardAction_Statics::NewProp_IsPlayingCard_MetaData), Z_Construct_UClass_UESCardAction_Statics::NewProp_IsPlayingCard_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UESCardAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESCardAction_Statics::NewProp_CurrentCard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESCardAction_Statics::NewProp_IsPlayingCard,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UESCardAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UESCardAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UESCardAction_Statics::ClassParams = {
		&UESCardAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UESCardAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UESCardAction_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UESCardAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UESCardAction()
	{
		if (!Z_Registration_Info_UClass_UESCardAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UESCardAction.OuterSingleton, Z_Construct_UClass_UESCardAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UESCardAction.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<UESCardAction>()
	{
		return UESCardAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UESCardAction);
	UESCardAction::~UESCardAction() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UESCardAction, UESCardAction::StaticClass, TEXT("UESCardAction"), &Z_Registration_Info_UClass_UESCardAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UESCardAction), 926016657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_3357323523(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
