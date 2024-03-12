// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Game/ESDefaultGameMode.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
#include "EveOfTheStorm/Public/Core/Grid/ESGridSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESDefaultGameMode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESBuildingActor_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESBuildingManagerActor_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESDefaultGameMode();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESDefaultGameMode_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESGridActor_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESBuildingSystem_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESGridSystem_NoRegister();
	EVEOFTHESTORM_API UFunction* Z_Construct_UDelegateFunction_EveOfTheStorm_GameTurnTriggerEvent__DelegateSignature();
	EVEOFTHESTORM_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultBuilding();
	EVEOFTHESTORM_API UScriptStruct* Z_Construct_UScriptStruct_FGridTile();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EveOfTheStorm_GameTurnTriggerEvent__DelegateSignature_Statics
	{
		struct _Script_EveOfTheStorm_eventGameTurnTriggerEvent_Parms
		{
			int32 CurrentTurn;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentTurn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_EveOfTheStorm_GameTurnTriggerEvent__DelegateSignature_Statics::NewProp_CurrentTurn = { "CurrentTurn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EveOfTheStorm_eventGameTurnTriggerEvent_Parms, CurrentTurn), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EveOfTheStorm_GameTurnTriggerEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EveOfTheStorm_GameTurnTriggerEvent__DelegateSignature_Statics::NewProp_CurrentTurn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EveOfTheStorm_GameTurnTriggerEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EveOfTheStorm_GameTurnTriggerEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EveOfTheStorm, nullptr, "GameTurnTriggerEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EveOfTheStorm_GameTurnTriggerEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EveOfTheStorm_GameTurnTriggerEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EveOfTheStorm_GameTurnTriggerEvent__DelegateSignature_Statics::_Script_EveOfTheStorm_eventGameTurnTriggerEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EveOfTheStorm_GameTurnTriggerEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EveOfTheStorm_GameTurnTriggerEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EveOfTheStorm_GameTurnTriggerEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_EveOfTheStorm_GameTurnTriggerEvent__DelegateSignature_Statics::_Script_EveOfTheStorm_eventGameTurnTriggerEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_EveOfTheStorm_GameTurnTriggerEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EveOfTheStorm_GameTurnTriggerEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGameTurnTriggerEvent_DelegateWrapper(const FMulticastScriptDelegate& GameTurnTriggerEvent, int32 CurrentTurn)
{
	struct _Script_EveOfTheStorm_eventGameTurnTriggerEvent_Parms
	{
		int32 CurrentTurn;
	};
	_Script_EveOfTheStorm_eventGameTurnTriggerEvent_Parms Parms;
	Parms.CurrentTurn=CurrentTurn;
	GameTurnTriggerEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DefaultBuilding;
class UScriptStruct* FDefaultBuilding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultBuilding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DefaultBuilding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDefaultBuilding, (UObject*)Z_Construct_UPackage__Script_EveOfTheStorm(), TEXT("DefaultBuilding"));
	}
	return Z_Registration_Info_UScriptStruct_DefaultBuilding.OuterSingleton;
}
template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<FDefaultBuilding>()
{
	return FDefaultBuilding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDefaultBuilding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDefaultBuilding_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDefaultBuilding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDefaultBuilding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDefaultBuilding_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "DefaultBuilding" },
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDefaultBuilding_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultBuilding, Data), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultBuilding_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FDefaultBuilding_Statics::NewProp_Data_MetaData) }; // 1575649708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDefaultBuilding_Statics::NewProp_Pos_MetaData[] = {
		{ "Category", "DefaultBuilding" },
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDefaultBuilding_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultBuilding, Pos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultBuilding_Statics::NewProp_Pos_MetaData), Z_Construct_UScriptStruct_FDefaultBuilding_Statics::NewProp_Pos_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDefaultBuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultBuilding_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultBuilding_Statics::NewProp_Pos,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDefaultBuilding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
		nullptr,
		&NewStructOps,
		"DefaultBuilding",
		Z_Construct_UScriptStruct_FDefaultBuilding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultBuilding_Statics::PropPointers),
		sizeof(FDefaultBuilding),
		alignof(FDefaultBuilding),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultBuilding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDefaultBuilding_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultBuilding_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDefaultBuilding()
	{
		if (!Z_Registration_Info_UScriptStruct_DefaultBuilding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DefaultBuilding.InnerSingleton, Z_Construct_UScriptStruct_FDefaultBuilding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DefaultBuilding.InnerSingleton;
	}
	DEFINE_FUNCTION(AESDefaultGameMode::execSetPauseTime)
	{
		P_GET_UBOOL(Z_Param_InPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPauseTime(Z_Param_InPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESDefaultGameMode::execSkipTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SkipTurn();
		P_NATIVE_END;
	}
	void AESDefaultGameMode::StaticRegisterNativesAESDefaultGameMode()
	{
		UClass* Class = AESDefaultGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPauseTime", &AESDefaultGameMode::execSetPauseTime },
			{ "SkipTurn", &AESDefaultGameMode::execSkipTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AESDefaultGameMode_SetPauseTime_Statics
	{
		struct ESDefaultGameMode_eventSetPauseTime_Parms
		{
			bool InPaused;
		};
		static void NewProp_InPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InPaused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AESDefaultGameMode_SetPauseTime_Statics::NewProp_InPaused_SetBit(void* Obj)
	{
		((ESDefaultGameMode_eventSetPauseTime_Parms*)Obj)->InPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AESDefaultGameMode_SetPauseTime_Statics::NewProp_InPaused = { "InPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESDefaultGameMode_eventSetPauseTime_Parms), &Z_Construct_UFunction_AESDefaultGameMode_SetPauseTime_Statics::NewProp_InPaused_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESDefaultGameMode_SetPauseTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESDefaultGameMode_SetPauseTime_Statics::NewProp_InPaused,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESDefaultGameMode_SetPauseTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESDefaultGameMode_SetPauseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESDefaultGameMode, nullptr, "SetPauseTime", nullptr, nullptr, Z_Construct_UFunction_AESDefaultGameMode_SetPauseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESDefaultGameMode_SetPauseTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESDefaultGameMode_SetPauseTime_Statics::ESDefaultGameMode_eventSetPauseTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESDefaultGameMode_SetPauseTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESDefaultGameMode_SetPauseTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESDefaultGameMode_SetPauseTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESDefaultGameMode_SetPauseTime_Statics::ESDefaultGameMode_eventSetPauseTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESDefaultGameMode_SetPauseTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESDefaultGameMode_SetPauseTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESDefaultGameMode_SkipTurn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESDefaultGameMode_SkipTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESDefaultGameMode_SkipTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESDefaultGameMode, nullptr, "SkipTurn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESDefaultGameMode_SkipTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESDefaultGameMode_SkipTurn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AESDefaultGameMode_SkipTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESDefaultGameMode_SkipTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AESDefaultGameMode);
	UClass* Z_Construct_UClass_AESDefaultGameMode_NoRegister()
	{
		return AESDefaultGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AESDefaultGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GridActorClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultGridTiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGridTiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultGridTiles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBuildings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBuildings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultBuildings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingActorManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingActorManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BuildingActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingActorManagerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BuildingActorManagerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMonth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMonth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTurnTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTurnTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMonth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMonth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameTurnEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameTurnEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPaused_MetaData[];
#endif
		static void NewProp_bIsPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AESDefaultGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AESDefaultGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AESDefaultGameMode_SetPauseTime, "SetPauseTime" }, // 4009679158
		{ &Z_Construct_UFunction_AESDefaultGameMode_SkipTurn, "SkipTurn" }, // 3815548931
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESDefaultGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/Game/ESDefaultGameMode.h" },
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GridSystem_MetaData[] = {
		{ "Category", "ES|Grid System" },
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GridSystem = { "GridSystem", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESDefaultGameMode, GridSystem), Z_Construct_UClass_UESGridSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GridSystem_MetaData), Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GridSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GridActor_MetaData[] = {
		{ "Category", "ES|Grid System" },
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GridActor = { "GridActor", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESDefaultGameMode, GridActor), Z_Construct_UClass_AESGridActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GridActor_MetaData), Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GridActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GridActorClass_MetaData[] = {
		{ "Category", "ES|Grid System" },
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GridActorClass = { "GridActorClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESDefaultGameMode, GridActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AESGridActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GridActorClass_MetaData), Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GridActorClass_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_DefaultGridTiles_Inner = { "DefaultGridTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridTile, METADATA_PARAMS(0, nullptr) }; // 2185704064
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_DefaultGridTiles_MetaData[] = {
		{ "Category", "ES|Grid System" },
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_DefaultGridTiles = { "DefaultGridTiles", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESDefaultGameMode, DefaultGridTiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_DefaultGridTiles_MetaData), Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_DefaultGridTiles_MetaData) }; // 2185704064
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_DefaultBuildings_Inner = { "DefaultBuildings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDefaultBuilding, METADATA_PARAMS(0, nullptr) }; // 3612232575
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_DefaultBuildings_MetaData[] = {
		{ "Category", "ES|Grid System" },
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_DefaultBuildings = { "DefaultBuildings", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESDefaultGameMode, DefaultBuildings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_DefaultBuildings_MetaData), Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_DefaultBuildings_MetaData) }; // 3612232575
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingSystem_MetaData[] = {
		{ "Category", "ES|Grid System" },
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingSystem = { "BuildingSystem", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESDefaultGameMode, BuildingSystem), Z_Construct_UClass_UESBuildingSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingSystem_MetaData), Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingActorManager_MetaData[] = {
		{ "Category", "ES|Grid System" },
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingActorManager = { "BuildingActorManager", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESDefaultGameMode, BuildingActorManager), Z_Construct_UClass_AESBuildingManagerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingActorManager_MetaData), Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingActorManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingActorClass_MetaData[] = {
		{ "Category", "ES|Grid System" },
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingActorClass = { "BuildingActorClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESDefaultGameMode, BuildingActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AESBuildingActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingActorClass_MetaData), Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingActorClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingActorManagerClass_MetaData[] = {
		{ "Category", "ES|Grid System" },
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingActorManagerClass = { "BuildingActorManagerClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESDefaultGameMode, BuildingActorManagerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AESBuildingManagerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingActorManagerClass_MetaData), Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingActorManagerClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_MaxMonth_MetaData[] = {
		{ "Category", "ES|Grid System" },
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_MaxMonth = { "MaxMonth", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESDefaultGameMode, MaxMonth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_MaxMonth_MetaData), Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_MaxMonth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_MaxTurnTime_MetaData[] = {
		{ "Category", "ES|Grid System" },
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_MaxTurnTime = { "MaxTurnTime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESDefaultGameMode, MaxTurnTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_MaxTurnTime_MetaData), Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_MaxTurnTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_CurrentTime_MetaData[] = {
		{ "Category", "ESDefaultGameMode" },
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESDefaultGameMode, CurrentTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_CurrentTime_MetaData), Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_CurrentTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_CurrentMonth_MetaData[] = {
		{ "Category", "ESDefaultGameMode" },
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_CurrentMonth = { "CurrentMonth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESDefaultGameMode, CurrentMonth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_CurrentMonth_MetaData), Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_CurrentMonth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GameTurnEvent_MetaData[] = {
		{ "Category", "ES|Grid System" },
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GameTurnEvent = { "GameTurnEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESDefaultGameMode, GameTurnEvent), Z_Construct_UDelegateFunction_EveOfTheStorm_GameTurnTriggerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GameTurnEvent_MetaData), Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GameTurnEvent_MetaData) }; // 848874092
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_bIsPaused_MetaData[] = {
		{ "Category", "ESDefaultGameMode" },
		{ "ModuleRelativePath", "Public/Core/Game/ESDefaultGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_bIsPaused_SetBit(void* Obj)
	{
		((AESDefaultGameMode*)Obj)->bIsPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AESDefaultGameMode), &Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_bIsPaused_MetaData), Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_bIsPaused_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AESDefaultGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GridSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GridActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GridActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_DefaultGridTiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_DefaultGridTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_DefaultBuildings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_DefaultBuildings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingActorManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_BuildingActorManagerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_MaxMonth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_MaxTurnTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_CurrentTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_CurrentMonth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_GameTurnEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESDefaultGameMode_Statics::NewProp_bIsPaused,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AESDefaultGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AESDefaultGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AESDefaultGameMode_Statics::ClassParams = {
		&AESDefaultGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AESDefaultGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AESDefaultGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AESDefaultGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AESDefaultGameMode()
	{
		if (!Z_Registration_Info_UClass_AESDefaultGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AESDefaultGameMode.OuterSingleton, Z_Construct_UClass_AESDefaultGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AESDefaultGameMode.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<AESDefaultGameMode>()
	{
		return AESDefaultGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AESDefaultGameMode);
	AESDefaultGameMode::~AESDefaultGameMode() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_Statics::ScriptStructInfo[] = {
		{ FDefaultBuilding::StaticStruct, Z_Construct_UScriptStruct_FDefaultBuilding_Statics::NewStructOps, TEXT("DefaultBuilding"), &Z_Registration_Info_UScriptStruct_DefaultBuilding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDefaultBuilding), 3612232575U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AESDefaultGameMode, AESDefaultGameMode::StaticClass, TEXT("AESDefaultGameMode"), &Z_Registration_Info_UClass_AESDefaultGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AESDefaultGameMode), 3932600692U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_1661759505(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
