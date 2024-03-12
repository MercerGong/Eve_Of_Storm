// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Grid/ESBuildingActor.h"
#include "EveOfTheStorm/Public/Core/Grid/ESBuildingSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBuildingActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESBuildingActor();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESBuildingActor_NoRegister();
	EVEOFTHESTORM_API UEnum* Z_Construct_UEnum_EveOfTheStorm_EGridDirection();
	EVEOFTHESTORM_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingData();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	DEFINE_FUNCTION(AESBuildingActor::execSetDirection)
	{
		P_GET_ENUM(EGridDirection,Z_Param_InDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDirection(EGridDirection(Z_Param_InDirection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESBuildingActor::execSetPosition)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_InPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPosition(Z_Param_InPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESBuildingActor::execTickTurn)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deltaTurn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickTurn(Z_Param_deltaTurn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESBuildingActor::execInit)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_InPos);
		P_GET_STRUCT(FBuildingData,Z_Param_InBuildingData);
		P_GET_PROPERTY(FIntProperty,Z_Param_ImageIndex);
		P_GET_ENUM(EGridDirection,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_InPos,Z_Param_InBuildingData,Z_Param_ImageIndex,EGridDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	static FName NAME_AESBuildingActor_OnClick = FName(TEXT("OnClick"));
	void AESBuildingActor::OnClick()
	{
		ProcessEvent(FindFunctionChecked(NAME_AESBuildingActor_OnClick),NULL);
	}
	void AESBuildingActor::StaticRegisterNativesAESBuildingActor()
	{
		UClass* Class = AESBuildingActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &AESBuildingActor::execInit },
			{ "SetDirection", &AESBuildingActor::execSetDirection },
			{ "SetPosition", &AESBuildingActor::execSetPosition },
			{ "TickTurn", &AESBuildingActor::execTickTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AESBuildingActor_Init_Statics
	{
		struct ESBuildingActor_eventInit_Parms
		{
			FIntPoint InPos;
			FBuildingData InBuildingData;
			int32 ImageIndex;
			EGridDirection Direction;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPos;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBuildingData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImageIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AESBuildingActor_Init_Statics::NewProp_InPos = { "InPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingActor_eventInit_Parms, InPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AESBuildingActor_Init_Statics::NewProp_InBuildingData = { "InBuildingData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingActor_eventInit_Parms, InBuildingData), Z_Construct_UScriptStruct_FBuildingData, METADATA_PARAMS(0, nullptr) }; // 669079497
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AESBuildingActor_Init_Statics::NewProp_ImageIndex = { "ImageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingActor_eventInit_Parms, ImageIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AESBuildingActor_Init_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AESBuildingActor_Init_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingActor_eventInit_Parms, Direction), Z_Construct_UEnum_EveOfTheStorm_EGridDirection, METADATA_PARAMS(0, nullptr) }; // 3444209995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESBuildingActor_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingActor_Init_Statics::NewProp_InPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingActor_Init_Statics::NewProp_InBuildingData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingActor_Init_Statics::NewProp_ImageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingActor_Init_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingActor_Init_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESBuildingActor_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESBuildingActor_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESBuildingActor, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_AESBuildingActor_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingActor_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESBuildingActor_Init_Statics::ESBuildingActor_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingActor_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESBuildingActor_Init_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingActor_Init_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESBuildingActor_Init_Statics::ESBuildingActor_eventInit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESBuildingActor_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESBuildingActor_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESBuildingActor_OnClick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESBuildingActor_OnClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESBuildingActor_OnClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESBuildingActor, nullptr, "OnClick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingActor_OnClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESBuildingActor_OnClick_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AESBuildingActor_OnClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESBuildingActor_OnClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESBuildingActor_SetDirection_Statics
	{
		struct ESBuildingActor_eventSetDirection_Parms
		{
			EGridDirection InDirection;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InDirection_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AESBuildingActor_SetDirection_Statics::NewProp_InDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AESBuildingActor_SetDirection_Statics::NewProp_InDirection = { "InDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingActor_eventSetDirection_Parms, InDirection), Z_Construct_UEnum_EveOfTheStorm_EGridDirection, METADATA_PARAMS(0, nullptr) }; // 3444209995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESBuildingActor_SetDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingActor_SetDirection_Statics::NewProp_InDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingActor_SetDirection_Statics::NewProp_InDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESBuildingActor_SetDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESBuildingActor_SetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESBuildingActor, nullptr, "SetDirection", nullptr, nullptr, Z_Construct_UFunction_AESBuildingActor_SetDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingActor_SetDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESBuildingActor_SetDirection_Statics::ESBuildingActor_eventSetDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingActor_SetDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESBuildingActor_SetDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingActor_SetDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESBuildingActor_SetDirection_Statics::ESBuildingActor_eventSetDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESBuildingActor_SetDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESBuildingActor_SetDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESBuildingActor_SetPosition_Statics
	{
		struct ESBuildingActor_eventSetPosition_Parms
		{
			FIntPoint InPos;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AESBuildingActor_SetPosition_Statics::NewProp_InPos = { "InPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingActor_eventSetPosition_Parms, InPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESBuildingActor_SetPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingActor_SetPosition_Statics::NewProp_InPos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESBuildingActor_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESBuildingActor_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESBuildingActor, nullptr, "SetPosition", nullptr, nullptr, Z_Construct_UFunction_AESBuildingActor_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingActor_SetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESBuildingActor_SetPosition_Statics::ESBuildingActor_eventSetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingActor_SetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESBuildingActor_SetPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingActor_SetPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESBuildingActor_SetPosition_Statics::ESBuildingActor_eventSetPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESBuildingActor_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESBuildingActor_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESBuildingActor_TickTurn_Statics
	{
		struct ESBuildingActor_eventTickTurn_Parms
		{
			int32 deltaTurn;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deltaTurn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AESBuildingActor_TickTurn_Statics::NewProp_deltaTurn = { "deltaTurn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingActor_eventTickTurn_Parms, deltaTurn), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESBuildingActor_TickTurn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingActor_TickTurn_Statics::NewProp_deltaTurn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESBuildingActor_TickTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESBuildingActor_TickTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESBuildingActor, nullptr, "TickTurn", nullptr, nullptr, Z_Construct_UFunction_AESBuildingActor_TickTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingActor_TickTurn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESBuildingActor_TickTurn_Statics::ESBuildingActor_eventTickTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingActor_TickTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESBuildingActor_TickTurn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingActor_TickTurn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESBuildingActor_TickTurn_Statics::ESBuildingActor_eventTickTurn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESBuildingActor_TickTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESBuildingActor_TickTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AESBuildingActor);
	UClass* Z_Construct_UClass_AESBuildingActor_NoRegister()
	{
		return AESBuildingActor::StaticClass();
	}
	struct Z_Construct_UClass_AESBuildingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetPeriod_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OffsetPeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPeriod_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartPeriod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AESBuildingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AESBuildingActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AESBuildingActor_Init, "Init" }, // 4071101314
		{ &Z_Construct_UFunction_AESBuildingActor_OnClick, "OnClick" }, // 3995065329
		{ &Z_Construct_UFunction_AESBuildingActor_SetDirection, "SetDirection" }, // 557200199
		{ &Z_Construct_UFunction_AESBuildingActor_SetPosition, "SetPosition" }, // 1550149001
		{ &Z_Construct_UFunction_AESBuildingActor_TickTurn, "TickTurn" }, // 2795837907
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Grid/ESBuildingActor.h" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingActor_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "ESBuildingActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AESBuildingActor_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingActor, Data), Z_Construct_UScriptStruct_FBuildingData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingActor_Statics::NewProp_Data_MetaData), Z_Construct_UClass_AESBuildingActor_Statics::NewProp_Data_MetaData) }; // 669079497
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AESBuildingActor_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingActor_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "ESBuildingActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AESBuildingActor_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingActor, Direction), Z_Construct_UEnum_EveOfTheStorm_EGridDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingActor_Statics::NewProp_Direction_MetaData), Z_Construct_UClass_AESBuildingActor_Statics::NewProp_Direction_MetaData) }; // 3444209995
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingActor_Statics::NewProp_RootSceneComponent_MetaData[] = {
		{ "Category", "ESBuildingActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESBuildingActor_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingActor, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingActor_Statics::NewProp_RootSceneComponent_MetaData), Z_Construct_UClass_AESBuildingActor_Statics::NewProp_RootSceneComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "ESBuildingActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESBuildingActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingActor_Statics::NewProp_StaticMeshComponent_MetaData), Z_Construct_UClass_AESBuildingActor_Statics::NewProp_StaticMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingActor_Statics::NewProp_BaseMaterial_MetaData[] = {
		{ "Category", "ESBuildingActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESBuildingActor_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingActor, BaseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingActor_Statics::NewProp_BaseMaterial_MetaData), Z_Construct_UClass_AESBuildingActor_Statics::NewProp_BaseMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingActor_Statics::NewProp_DynamicMaterial_MetaData[] = {
		{ "Category", "ESBuildingActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESBuildingActor_Statics::NewProp_DynamicMaterial = { "DynamicMaterial", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingActor, DynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingActor_Statics::NewProp_DynamicMaterial_MetaData), Z_Construct_UClass_AESBuildingActor_Statics::NewProp_DynamicMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingActor_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AESBuildingActor_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingActor, Position), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingActor_Statics::NewProp_Position_MetaData), Z_Construct_UClass_AESBuildingActor_Statics::NewProp_Position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingActor_Statics::NewProp_OffsetPeriod_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AESBuildingActor_Statics::NewProp_OffsetPeriod = { "OffsetPeriod", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingActor, OffsetPeriod), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingActor_Statics::NewProp_OffsetPeriod_MetaData), Z_Construct_UClass_AESBuildingActor_Statics::NewProp_OffsetPeriod_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingActor_Statics::NewProp_StartPeriod_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AESBuildingActor_Statics::NewProp_StartPeriod = { "StartPeriod", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingActor, StartPeriod), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingActor_Statics::NewProp_StartPeriod_MetaData), Z_Construct_UClass_AESBuildingActor_Statics::NewProp_StartPeriod_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AESBuildingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingActor_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingActor_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingActor_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingActor_Statics::NewProp_RootSceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingActor_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingActor_Statics::NewProp_BaseMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingActor_Statics::NewProp_DynamicMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingActor_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingActor_Statics::NewProp_OffsetPeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingActor_Statics::NewProp_StartPeriod,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AESBuildingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AESBuildingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AESBuildingActor_Statics::ClassParams = {
		&AESBuildingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AESBuildingActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AESBuildingActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AESBuildingActor()
	{
		if (!Z_Registration_Info_UClass_AESBuildingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AESBuildingActor.OuterSingleton, Z_Construct_UClass_AESBuildingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AESBuildingActor.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<AESBuildingActor>()
	{
		return AESBuildingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AESBuildingActor);
	AESBuildingActor::~AESBuildingActor() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AESBuildingActor, AESBuildingActor::StaticClass, TEXT("AESBuildingActor"), &Z_Registration_Info_UClass_AESBuildingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AESBuildingActor), 677098425U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_2792716218(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
