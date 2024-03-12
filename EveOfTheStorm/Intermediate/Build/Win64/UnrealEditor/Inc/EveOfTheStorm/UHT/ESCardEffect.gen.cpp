// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Definition/ESCardEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESCardEffect() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESDefaultGameMode_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardEffect();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	DEFINE_FUNCTION(UESCardEffect::execOnEffect)
	{
		P_GET_OBJECT(AESDefaultGameMode,Z_Param_InGameMode);
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEffect(Z_Param_InGameMode,Z_Param_InPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESCardEffect::execCanApplyEffect)
	{
		P_GET_OBJECT(AESDefaultGameMode,Z_Param_InGameMode);
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanApplyEffect(Z_Param_InGameMode,Z_Param_InPlayerController);
		P_NATIVE_END;
	}
	struct ESCardEffect_eventK2_CanApplyEffect_Parms
	{
		AESDefaultGameMode* GameMode;
		APlayerController* PlayerController;
		bool CanApply;
	};
	struct ESCardEffect_eventK2_OnEffect_Parms
	{
		AESDefaultGameMode* GameMode;
		APlayerController* PlayerController;
	};
	static FName NAME_UESCardEffect_K2_CanApplyEffect = FName(TEXT("K2_CanApplyEffect"));
	void UESCardEffect::K2_CanApplyEffect(AESDefaultGameMode* GameMode, APlayerController* PlayerController, bool& CanApply)
	{
		ESCardEffect_eventK2_CanApplyEffect_Parms Parms;
		Parms.GameMode=GameMode;
		Parms.PlayerController=PlayerController;
		Parms.CanApply=CanApply ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UESCardEffect_K2_CanApplyEffect),&Parms);
		CanApply=Parms.CanApply;
	}
	static FName NAME_UESCardEffect_K2_OnEffect = FName(TEXT("K2_OnEffect"));
	void UESCardEffect::K2_OnEffect(AESDefaultGameMode* GameMode, APlayerController* PlayerController)
	{
		ESCardEffect_eventK2_OnEffect_Parms Parms;
		Parms.GameMode=GameMode;
		Parms.PlayerController=PlayerController;
		ProcessEvent(FindFunctionChecked(NAME_UESCardEffect_K2_OnEffect),&Parms);
	}
	void UESCardEffect::StaticRegisterNativesUESCardEffect()
	{
		UClass* Class = UESCardEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanApplyEffect", &UESCardEffect::execCanApplyEffect },
			{ "OnEffect", &UESCardEffect::execOnEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics
	{
		struct ESCardEffect_eventCanApplyEffect_Parms
		{
			AESDefaultGameMode* InGameMode;
			APlayerController* InPlayerController;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGameMode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics::NewProp_InGameMode = { "InGameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardEffect_eventCanApplyEffect_Parms, InGameMode), Z_Construct_UClass_AESDefaultGameMode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardEffect_eventCanApplyEffect_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESCardEffect_eventCanApplyEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESCardEffect_eventCanApplyEffect_Parms), &Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics::NewProp_InGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics::NewProp_InPlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardEffect, nullptr, "CanApplyEffect", nullptr, nullptr, Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics::ESCardEffect_eventCanApplyEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics::ESCardEffect_eventCanApplyEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESCardEffect_CanApplyEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardEffect_CanApplyEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static void NewProp_CanApply_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanApply;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardEffect_eventK2_CanApplyEffect_Parms, GameMode), Z_Construct_UClass_AESDefaultGameMode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardEffect_eventK2_CanApplyEffect_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect_Statics::NewProp_CanApply_SetBit(void* Obj)
	{
		((ESCardEffect_eventK2_CanApplyEffect_Parms*)Obj)->CanApply = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect_Statics::NewProp_CanApply = { "CanApply", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESCardEffect_eventK2_CanApplyEffect_Parms), &Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect_Statics::NewProp_CanApply_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect_Statics::NewProp_GameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect_Statics::NewProp_CanApply,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "CanApplyEffect" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardEffect, nullptr, "K2_CanApplyEffect", nullptr, nullptr, Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect_Statics::PropPointers), sizeof(ESCardEffect_eventK2_CanApplyEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(ESCardEffect_eventK2_CanApplyEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESCardEffect_K2_OnEffect_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UESCardEffect_K2_OnEffect_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardEffect_eventK2_OnEffect_Parms, GameMode), Z_Construct_UClass_AESDefaultGameMode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UESCardEffect_K2_OnEffect_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardEffect_eventK2_OnEffect_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESCardEffect_K2_OnEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardEffect_K2_OnEffect_Statics::NewProp_GameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardEffect_K2_OnEffect_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardEffect_K2_OnEffect_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnEffect" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardEffect_K2_OnEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardEffect, nullptr, "K2_OnEffect", nullptr, nullptr, Z_Construct_UFunction_UESCardEffect_K2_OnEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardEffect_K2_OnEffect_Statics::PropPointers), sizeof(ESCardEffect_eventK2_OnEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardEffect_K2_OnEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardEffect_K2_OnEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardEffect_K2_OnEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(ESCardEffect_eventK2_OnEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESCardEffect_K2_OnEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardEffect_K2_OnEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESCardEffect_OnEffect_Statics
	{
		struct ESCardEffect_eventOnEffect_Parms
		{
			AESDefaultGameMode* InGameMode;
			APlayerController* InPlayerController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGameMode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UESCardEffect_OnEffect_Statics::NewProp_InGameMode = { "InGameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardEffect_eventOnEffect_Parms, InGameMode), Z_Construct_UClass_AESDefaultGameMode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UESCardEffect_OnEffect_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardEffect_eventOnEffect_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESCardEffect_OnEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardEffect_OnEffect_Statics::NewProp_InGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardEffect_OnEffect_Statics::NewProp_InPlayerController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardEffect_OnEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardEffect_OnEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardEffect, nullptr, "OnEffect", nullptr, nullptr, Z_Construct_UFunction_UESCardEffect_OnEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardEffect_OnEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESCardEffect_OnEffect_Statics::ESCardEffect_eventOnEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardEffect_OnEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardEffect_OnEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardEffect_OnEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESCardEffect_OnEffect_Statics::ESCardEffect_eventOnEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESCardEffect_OnEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardEffect_OnEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UESCardEffect);
	UClass* Z_Construct_UClass_UESCardEffect_NoRegister()
	{
		return UESCardEffect::StaticClass();
	}
	struct Z_Construct_UClass_UESCardEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UESCardEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardEffect_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UESCardEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UESCardEffect_CanApplyEffect, "CanApplyEffect" }, // 719268924
		{ &Z_Construct_UFunction_UESCardEffect_K2_CanApplyEffect, "K2_CanApplyEffect" }, // 3437645312
		{ &Z_Construct_UFunction_UESCardEffect_K2_OnEffect, "K2_OnEffect" }, // 925210278
		{ &Z_Construct_UFunction_UESCardEffect_OnEffect, "OnEffect" }, // 3444331482
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardEffect_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Definition/ESCardEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardEffect.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardEffect_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "ESCardEffect" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardEffect.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UESCardEffect_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESCardEffect, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardEffect_Statics::NewProp_ErrorMessage_MetaData), Z_Construct_UClass_UESCardEffect_Statics::NewProp_ErrorMessage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UESCardEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESCardEffect_Statics::NewProp_ErrorMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UESCardEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UESCardEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UESCardEffect_Statics::ClassParams = {
		&UESCardEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UESCardEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UESCardEffect_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UESCardEffect_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardEffect_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UESCardEffect()
	{
		if (!Z_Registration_Info_UClass_UESCardEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UESCardEffect.OuterSingleton, Z_Construct_UClass_UESCardEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UESCardEffect.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<UESCardEffect>()
	{
		return UESCardEffect::StaticClass();
	}
	UESCardEffect::UESCardEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UESCardEffect);
	UESCardEffect::~UESCardEffect() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UESCardEffect, UESCardEffect::StaticClass, TEXT("UESCardEffect"), &Z_Registration_Info_UClass_UESCardEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UESCardEffect), 1858393703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_2393156065(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
