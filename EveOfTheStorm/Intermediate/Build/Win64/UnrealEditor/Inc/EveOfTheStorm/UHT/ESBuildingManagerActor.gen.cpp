// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Grid/ESBuildingManagerActor.h"
#include "EveOfTheStorm/Public/Core/Grid/ESBuildingSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBuildingManagerActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESBuildingActor_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESBuildingManagerActor();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESBuildingManagerActor_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESBuildingSystem_NoRegister();
	EVEOFTHESTORM_API UEnum* Z_Construct_UEnum_EveOfTheStorm_EGridDirection();
	EVEOFTHESTORM_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingData();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	DEFINE_FUNCTION(AESBuildingManagerActor::execSetGetGroundOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->SetGetGroundOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESBuildingManagerActor::execGetBuildDesireTransform)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_Pos);
		P_GET_STRUCT_REF(FBuildingData,Z_Param_Out_BuildingInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetBuildDesireTransform(Z_Param_Pos,Z_Param_Out_BuildingInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESBuildingManagerActor::execConfirmPlacement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConfirmPlacement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESBuildingManagerActor::execHidePreviewActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HidePreviewActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESBuildingManagerActor::execUpdatePreviewActorByWorldLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePreviewActorByWorldLocation(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESBuildingManagerActor::execUpdatePreviewActor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_ENUM(EGridDirection,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePreviewActor(Z_Param_X,Z_Param_Y,EGridDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESBuildingManagerActor::execSetPreviewActor)
	{
		P_GET_STRUCT(FBuildingData,Z_Param_InBuildingData);
		P_GET_ENUM(EGridDirection,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreviewActor(Z_Param_InBuildingData,EGridDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESBuildingManagerActor::execOnBuildingRemoved)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBuildingRemoved(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESBuildingManagerActor::execOnBuildingPlaced)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_STRUCT(FBuildingData,Z_Param_InBuildingData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBuildingPlaced(Z_Param_X,Z_Param_Y,Z_Param_InBuildingData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESBuildingManagerActor::execInit)
	{
		P_GET_OBJECT(UESBuildingSystem,Z_Param_InSystem);
		P_GET_OBJECT(UClass,Z_Param_InActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_InSystem,Z_Param_InActorClass);
		P_NATIVE_END;
	}
	void AESBuildingManagerActor::StaticRegisterNativesAESBuildingManagerActor()
	{
		UClass* Class = AESBuildingManagerActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConfirmPlacement", &AESBuildingManagerActor::execConfirmPlacement },
			{ "GetBuildDesireTransform", &AESBuildingManagerActor::execGetBuildDesireTransform },
			{ "HidePreviewActor", &AESBuildingManagerActor::execHidePreviewActor },
			{ "Init", &AESBuildingManagerActor::execInit },
			{ "OnBuildingPlaced", &AESBuildingManagerActor::execOnBuildingPlaced },
			{ "OnBuildingRemoved", &AESBuildingManagerActor::execOnBuildingRemoved },
			{ "SetGetGroundOffset", &AESBuildingManagerActor::execSetGetGroundOffset },
			{ "SetPreviewActor", &AESBuildingManagerActor::execSetPreviewActor },
			{ "UpdatePreviewActor", &AESBuildingManagerActor::execUpdatePreviewActor },
			{ "UpdatePreviewActorByWorldLocation", &AESBuildingManagerActor::execUpdatePreviewActorByWorldLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AESBuildingManagerActor_ConfirmPlacement_Statics
	{
		struct ESBuildingManagerActor_eventConfirmPlacement_Parms
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
	void Z_Construct_UFunction_AESBuildingManagerActor_ConfirmPlacement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESBuildingManagerActor_eventConfirmPlacement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AESBuildingManagerActor_ConfirmPlacement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESBuildingManagerActor_eventConfirmPlacement_Parms), &Z_Construct_UFunction_AESBuildingManagerActor_ConfirmPlacement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESBuildingManagerActor_ConfirmPlacement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingManagerActor_ConfirmPlacement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESBuildingManagerActor_ConfirmPlacement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESBuildingManagerActor_ConfirmPlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESBuildingManagerActor, nullptr, "ConfirmPlacement", nullptr, nullptr, Z_Construct_UFunction_AESBuildingManagerActor_ConfirmPlacement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_ConfirmPlacement_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESBuildingManagerActor_ConfirmPlacement_Statics::ESBuildingManagerActor_eventConfirmPlacement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_ConfirmPlacement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESBuildingManagerActor_ConfirmPlacement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_ConfirmPlacement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESBuildingManagerActor_ConfirmPlacement_Statics::ESBuildingManagerActor_eventConfirmPlacement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESBuildingManagerActor_ConfirmPlacement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESBuildingManagerActor_ConfirmPlacement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform_Statics
	{
		struct ESBuildingManagerActor_eventGetBuildDesireTransform_Parms
		{
			FIntPoint Pos;
			FBuildingData BuildingInfo;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuildingInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingManagerActor_eventGetBuildDesireTransform_Parms, Pos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform_Statics::NewProp_BuildingInfo = { "BuildingInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingManagerActor_eventGetBuildDesireTransform_Parms, BuildingInfo), Z_Construct_UScriptStruct_FBuildingData, METADATA_PARAMS(0, nullptr) }; // 669079497
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingManagerActor_eventGetBuildDesireTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform_Statics::NewProp_Pos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform_Statics::NewProp_BuildingInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|Building" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESBuildingManagerActor, nullptr, "GetBuildDesireTransform", nullptr, nullptr, Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform_Statics::ESBuildingManagerActor_eventGetBuildDesireTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform_Statics::ESBuildingManagerActor_eventGetBuildDesireTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESBuildingManagerActor_HidePreviewActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESBuildingManagerActor_HidePreviewActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESBuildingManagerActor_HidePreviewActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESBuildingManagerActor, nullptr, "HidePreviewActor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_HidePreviewActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESBuildingManagerActor_HidePreviewActor_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AESBuildingManagerActor_HidePreviewActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESBuildingManagerActor_HidePreviewActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESBuildingManagerActor_Init_Statics
	{
		struct ESBuildingManagerActor_eventInit_Parms
		{
			UESBuildingSystem* InSystem;
			TSubclassOf<AESBuildingActor>  InActorClass;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSystem;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InActorClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AESBuildingManagerActor_Init_Statics::NewProp_InSystem = { "InSystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingManagerActor_eventInit_Parms, InSystem), Z_Construct_UClass_UESBuildingSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AESBuildingManagerActor_Init_Statics::NewProp_InActorClass = { "InActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingManagerActor_eventInit_Parms, InActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AESBuildingActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESBuildingManagerActor_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingManagerActor_Init_Statics::NewProp_InSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingManagerActor_Init_Statics::NewProp_InActorClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESBuildingManagerActor_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESBuildingManagerActor_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESBuildingManagerActor, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_AESBuildingManagerActor_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESBuildingManagerActor_Init_Statics::ESBuildingManagerActor_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESBuildingManagerActor_Init_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_Init_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESBuildingManagerActor_Init_Statics::ESBuildingManagerActor_eventInit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESBuildingManagerActor_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESBuildingManagerActor_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced_Statics
	{
		struct ESBuildingManagerActor_eventOnBuildingPlaced_Parms
		{
			int32 X;
			int32 Y;
			FBuildingData InBuildingData;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBuildingData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingManagerActor_eventOnBuildingPlaced_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingManagerActor_eventOnBuildingPlaced_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced_Statics::NewProp_InBuildingData = { "InBuildingData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingManagerActor_eventOnBuildingPlaced_Parms, InBuildingData), Z_Construct_UScriptStruct_FBuildingData, METADATA_PARAMS(0, nullptr) }; // 669079497
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced_Statics::NewProp_InBuildingData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESBuildingManagerActor, nullptr, "OnBuildingPlaced", nullptr, nullptr, Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced_Statics::ESBuildingManagerActor_eventOnBuildingPlaced_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced_Statics::ESBuildingManagerActor_eventOnBuildingPlaced_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingRemoved_Statics
	{
		struct ESBuildingManagerActor_eventOnBuildingRemoved_Parms
		{
			int32 Index;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingRemoved_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingManagerActor_eventOnBuildingRemoved_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingRemoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingRemoved_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESBuildingManagerActor, nullptr, "OnBuildingRemoved", nullptr, nullptr, Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingRemoved_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingRemoved_Statics::ESBuildingManagerActor_eventOnBuildingRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingRemoved_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingRemoved_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingRemoved_Statics::ESBuildingManagerActor_eventOnBuildingRemoved_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESBuildingManagerActor_SetGetGroundOffset_Statics
	{
		struct ESBuildingManagerActor_eventSetGetGroundOffset_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AESBuildingManagerActor_SetGetGroundOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingManagerActor_eventSetGetGroundOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESBuildingManagerActor_SetGetGroundOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingManagerActor_SetGetGroundOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESBuildingManagerActor_SetGetGroundOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|Building" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESBuildingManagerActor_SetGetGroundOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESBuildingManagerActor, nullptr, "SetGetGroundOffset", nullptr, nullptr, Z_Construct_UFunction_AESBuildingManagerActor_SetGetGroundOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_SetGetGroundOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESBuildingManagerActor_SetGetGroundOffset_Statics::ESBuildingManagerActor_eventSetGetGroundOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_SetGetGroundOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESBuildingManagerActor_SetGetGroundOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_SetGetGroundOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESBuildingManagerActor_SetGetGroundOffset_Statics::ESBuildingManagerActor_eventSetGetGroundOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESBuildingManagerActor_SetGetGroundOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESBuildingManagerActor_SetGetGroundOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor_Statics
	{
		struct ESBuildingManagerActor_eventSetPreviewActor_Parms
		{
			FBuildingData InBuildingData;
			EGridDirection Direction;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBuildingData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor_Statics::NewProp_InBuildingData = { "InBuildingData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingManagerActor_eventSetPreviewActor_Parms, InBuildingData), Z_Construct_UScriptStruct_FBuildingData, METADATA_PARAMS(0, nullptr) }; // 669079497
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingManagerActor_eventSetPreviewActor_Parms, Direction), Z_Construct_UEnum_EveOfTheStorm_EGridDirection, METADATA_PARAMS(0, nullptr) }; // 3444209995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor_Statics::NewProp_InBuildingData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PREVIEW MESH\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PREVIEW MESH" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESBuildingManagerActor, nullptr, "SetPreviewActor", nullptr, nullptr, Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor_Statics::ESBuildingManagerActor_eventSetPreviewActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor_Statics::ESBuildingManagerActor_eventSetPreviewActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics
	{
		struct ESBuildingManagerActor_eventUpdatePreviewActor_Parms
		{
			int32 X;
			int32 Y;
			EGridDirection Direction;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingManagerActor_eventUpdatePreviewActor_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingManagerActor_eventUpdatePreviewActor_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingManagerActor_eventUpdatePreviewActor_Parms, Direction), Z_Construct_UEnum_EveOfTheStorm_EGridDirection, METADATA_PARAMS(0, nullptr) }; // 3444209995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESBuildingManagerActor, nullptr, "UpdatePreviewActor", nullptr, nullptr, Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics::ESBuildingManagerActor_eventUpdatePreviewActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics::ESBuildingManagerActor_eventUpdatePreviewActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActorByWorldLocation_Statics
	{
		struct ESBuildingManagerActor_eventUpdatePreviewActorByWorldLocation_Parms
		{
			FVector Location;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActorByWorldLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActorByWorldLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingManagerActor_eventUpdatePreviewActorByWorldLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActorByWorldLocation_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActorByWorldLocation_Statics::NewProp_Location_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActorByWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActorByWorldLocation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActorByWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActorByWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESBuildingManagerActor, nullptr, "UpdatePreviewActorByWorldLocation", nullptr, nullptr, Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActorByWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActorByWorldLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActorByWorldLocation_Statics::ESBuildingManagerActor_eventUpdatePreviewActorByWorldLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActorByWorldLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActorByWorldLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActorByWorldLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActorByWorldLocation_Statics::ESBuildingManagerActor_eventUpdatePreviewActorByWorldLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActorByWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActorByWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AESBuildingManagerActor);
	UClass* Z_Construct_UClass_AESBuildingManagerActor_NoRegister()
	{
		return AESBuildingManagerActor::StaticClass();
	}
	struct Z_Construct_UClass_AESBuildingManagerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BuildingActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingPreviewActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingPreviewActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BuildingActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilePreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TilePreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBuildingData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewBuildingData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewPos;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviewDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviewDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIsErrorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialIsErrorParamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetBuilding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetBuilding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TileMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TileMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImageIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AESBuildingManagerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AESBuildingManagerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AESBuildingManagerActor_ConfirmPlacement, "ConfirmPlacement" }, // 1036910815
		{ &Z_Construct_UFunction_AESBuildingManagerActor_GetBuildDesireTransform, "GetBuildDesireTransform" }, // 1832629939
		{ &Z_Construct_UFunction_AESBuildingManagerActor_HidePreviewActor, "HidePreviewActor" }, // 2500701859
		{ &Z_Construct_UFunction_AESBuildingManagerActor_Init, "Init" }, // 1076244447
		{ &Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingPlaced, "OnBuildingPlaced" }, // 3389840012
		{ &Z_Construct_UFunction_AESBuildingManagerActor_OnBuildingRemoved, "OnBuildingRemoved" }, // 146840353
		{ &Z_Construct_UFunction_AESBuildingManagerActor_SetGetGroundOffset, "SetGetGroundOffset" }, // 262587858
		{ &Z_Construct_UFunction_AESBuildingManagerActor_SetPreviewActor, "SetPreviewActor" }, // 815343711
		{ &Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActor, "UpdatePreviewActor" }, // 1115426531
		{ &Z_Construct_UFunction_AESBuildingManagerActor_UpdatePreviewActorByWorldLocation, "UpdatePreviewActorByWorldLocation" }, // 2592621383
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Grid/ESBuildingManagerActor.h" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_LocationOrigin_MetaData[] = {
		{ "Category", "ESBuildingManagerActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_LocationOrigin = { "LocationOrigin", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingManagerActor, LocationOrigin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_LocationOrigin_MetaData), Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_LocationOrigin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_RootSceneComponent_MetaData[] = {
		{ "Category", "ESBuildingManagerActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingManagerActor, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_RootSceneComponent_MetaData), Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_RootSceneComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingSystem_MetaData[] = {
		{ "Category", "ESBuildingManagerActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingSystem = { "BuildingSystem", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingManagerActor, BuildingSystem), Z_Construct_UClass_UESBuildingSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingSystem_MetaData), Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingActorClass_MetaData[] = {
		{ "Category", "ESBuildingManagerActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingActorClass = { "BuildingActorClass", nullptr, (EPropertyFlags)0x0024080000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingManagerActor, BuildingActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AESBuildingActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingActorClass_MetaData), Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingActorClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingPreviewActor_MetaData[] = {
		{ "Category", "ESBuildingManagerActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingPreviewActor = { "BuildingPreviewActor", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingManagerActor, BuildingPreviewActor), Z_Construct_UClass_AESBuildingActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingPreviewActor_MetaData), Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingPreviewActor_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingActors_Inner = { "BuildingActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AESBuildingActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingActors_MetaData[] = {
		{ "Category", "ESBuildingManagerActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingActors = { "BuildingActors", nullptr, (EPropertyFlags)0x0020080000002004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingManagerActor, BuildingActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingActors_MetaData), Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingActors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TilePreviewMesh_MetaData[] = {
		{ "Category", "ESBuildingManagerActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TilePreviewMesh = { "TilePreviewMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingManagerActor, TilePreviewMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TilePreviewMesh_MetaData), Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TilePreviewMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_PreviewBuildingData_MetaData[] = {
		{ "Category", "ESBuildingManagerActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_PreviewBuildingData = { "PreviewBuildingData", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingManagerActor, PreviewBuildingData), Z_Construct_UScriptStruct_FBuildingData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_PreviewBuildingData_MetaData), Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_PreviewBuildingData_MetaData) }; // 669079497
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_PreviewPos_MetaData[] = {
		{ "Category", "ESBuildingManagerActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_PreviewPos = { "PreviewPos", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingManagerActor, PreviewPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_PreviewPos_MetaData), Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_PreviewPos_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_PreviewDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_PreviewDirection_MetaData[] = {
		{ "Category", "ESBuildingManagerActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_PreviewDirection = { "PreviewDirection", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingManagerActor, PreviewDirection), Z_Construct_UEnum_EveOfTheStorm_EGridDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_PreviewDirection_MetaData), Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_PreviewDirection_MetaData) }; // 3444209995
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_MaterialIsErrorParamName_MetaData[] = {
		{ "Category", "ESBuildingManagerActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_MaterialIsErrorParamName = { "MaterialIsErrorParamName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingManagerActor, MaterialIsErrorParamName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_MaterialIsErrorParamName_MetaData), Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_MaterialIsErrorParamName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "ESBuildingManagerActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingManagerActor, GridSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_GridSize_MetaData), Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_GridSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TileScale_MetaData[] = {
		{ "Category", "ESBuildingManagerActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TileScale = { "TileScale", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingManagerActor, TileScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TileScale_MetaData), Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TileScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_OffsetZ_MetaData[] = {
		{ "Category", "ESBuildingManagerActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_OffsetZ = { "OffsetZ", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingManagerActor, OffsetZ), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_OffsetZ_MetaData), Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_OffsetZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_OffsetBuilding_MetaData[] = {
		{ "Category", "ESBuildingManagerActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_OffsetBuilding = { "OffsetBuilding", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingManagerActor, OffsetBuilding), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_OffsetBuilding_MetaData), Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_OffsetBuilding_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_GridOffset_MetaData[] = {
		{ "Category", "ESBuildingManagerActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_GridOffset = { "GridOffset", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingManagerActor, GridOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_GridOffset_MetaData), Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_GridOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TileMesh_MetaData[] = {
		{ "Category", "ESBuildingManagerActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TileMesh = { "TileMesh", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingManagerActor, TileMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TileMesh_MetaData), Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TileMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TileMaterial_MetaData[] = {
		{ "Category", "ESBuildingManagerActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TileMaterial = { "TileMaterial", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingManagerActor, TileMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TileMaterial_MetaData), Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TileMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_ImageIndex_MetaData[] = {
		{ "Category", "ESBuildingManagerActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingManagerActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_ImageIndex = { "ImageIndex", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESBuildingManagerActor, ImageIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_ImageIndex_MetaData), Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_ImageIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AESBuildingManagerActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_LocationOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_RootSceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingPreviewActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_BuildingActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TilePreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_PreviewBuildingData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_PreviewPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_PreviewDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_PreviewDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_MaterialIsErrorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TileScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_OffsetZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_OffsetBuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_GridOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TileMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_TileMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESBuildingManagerActor_Statics::NewProp_ImageIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AESBuildingManagerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AESBuildingManagerActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AESBuildingManagerActor_Statics::ClassParams = {
		&AESBuildingManagerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AESBuildingManagerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AESBuildingManagerActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AESBuildingManagerActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AESBuildingManagerActor()
	{
		if (!Z_Registration_Info_UClass_AESBuildingManagerActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AESBuildingManagerActor.OuterSingleton, Z_Construct_UClass_AESBuildingManagerActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AESBuildingManagerActor.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<AESBuildingManagerActor>()
	{
		return AESBuildingManagerActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AESBuildingManagerActor);
	AESBuildingManagerActor::~AESBuildingManagerActor() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AESBuildingManagerActor, AESBuildingManagerActor::StaticClass, TEXT("AESBuildingManagerActor"), &Z_Registration_Info_UClass_AESBuildingManagerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AESBuildingManagerActor), 1577655284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_2794228398(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
