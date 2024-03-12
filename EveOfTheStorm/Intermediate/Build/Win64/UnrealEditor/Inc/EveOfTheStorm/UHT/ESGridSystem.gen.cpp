// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Grid/ESGridSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESGridSystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESGridSystem();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESGridSystem_NoRegister();
	EVEOFTHESTORM_API UEnum* Z_Construct_UEnum_EveOfTheStorm_EGridDirection();
	EVEOFTHESTORM_API UEnum* Z_Construct_UEnum_EveOfTheStorm_EGroundType();
	EVEOFTHESTORM_API UScriptStruct* Z_Construct_UScriptStruct_FGridTile();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridTile;
class UScriptStruct* FGridTile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridTile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridTile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridTile, (UObject*)Z_Construct_UPackage__Script_EveOfTheStorm(), TEXT("GridTile"));
	}
	return Z_Registration_Info_UScriptStruct_GridTile.OuterSingleton;
}
template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<FGridTile>()
{
	return FGridTile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGridTile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shape_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Shape;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridTile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridTile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridTile>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_Shape_Inner = { "Shape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "GridTile" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridTile, Shape), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_Shape_MetaData), Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_Shape_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "GridTile" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridTile, Type), Z_Construct_UEnum_EveOfTheStorm_EGroundType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_Type_MetaData) }; // 3897062157
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_Shape_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_Shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridTile_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridTile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
		nullptr,
		&NewStructOps,
		"GridTile",
		Z_Construct_UScriptStruct_FGridTile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridTile_Statics::PropPointers),
		sizeof(FGridTile),
		alignof(FGridTile),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridTile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridTile_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridTile_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGridTile()
	{
		if (!Z_Registration_Info_UScriptStruct_GridTile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridTile.InnerSingleton, Z_Construct_UScriptStruct_FGridTile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GridTile.InnerSingleton;
	}
	DEFINE_FUNCTION(UESGridSystem::execIsGroundValid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_Shape);
		P_GET_ENUM(EGroundType,Z_Param_InGroundType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGroundValid(Z_Param_X,Z_Param_Y,Z_Param_Out_Shape,EGroundType(Z_Param_InGroundType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESGridSystem::execValidPosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ValidPosition(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESGridSystem::execGetPoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FIntPoint>*)Z_Param__Result=P_THIS->GetPoints(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESGridSystem::execUpdateTile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_STRUCT(FGridTile,Z_Param_Tile);
		P_GET_ENUM(EGridDirection,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTile(Z_Param_X,Z_Param_Y,Z_Param_Tile,EGridDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESGridSystem::execUpdateOneTile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_ENUM(EGroundType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateOneTile(Z_Param_X,Z_Param_Y,EGroundType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESGridSystem::execRemoveOneTile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveOneTile(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESGridSystem::execRemoveTile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_STRUCT(FGridTile,Z_Param_Tile);
		P_GET_ENUM(EGridDirection,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTile(Z_Param_X,Z_Param_Y,Z_Param_Tile,EGridDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESGridSystem::execPlaceTile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_STRUCT(FGridTile,Z_Param_Tile);
		P_GET_ENUM(EGridDirection,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlaceTile(Z_Param_X,Z_Param_Y,Z_Param_Tile,EGridDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESGridSystem::execCanPlaceTile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_STRUCT(FGridTile,Z_Param_Tile);
		P_GET_ENUM(EGridDirection,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPlaceTile(Z_Param_X,Z_Param_Y,Z_Param_Tile,EGridDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESGridSystem::execIsTileNearGround)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_Shape);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTileNearGround(Z_Param_X,Z_Param_Y,Z_Param_Out_Shape);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESGridSystem::execIsPointNearGround)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPointNearGround(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESGridSystem::execHasTile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_STRUCT(FGridTile,Z_Param_Tile);
		P_GET_ENUM(EGridDirection,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTile(Z_Param_X,Z_Param_Y,Z_Param_Tile,EGridDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESGridSystem::execGetTileType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGroundType*)Z_Param__Result=P_THIS->GetTileType(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESGridSystem::execPlaceInitialTile)
	{
		P_GET_TARRAY(FGridTile,Z_Param_Tiles);
		P_GET_ENUM(EGridDirection,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaceInitialTile(Z_Param_Tiles,EGridDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESGridSystem::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize();
		P_NATIVE_END;
	}
	void UESGridSystem::StaticRegisterNativesUESGridSystem()
	{
		UClass* Class = UESGridSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanPlaceTile", &UESGridSystem::execCanPlaceTile },
			{ "GetPoints", &UESGridSystem::execGetPoints },
			{ "GetTileType", &UESGridSystem::execGetTileType },
			{ "HasTile", &UESGridSystem::execHasTile },
			{ "Initialize", &UESGridSystem::execInitialize },
			{ "IsGroundValid", &UESGridSystem::execIsGroundValid },
			{ "IsPointNearGround", &UESGridSystem::execIsPointNearGround },
			{ "IsTileNearGround", &UESGridSystem::execIsTileNearGround },
			{ "PlaceInitialTile", &UESGridSystem::execPlaceInitialTile },
			{ "PlaceTile", &UESGridSystem::execPlaceTile },
			{ "RemoveOneTile", &UESGridSystem::execRemoveOneTile },
			{ "RemoveTile", &UESGridSystem::execRemoveTile },
			{ "UpdateOneTile", &UESGridSystem::execUpdateOneTile },
			{ "UpdateTile", &UESGridSystem::execUpdateTile },
			{ "ValidPosition", &UESGridSystem::execValidPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics
	{
		struct ESGridSystem_eventCanPlaceTile_Parms
		{
			int32 X;
			int32 Y;
			FGridTile Tile;
			EGridDirection Direction;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tile;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventCanPlaceTile_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventCanPlaceTile_Parms, Y), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::NewProp_Tile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventCanPlaceTile_Parms, Tile), Z_Construct_UScriptStruct_FGridTile, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::NewProp_Tile_MetaData), Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::NewProp_Tile_MetaData) }; // 2185704064
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventCanPlaceTile_Parms, Direction), Z_Construct_UEnum_EveOfTheStorm_EGridDirection, METADATA_PARAMS(0, nullptr) }; // 3444209995
	void Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESGridSystem_eventCanPlaceTile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESGridSystem_eventCanPlaceTile_Parms), &Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::NewProp_Tile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGridSystem, nullptr, "CanPlaceTile", nullptr, nullptr, Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::ESGridSystem_eventCanPlaceTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::ESGridSystem_eventCanPlaceTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGridSystem_CanPlaceTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGridSystem_CanPlaceTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESGridSystem_GetPoints_Statics
	{
		struct ESGridSystem_eventGetPoints_Parms
		{
			int32 Count;
			TArray<FIntPoint> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_GetPoints_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventGetPoints_Parms, Count), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESGridSystem_GetPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UESGridSystem_GetPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventGetPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGridSystem_GetPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_GetPoints_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_GetPoints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_GetPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridSystem_GetPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGridSystem_GetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGridSystem, nullptr, "GetPoints", nullptr, nullptr, Z_Construct_UFunction_UESGridSystem_GetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_GetPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGridSystem_GetPoints_Statics::ESGridSystem_eventGetPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_GetPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGridSystem_GetPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_GetPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGridSystem_GetPoints_Statics::ESGridSystem_eventGetPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGridSystem_GetPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGridSystem_GetPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESGridSystem_GetTileType_Statics
	{
		struct ESGridSystem_eventGetTileType_Parms
		{
			int32 X;
			int32 Y;
			EGroundType ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_GetTileType_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventGetTileType_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_GetTileType_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventGetTileType_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESGridSystem_GetTileType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESGridSystem_GetTileType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventGetTileType_Parms, ReturnValue), Z_Construct_UEnum_EveOfTheStorm_EGroundType, METADATA_PARAMS(0, nullptr) }; // 3897062157
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGridSystem_GetTileType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_GetTileType_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_GetTileType_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_GetTileType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_GetTileType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridSystem_GetTileType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGridSystem_GetTileType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGridSystem, nullptr, "GetTileType", nullptr, nullptr, Z_Construct_UFunction_UESGridSystem_GetTileType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_GetTileType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGridSystem_GetTileType_Statics::ESGridSystem_eventGetTileType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_GetTileType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGridSystem_GetTileType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_GetTileType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGridSystem_GetTileType_Statics::ESGridSystem_eventGetTileType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGridSystem_GetTileType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGridSystem_GetTileType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESGridSystem_HasTile_Statics
	{
		struct ESGridSystem_eventHasTile_Parms
		{
			int32 X;
			int32 Y;
			FGridTile Tile;
			EGridDirection Direction;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tile;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_HasTile_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventHasTile_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_HasTile_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventHasTile_Parms, Y), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridSystem_HasTile_Statics::NewProp_Tile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESGridSystem_HasTile_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventHasTile_Parms, Tile), Z_Construct_UScriptStruct_FGridTile, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_HasTile_Statics::NewProp_Tile_MetaData), Z_Construct_UFunction_UESGridSystem_HasTile_Statics::NewProp_Tile_MetaData) }; // 2185704064
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESGridSystem_HasTile_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESGridSystem_HasTile_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventHasTile_Parms, Direction), Z_Construct_UEnum_EveOfTheStorm_EGridDirection, METADATA_PARAMS(0, nullptr) }; // 3444209995
	void Z_Construct_UFunction_UESGridSystem_HasTile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESGridSystem_eventHasTile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESGridSystem_HasTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESGridSystem_eventHasTile_Parms), &Z_Construct_UFunction_UESGridSystem_HasTile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGridSystem_HasTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_HasTile_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_HasTile_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_HasTile_Statics::NewProp_Tile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_HasTile_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_HasTile_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_HasTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridSystem_HasTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGridSystem_HasTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGridSystem, nullptr, "HasTile", nullptr, nullptr, Z_Construct_UFunction_UESGridSystem_HasTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_HasTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGridSystem_HasTile_Statics::ESGridSystem_eventHasTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_HasTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGridSystem_HasTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_HasTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGridSystem_HasTile_Statics::ESGridSystem_eventHasTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGridSystem_HasTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGridSystem_HasTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESGridSystem_Initialize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridSystem_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGridSystem_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGridSystem, nullptr, "Initialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGridSystem_Initialize_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UESGridSystem_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGridSystem_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics
	{
		struct ESGridSystem_eventIsGroundValid_Parms
		{
			int32 X;
			int32 Y;
			TArray<FIntPoint> Shape;
			EGroundType InGroundType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shape_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Shape;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InGroundType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InGroundType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventIsGroundValid_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventIsGroundValid_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::NewProp_Shape_Inner = { "Shape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::NewProp_Shape_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventIsGroundValid_Parms, Shape), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::NewProp_Shape_MetaData), Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::NewProp_Shape_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::NewProp_InGroundType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::NewProp_InGroundType = { "InGroundType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventIsGroundValid_Parms, InGroundType), Z_Construct_UEnum_EveOfTheStorm_EGroundType, METADATA_PARAMS(0, nullptr) }; // 3897062157
	void Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESGridSystem_eventIsGroundValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESGridSystem_eventIsGroundValid_Parms), &Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::NewProp_Shape_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::NewProp_Shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::NewProp_InGroundType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::NewProp_InGroundType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|Building" },
		{ "CPP_Default_InGroundType", "None" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGridSystem, nullptr, "IsGroundValid", nullptr, nullptr, Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::ESGridSystem_eventIsGroundValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::ESGridSystem_eventIsGroundValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGridSystem_IsGroundValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGridSystem_IsGroundValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics
	{
		struct ESGridSystem_eventIsPointNearGround_Parms
		{
			int32 X;
			int32 Y;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventIsPointNearGround_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventIsPointNearGround_Parms, Y), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESGridSystem_eventIsPointNearGround_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESGridSystem_eventIsPointNearGround_Parms), &Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGridSystem, nullptr, "IsPointNearGround", nullptr, nullptr, Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics::ESGridSystem_eventIsPointNearGround_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics::ESGridSystem_eventIsPointNearGround_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGridSystem_IsPointNearGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGridSystem_IsPointNearGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics
	{
		struct ESGridSystem_eventIsTileNearGround_Parms
		{
			int32 X;
			int32 Y;
			TArray<FIntPoint> Shape;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shape_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Shape;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventIsTileNearGround_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventIsTileNearGround_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::NewProp_Shape_Inner = { "Shape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::NewProp_Shape_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventIsTileNearGround_Parms, Shape), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::NewProp_Shape_MetaData), Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::NewProp_Shape_MetaData) };
	void Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESGridSystem_eventIsTileNearGround_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESGridSystem_eventIsTileNearGround_Parms), &Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::NewProp_Shape_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::NewProp_Shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGridSystem, nullptr, "IsTileNearGround", nullptr, nullptr, Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::ESGridSystem_eventIsTileNearGround_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::ESGridSystem_eventIsTileNearGround_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGridSystem_IsTileNearGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGridSystem_IsTileNearGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics
	{
		struct ESGridSystem_eventPlaceInitialTile_Parms
		{
			TArray<FGridTile> Tiles;
			EGridDirection Direction;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tiles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tiles;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridTile, METADATA_PARAMS(0, nullptr) }; // 2185704064
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventPlaceInitialTile_Parms, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2185704064
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventPlaceInitialTile_Parms, Direction), Z_Construct_UEnum_EveOfTheStorm_EGridDirection, METADATA_PARAMS(0, nullptr) }; // 3444209995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics::NewProp_Tiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics::NewProp_Tiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGridSystem, nullptr, "PlaceInitialTile", nullptr, nullptr, Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics::ESGridSystem_eventPlaceInitialTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics::ESGridSystem_eventPlaceInitialTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGridSystem_PlaceInitialTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGridSystem_PlaceInitialTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics
	{
		struct ESGridSystem_eventPlaceTile_Parms
		{
			int32 X;
			int32 Y;
			FGridTile Tile;
			EGridDirection Direction;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tile;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventPlaceTile_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventPlaceTile_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventPlaceTile_Parms, Tile), Z_Construct_UScriptStruct_FGridTile, METADATA_PARAMS(0, nullptr) }; // 2185704064
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventPlaceTile_Parms, Direction), Z_Construct_UEnum_EveOfTheStorm_EGridDirection, METADATA_PARAMS(0, nullptr) }; // 3444209995
	void Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESGridSystem_eventPlaceTile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESGridSystem_eventPlaceTile_Parms), &Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::NewProp_Tile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGridSystem, nullptr, "PlaceTile", nullptr, nullptr, Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::ESGridSystem_eventPlaceTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::ESGridSystem_eventPlaceTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGridSystem_PlaceTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGridSystem_PlaceTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESGridSystem_RemoveOneTile_Statics
	{
		struct ESGridSystem_eventRemoveOneTile_Parms
		{
			int32 X;
			int32 Y;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_RemoveOneTile_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventRemoveOneTile_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_RemoveOneTile_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventRemoveOneTile_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGridSystem_RemoveOneTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_RemoveOneTile_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_RemoveOneTile_Statics::NewProp_Y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridSystem_RemoveOneTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGridSystem_RemoveOneTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGridSystem, nullptr, "RemoveOneTile", nullptr, nullptr, Z_Construct_UFunction_UESGridSystem_RemoveOneTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_RemoveOneTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGridSystem_RemoveOneTile_Statics::ESGridSystem_eventRemoveOneTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_RemoveOneTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGridSystem_RemoveOneTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_RemoveOneTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGridSystem_RemoveOneTile_Statics::ESGridSystem_eventRemoveOneTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGridSystem_RemoveOneTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGridSystem_RemoveOneTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics
	{
		struct ESGridSystem_eventRemoveTile_Parms
		{
			int32 X;
			int32 Y;
			FGridTile Tile;
			EGridDirection Direction;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tile;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventRemoveTile_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventRemoveTile_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventRemoveTile_Parms, Tile), Z_Construct_UScriptStruct_FGridTile, METADATA_PARAMS(0, nullptr) }; // 2185704064
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventRemoveTile_Parms, Direction), Z_Construct_UEnum_EveOfTheStorm_EGridDirection, METADATA_PARAMS(0, nullptr) }; // 3444209995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::NewProp_Tile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGridSystem, nullptr, "RemoveTile", nullptr, nullptr, Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::ESGridSystem_eventRemoveTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::ESGridSystem_eventRemoveTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGridSystem_RemoveTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGridSystem_RemoveTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics
	{
		struct ESGridSystem_eventUpdateOneTile_Parms
		{
			int32 X;
			int32 Y;
			EGroundType Type;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventUpdateOneTile_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventUpdateOneTile_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventUpdateOneTile_Parms, Type), Z_Construct_UEnum_EveOfTheStorm_EGroundType, METADATA_PARAMS(0, nullptr) }; // 3897062157
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGridSystem, nullptr, "UpdateOneTile", nullptr, nullptr, Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics::ESGridSystem_eventUpdateOneTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics::ESGridSystem_eventUpdateOneTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGridSystem_UpdateOneTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGridSystem_UpdateOneTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics
	{
		struct ESGridSystem_eventUpdateTile_Parms
		{
			int32 X;
			int32 Y;
			FGridTile Tile;
			EGridDirection Direction;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tile;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventUpdateTile_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventUpdateTile_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventUpdateTile_Parms, Tile), Z_Construct_UScriptStruct_FGridTile, METADATA_PARAMS(0, nullptr) }; // 2185704064
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventUpdateTile_Parms, Direction), Z_Construct_UEnum_EveOfTheStorm_EGridDirection, METADATA_PARAMS(0, nullptr) }; // 3444209995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::NewProp_Tile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGridSystem, nullptr, "UpdateTile", nullptr, nullptr, Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::ESGridSystem_eventUpdateTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::ESGridSystem_eventUpdateTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGridSystem_UpdateTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGridSystem_UpdateTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics
	{
		struct ESGridSystem_eventValidPosition_Parms
		{
			int32 X;
			int32 Y;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventValidPosition_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridSystem_eventValidPosition_Parms, Y), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESGridSystem_eventValidPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESGridSystem_eventValidPosition_Parms), &Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGridSystem, nullptr, "ValidPosition", nullptr, nullptr, Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics::ESGridSystem_eventValidPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics::ESGridSystem_eventValidPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGridSystem_ValidPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGridSystem_ValidPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UESGridSystem);
	UClass* Z_Construct_UClass_UESGridSystem_NoRegister()
	{
		return UESGridSystem::StaticClass();
	}
	struct Z_Construct_UClass_UESGridSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridSizeY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UESGridSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESGridSystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UESGridSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UESGridSystem_CanPlaceTile, "CanPlaceTile" }, // 851719983
		{ &Z_Construct_UFunction_UESGridSystem_GetPoints, "GetPoints" }, // 1338446583
		{ &Z_Construct_UFunction_UESGridSystem_GetTileType, "GetTileType" }, // 3455750719
		{ &Z_Construct_UFunction_UESGridSystem_HasTile, "HasTile" }, // 466193845
		{ &Z_Construct_UFunction_UESGridSystem_Initialize, "Initialize" }, // 938142578
		{ &Z_Construct_UFunction_UESGridSystem_IsGroundValid, "IsGroundValid" }, // 2487195055
		{ &Z_Construct_UFunction_UESGridSystem_IsPointNearGround, "IsPointNearGround" }, // 1645869540
		{ &Z_Construct_UFunction_UESGridSystem_IsTileNearGround, "IsTileNearGround" }, // 2518921873
		{ &Z_Construct_UFunction_UESGridSystem_PlaceInitialTile, "PlaceInitialTile" }, // 1038588397
		{ &Z_Construct_UFunction_UESGridSystem_PlaceTile, "PlaceTile" }, // 3281828530
		{ &Z_Construct_UFunction_UESGridSystem_RemoveOneTile, "RemoveOneTile" }, // 3569994115
		{ &Z_Construct_UFunction_UESGridSystem_RemoveTile, "RemoveTile" }, // 3122913806
		{ &Z_Construct_UFunction_UESGridSystem_UpdateOneTile, "UpdateOneTile" }, // 2409184670
		{ &Z_Construct_UFunction_UESGridSystem_UpdateTile, "UpdateTile" }, // 1550333872
		{ &Z_Construct_UFunction_UESGridSystem_ValidPosition, "ValidPosition" }, // 933789397
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESGridSystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESGridSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Grid/ESGridSystem.h" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESGridSystem_Statics::NewProp_GridSizeX_MetaData[] = {
		{ "Category", "ESGridSystem" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UESGridSystem_Statics::NewProp_GridSizeX = { "GridSizeX", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESGridSystem, GridSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESGridSystem_Statics::NewProp_GridSizeX_MetaData), Z_Construct_UClass_UESGridSystem_Statics::NewProp_GridSizeX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESGridSystem_Statics::NewProp_GridSizeY_MetaData[] = {
		{ "Category", "ESGridSystem" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridSystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UESGridSystem_Statics::NewProp_GridSizeY = { "GridSizeY", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESGridSystem, GridSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESGridSystem_Statics::NewProp_GridSizeY_MetaData), Z_Construct_UClass_UESGridSystem_Statics::NewProp_GridSizeY_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UESGridSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESGridSystem_Statics::NewProp_GridSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESGridSystem_Statics::NewProp_GridSizeY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UESGridSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UESGridSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UESGridSystem_Statics::ClassParams = {
		&UESGridSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UESGridSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UESGridSystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESGridSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UESGridSystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESGridSystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UESGridSystem()
	{
		if (!Z_Registration_Info_UClass_UESGridSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UESGridSystem.OuterSingleton, Z_Construct_UClass_UESGridSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UESGridSystem.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<UESGridSystem>()
	{
		return UESGridSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UESGridSystem);
	UESGridSystem::~UESGridSystem() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_Statics::ScriptStructInfo[] = {
		{ FGridTile::StaticStruct, Z_Construct_UScriptStruct_FGridTile_Statics::NewStructOps, TEXT("GridTile"), &Z_Registration_Info_UScriptStruct_GridTile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridTile), 2185704064U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UESGridSystem, UESGridSystem::StaticClass, TEXT("UESGridSystem"), &Z_Registration_Info_UClass_UESGridSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UESGridSystem), 3639660939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_1975131091(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
