// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Game/ESGameHelper.h"
#include "EveOfTheStorm/Public/Core/Game/ESResourceSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESGameHelper() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESGameHelper();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESGameHelper_NoRegister();
	EVEOFTHESTORM_API UEnum* Z_Construct_UEnum_EveOfTheStorm_EResourceType();
	EVEOFTHESTORM_API UScriptStruct* Z_Construct_UScriptStruct_FResourceModifier();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	DEFINE_FUNCTION(UESGameHelper::execApplyResourceModifier)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Controller);
		P_GET_STRUCT(FResourceModifier,Z_Param_Modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UESGameHelper::ApplyResourceModifier(Z_Param_Controller,Z_Param_Modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESGameHelper::execHasResource)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Controller);
		P_GET_ENUM(EResourceType,Z_Param_Type);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UESGameHelper::HasResource(Z_Param_Controller,EResourceType(Z_Param_Type),Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESGameHelper::execSetResource)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Controller);
		P_GET_ENUM(EResourceType,Z_Param_Type);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		UESGameHelper::SetResource(Z_Param_Controller,EResourceType(Z_Param_Type),Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESGameHelper::execGetResource)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Controller);
		P_GET_ENUM(EResourceType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UESGameHelper::GetResource(Z_Param_Controller,EResourceType(Z_Param_Type));
		P_NATIVE_END;
	}
	void UESGameHelper::StaticRegisterNativesUESGameHelper()
	{
		UClass* Class = UESGameHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyResourceModifier", &UESGameHelper::execApplyResourceModifier },
			{ "GetResource", &UESGameHelper::execGetResource },
			{ "HasResource", &UESGameHelper::execHasResource },
			{ "SetResource", &UESGameHelper::execSetResource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier_Statics
	{
		struct ESGameHelper_eventApplyResourceModifier_Parms
		{
			APlayerController* Controller;
			FResourceModifier Modifier;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGameHelper_eventApplyResourceModifier_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGameHelper_eventApplyResourceModifier_Parms, Modifier), Z_Construct_UScriptStruct_FResourceModifier, METADATA_PARAMS(0, nullptr) }; // 3314774621
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGameHelper_eventApplyResourceModifier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier_Statics::NewProp_Modifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|Resource" },
		{ "ModuleRelativePath", "Public/Core/Game/ESGameHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGameHelper, nullptr, "ApplyResourceModifier", nullptr, nullptr, Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier_Statics::ESGameHelper_eventApplyResourceModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier_Statics::ESGameHelper_eventApplyResourceModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESGameHelper_GetResource_Statics
	{
		struct ESGameHelper_eventGetResource_Parms
		{
			APlayerController* Controller;
			EResourceType Type;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UESGameHelper_GetResource_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGameHelper_eventGetResource_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESGameHelper_GetResource_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESGameHelper_GetResource_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGameHelper_eventGetResource_Parms, Type), Z_Construct_UEnum_EveOfTheStorm_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3645876735
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UESGameHelper_GetResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGameHelper_eventGetResource_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGameHelper_GetResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGameHelper_GetResource_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGameHelper_GetResource_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGameHelper_GetResource_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGameHelper_GetResource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGameHelper_GetResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|Resource" },
		{ "ModuleRelativePath", "Public/Core/Game/ESGameHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGameHelper_GetResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGameHelper, nullptr, "GetResource", nullptr, nullptr, Z_Construct_UFunction_UESGameHelper_GetResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGameHelper_GetResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGameHelper_GetResource_Statics::ESGameHelper_eventGetResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGameHelper_GetResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGameHelper_GetResource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGameHelper_GetResource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGameHelper_GetResource_Statics::ESGameHelper_eventGetResource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGameHelper_GetResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGameHelper_GetResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESGameHelper_HasResource_Statics
	{
		struct ESGameHelper_eventHasResource_Parms
		{
			APlayerController* Controller;
			EResourceType Type;
			float Amount;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UESGameHelper_HasResource_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGameHelper_eventHasResource_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESGameHelper_HasResource_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESGameHelper_HasResource_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGameHelper_eventHasResource_Parms, Type), Z_Construct_UEnum_EveOfTheStorm_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3645876735
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UESGameHelper_HasResource_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGameHelper_eventHasResource_Parms, Amount), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UESGameHelper_HasResource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESGameHelper_eventHasResource_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESGameHelper_HasResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESGameHelper_eventHasResource_Parms), &Z_Construct_UFunction_UESGameHelper_HasResource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGameHelper_HasResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGameHelper_HasResource_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGameHelper_HasResource_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGameHelper_HasResource_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGameHelper_HasResource_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGameHelper_HasResource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGameHelper_HasResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|Resource" },
		{ "ModuleRelativePath", "Public/Core/Game/ESGameHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGameHelper_HasResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGameHelper, nullptr, "HasResource", nullptr, nullptr, Z_Construct_UFunction_UESGameHelper_HasResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGameHelper_HasResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGameHelper_HasResource_Statics::ESGameHelper_eventHasResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGameHelper_HasResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGameHelper_HasResource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGameHelper_HasResource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGameHelper_HasResource_Statics::ESGameHelper_eventHasResource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGameHelper_HasResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGameHelper_HasResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESGameHelper_SetResource_Statics
	{
		struct ESGameHelper_eventSetResource_Parms
		{
			APlayerController* Controller;
			EResourceType Type;
			float Amount;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UESGameHelper_SetResource_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGameHelper_eventSetResource_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESGameHelper_SetResource_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESGameHelper_SetResource_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGameHelper_eventSetResource_Parms, Type), Z_Construct_UEnum_EveOfTheStorm_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3645876735
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UESGameHelper_SetResource_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGameHelper_eventSetResource_Parms, Amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGameHelper_SetResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGameHelper_SetResource_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGameHelper_SetResource_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGameHelper_SetResource_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGameHelper_SetResource_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGameHelper_SetResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|Resource" },
		{ "ModuleRelativePath", "Public/Core/Game/ESGameHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGameHelper_SetResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGameHelper, nullptr, "SetResource", nullptr, nullptr, Z_Construct_UFunction_UESGameHelper_SetResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGameHelper_SetResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGameHelper_SetResource_Statics::ESGameHelper_eventSetResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGameHelper_SetResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGameHelper_SetResource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGameHelper_SetResource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGameHelper_SetResource_Statics::ESGameHelper_eventSetResource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGameHelper_SetResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGameHelper_SetResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UESGameHelper);
	UClass* Z_Construct_UClass_UESGameHelper_NoRegister()
	{
		return UESGameHelper::StaticClass();
	}
	struct Z_Construct_UClass_UESGameHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UESGameHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESGameHelper_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UESGameHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UESGameHelper_ApplyResourceModifier, "ApplyResourceModifier" }, // 200955591
		{ &Z_Construct_UFunction_UESGameHelper_GetResource, "GetResource" }, // 1466889869
		{ &Z_Construct_UFunction_UESGameHelper_HasResource, "HasResource" }, // 2583218190
		{ &Z_Construct_UFunction_UESGameHelper_SetResource, "SetResource" }, // 2070466547
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESGameHelper_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESGameHelper_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Game/ESGameHelper.h" },
		{ "ModuleRelativePath", "Public/Core/Game/ESGameHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UESGameHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UESGameHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UESGameHelper_Statics::ClassParams = {
		&UESGameHelper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESGameHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UESGameHelper_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UESGameHelper()
	{
		if (!Z_Registration_Info_UClass_UESGameHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UESGameHelper.OuterSingleton, Z_Construct_UClass_UESGameHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UESGameHelper.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<UESGameHelper>()
	{
		return UESGameHelper::StaticClass();
	}
	UESGameHelper::UESGameHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UESGameHelper);
	UESGameHelper::~UESGameHelper() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UESGameHelper, UESGameHelper::StaticClass, TEXT("UESGameHelper"), &Z_Registration_Info_UClass_UESGameHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UESGameHelper), 4112290367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_2500582937(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
