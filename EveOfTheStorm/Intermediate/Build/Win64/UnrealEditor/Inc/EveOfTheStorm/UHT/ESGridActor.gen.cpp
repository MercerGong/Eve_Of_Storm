// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Grid/ESGridActor.h"
#include "EveOfTheStorm/Public/Core/Grid/ESGridSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESGridActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESGridActor();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESGridActor_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESGridSystem_NoRegister();
	EVEOFTHESTORM_API UEnum* Z_Construct_UEnum_EveOfTheStorm_EGridDirection();
	EVEOFTHESTORM_API UEnum* Z_Construct_UEnum_EveOfTheStorm_EGroundType();
	EVEOFTHESTORM_API UScriptStruct* Z_Construct_UScriptStruct_FBlockIndex();
	EVEOFTHESTORM_API UScriptStruct* Z_Construct_UScriptStruct_FBlockMaterial();
	EVEOFTHESTORM_API UScriptStruct* Z_Construct_UScriptStruct_FGridTile();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlockIndex;
class UScriptStruct* FBlockIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlockIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlockIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlockIndex, (UObject*)Z_Construct_UPackage__Script_EveOfTheStorm(), TEXT("BlockIndex"));
	}
	return Z_Registration_Info_UScriptStruct_BlockIndex.OuterSingleton;
}
template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<FBlockIndex>()
{
	return FBlockIndex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlockIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockIndex_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlockIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlockIndex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockIndex_Statics::NewProp_Point_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlockIndex_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlockIndex, Point), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockIndex_Statics::NewProp_Point_MetaData), Z_Construct_UScriptStruct_FBlockIndex_Statics::NewProp_Point_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlockIndex_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockIndex_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBlockIndex_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlockIndex, Type), Z_Construct_UEnum_EveOfTheStorm_EGroundType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockIndex_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FBlockIndex_Statics::NewProp_Type_MetaData) }; // 3897062157
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlockIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockIndex_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockIndex_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockIndex_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlockIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
		nullptr,
		&NewStructOps,
		"BlockIndex",
		Z_Construct_UScriptStruct_FBlockIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockIndex_Statics::PropPointers),
		sizeof(FBlockIndex),
		alignof(FBlockIndex),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockIndex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlockIndex_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockIndex_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBlockIndex()
	{
		if (!Z_Registration_Info_UScriptStruct_BlockIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlockIndex.InnerSingleton, Z_Construct_UScriptStruct_FBlockIndex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlockIndex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlockMaterial;
class UScriptStruct* FBlockMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlockMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlockMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlockMaterial, (UObject*)Z_Construct_UPackage__Script_EveOfTheStorm(), TEXT("BlockMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_BlockMaterial.OuterSingleton;
}
template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<FBlockMaterial>()
{
	return FBlockMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlockMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlockMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlockMaterial>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlockMaterial_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockMaterial_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "BlockMaterial" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBlockMaterial_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlockMaterial, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockMaterial_Statics::NewProp_Materials_MetaData), Z_Construct_UScriptStruct_FBlockMaterial_Statics::NewProp_Materials_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlockMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockMaterial_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockMaterial_Statics::NewProp_Materials,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlockMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
		nullptr,
		&NewStructOps,
		"BlockMaterial",
		Z_Construct_UScriptStruct_FBlockMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockMaterial_Statics::PropPointers),
		sizeof(FBlockMaterial),
		alignof(FBlockMaterial),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockMaterial_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlockMaterial_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockMaterial_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBlockMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_BlockMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlockMaterial.InnerSingleton, Z_Construct_UScriptStruct_FBlockMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlockMaterial.InnerSingleton;
	}
	DEFINE_FUNCTION(AESGridActor::execGetTileTransform)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTileTransform(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESGridActor::execGetCenterLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCenterLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESGridActor::execConfirmPlacement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConfirmPlacement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESGridActor::execHidePreviewMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HidePreviewMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESGridActor::execUpdatePreviewMeshByWorldLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePreviewMeshByWorldLocation(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESGridActor::execUpdatePreviewMesh)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePreviewMesh(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AESGridActor::execSetPreviewMesh)
	{
		P_GET_STRUCT(FGridTile,Z_Param_Tile);
		P_GET_ENUM(EGridDirection,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreviewMesh(Z_Param_Tile,EGridDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	struct ESGridActor_eventOnTileDestroyed_Parms
	{
		EGroundType GroundType;
		int32 X;
		int32 Y;
	};
	struct ESGridActor_eventOnTileSpawned_Parms
	{
		EGroundType GroundType;
		int32 Index;
	};
	static FName NAME_AESGridActor_OnTileDestroyed = FName(TEXT("OnTileDestroyed"));
	void AESGridActor::OnTileDestroyed(EGroundType GroundType, int32 X, int32 Y)
	{
		ESGridActor_eventOnTileDestroyed_Parms Parms;
		Parms.GroundType=GroundType;
		Parms.X=X;
		Parms.Y=Y;
		ProcessEvent(FindFunctionChecked(NAME_AESGridActor_OnTileDestroyed),&Parms);
	}
	static FName NAME_AESGridActor_OnTileSpawned = FName(TEXT("OnTileSpawned"));
	void AESGridActor::OnTileSpawned(EGroundType GroundType, int32 Index)
	{
		ESGridActor_eventOnTileSpawned_Parms Parms;
		Parms.GroundType=GroundType;
		Parms.Index=Index;
		ProcessEvent(FindFunctionChecked(NAME_AESGridActor_OnTileSpawned),&Parms);
	}
	void AESGridActor::StaticRegisterNativesAESGridActor()
	{
		UClass* Class = AESGridActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConfirmPlacement", &AESGridActor::execConfirmPlacement },
			{ "GetCenterLocation", &AESGridActor::execGetCenterLocation },
			{ "GetTileTransform", &AESGridActor::execGetTileTransform },
			{ "HidePreviewMesh", &AESGridActor::execHidePreviewMesh },
			{ "SetPreviewMesh", &AESGridActor::execSetPreviewMesh },
			{ "UpdatePreviewMesh", &AESGridActor::execUpdatePreviewMesh },
			{ "UpdatePreviewMeshByWorldLocation", &AESGridActor::execUpdatePreviewMeshByWorldLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AESGridActor_ConfirmPlacement_Statics
	{
		struct ESGridActor_eventConfirmPlacement_Parms
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
	void Z_Construct_UFunction_AESGridActor_ConfirmPlacement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESGridActor_eventConfirmPlacement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AESGridActor_ConfirmPlacement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESGridActor_eventConfirmPlacement_Parms), &Z_Construct_UFunction_AESGridActor_ConfirmPlacement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESGridActor_ConfirmPlacement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESGridActor_ConfirmPlacement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESGridActor_ConfirmPlacement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESGridActor_ConfirmPlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESGridActor, nullptr, "ConfirmPlacement", nullptr, nullptr, Z_Construct_UFunction_AESGridActor_ConfirmPlacement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_ConfirmPlacement_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESGridActor_ConfirmPlacement_Statics::ESGridActor_eventConfirmPlacement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_ConfirmPlacement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESGridActor_ConfirmPlacement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_ConfirmPlacement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESGridActor_ConfirmPlacement_Statics::ESGridActor_eventConfirmPlacement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESGridActor_ConfirmPlacement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESGridActor_ConfirmPlacement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESGridActor_GetCenterLocation_Statics
	{
		struct ESGridActor_eventGetCenterLocation_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AESGridActor_GetCenterLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridActor_eventGetCenterLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESGridActor_GetCenterLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESGridActor_GetCenterLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESGridActor_GetCenterLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESGridActor_GetCenterLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESGridActor, nullptr, "GetCenterLocation", nullptr, nullptr, Z_Construct_UFunction_AESGridActor_GetCenterLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_GetCenterLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESGridActor_GetCenterLocation_Statics::ESGridActor_eventGetCenterLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_GetCenterLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESGridActor_GetCenterLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_GetCenterLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESGridActor_GetCenterLocation_Statics::ESGridActor_eventGetCenterLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESGridActor_GetCenterLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESGridActor_GetCenterLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESGridActor_GetTileTransform_Statics
	{
		struct ESGridActor_eventGetTileTransform_Parms
		{
			int32 X;
			int32 Y;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AESGridActor_GetTileTransform_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridActor_eventGetTileTransform_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AESGridActor_GetTileTransform_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridActor_eventGetTileTransform_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AESGridActor_GetTileTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridActor_eventGetTileTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESGridActor_GetTileTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESGridActor_GetTileTransform_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESGridActor_GetTileTransform_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESGridActor_GetTileTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESGridActor_GetTileTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESGridActor_GetTileTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESGridActor, nullptr, "GetTileTransform", nullptr, nullptr, Z_Construct_UFunction_AESGridActor_GetTileTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_GetTileTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESGridActor_GetTileTransform_Statics::ESGridActor_eventGetTileTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_GetTileTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESGridActor_GetTileTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_GetTileTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESGridActor_GetTileTransform_Statics::ESGridActor_eventGetTileTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESGridActor_GetTileTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESGridActor_GetTileTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESGridActor_HidePreviewMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESGridActor_HidePreviewMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESGridActor_HidePreviewMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESGridActor, nullptr, "HidePreviewMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_HidePreviewMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESGridActor_HidePreviewMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AESGridActor_HidePreviewMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESGridActor_HidePreviewMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESGridActor_OnTileDestroyed_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroundType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroundType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AESGridActor_OnTileDestroyed_Statics::NewProp_GroundType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AESGridActor_OnTileDestroyed_Statics::NewProp_GroundType = { "GroundType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridActor_eventOnTileDestroyed_Parms, GroundType), Z_Construct_UEnum_EveOfTheStorm_EGroundType, METADATA_PARAMS(0, nullptr) }; // 3897062157
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AESGridActor_OnTileDestroyed_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridActor_eventOnTileDestroyed_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AESGridActor_OnTileDestroyed_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridActor_eventOnTileDestroyed_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESGridActor_OnTileDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESGridActor_OnTileDestroyed_Statics::NewProp_GroundType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESGridActor_OnTileDestroyed_Statics::NewProp_GroundType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESGridActor_OnTileDestroyed_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESGridActor_OnTileDestroyed_Statics::NewProp_Y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESGridActor_OnTileDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESGridActor_OnTileDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESGridActor, nullptr, "OnTileDestroyed", nullptr, nullptr, Z_Construct_UFunction_AESGridActor_OnTileDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_OnTileDestroyed_Statics::PropPointers), sizeof(ESGridActor_eventOnTileDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_OnTileDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESGridActor_OnTileDestroyed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_OnTileDestroyed_Statics::PropPointers) < 2048);
	static_assert(sizeof(ESGridActor_eventOnTileDestroyed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESGridActor_OnTileDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESGridActor_OnTileDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESGridActor_OnTileSpawned_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroundType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroundType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AESGridActor_OnTileSpawned_Statics::NewProp_GroundType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AESGridActor_OnTileSpawned_Statics::NewProp_GroundType = { "GroundType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridActor_eventOnTileSpawned_Parms, GroundType), Z_Construct_UEnum_EveOfTheStorm_EGroundType, METADATA_PARAMS(0, nullptr) }; // 3897062157
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AESGridActor_OnTileSpawned_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridActor_eventOnTileSpawned_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESGridActor_OnTileSpawned_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESGridActor_OnTileSpawned_Statics::NewProp_GroundType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESGridActor_OnTileSpawned_Statics::NewProp_GroundType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESGridActor_OnTileSpawned_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESGridActor_OnTileSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESGridActor_OnTileSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESGridActor, nullptr, "OnTileSpawned", nullptr, nullptr, Z_Construct_UFunction_AESGridActor_OnTileSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_OnTileSpawned_Statics::PropPointers), sizeof(ESGridActor_eventOnTileSpawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_OnTileSpawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESGridActor_OnTileSpawned_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_OnTileSpawned_Statics::PropPointers) < 2048);
	static_assert(sizeof(ESGridActor_eventOnTileSpawned_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESGridActor_OnTileSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESGridActor_OnTileSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics
	{
		struct ESGridActor_eventSetPreviewMesh_Parms
		{
			FGridTile Tile;
			EGridDirection Direction;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tile;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::NewProp_Tile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridActor_eventSetPreviewMesh_Parms, Tile), Z_Construct_UScriptStruct_FGridTile, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::NewProp_Tile_MetaData), Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::NewProp_Tile_MetaData) }; // 2185704064
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridActor_eventSetPreviewMesh_Parms, Direction), Z_Construct_UEnum_EveOfTheStorm_EGridDirection, METADATA_PARAMS(0, nullptr) }; // 3444209995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::NewProp_Tile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PREVIEW MESH\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PREVIEW MESH" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESGridActor, nullptr, "SetPreviewMesh", nullptr, nullptr, Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::ESGridActor_eventSetPreviewMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::ESGridActor_eventSetPreviewMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESGridActor_SetPreviewMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESGridActor_SetPreviewMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESGridActor_UpdatePreviewMesh_Statics
	{
		struct ESGridActor_eventUpdatePreviewMesh_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AESGridActor_UpdatePreviewMesh_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridActor_eventUpdatePreviewMesh_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AESGridActor_UpdatePreviewMesh_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridActor_eventUpdatePreviewMesh_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESGridActor_UpdatePreviewMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESGridActor_UpdatePreviewMesh_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESGridActor_UpdatePreviewMesh_Statics::NewProp_Y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESGridActor_UpdatePreviewMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESGridActor_UpdatePreviewMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESGridActor, nullptr, "UpdatePreviewMesh", nullptr, nullptr, Z_Construct_UFunction_AESGridActor_UpdatePreviewMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_UpdatePreviewMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESGridActor_UpdatePreviewMesh_Statics::ESGridActor_eventUpdatePreviewMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_UpdatePreviewMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESGridActor_UpdatePreviewMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_UpdatePreviewMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESGridActor_UpdatePreviewMesh_Statics::ESGridActor_eventUpdatePreviewMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESGridActor_UpdatePreviewMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESGridActor_UpdatePreviewMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AESGridActor_UpdatePreviewMeshByWorldLocation_Statics
	{
		struct ESGridActor_eventUpdatePreviewMeshByWorldLocation_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESGridActor_UpdatePreviewMeshByWorldLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AESGridActor_UpdatePreviewMeshByWorldLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridActor_eventUpdatePreviewMeshByWorldLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_UpdatePreviewMeshByWorldLocation_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_AESGridActor_UpdatePreviewMeshByWorldLocation_Statics::NewProp_Location_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AESGridActor_UpdatePreviewMeshByWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AESGridActor_UpdatePreviewMeshByWorldLocation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AESGridActor_UpdatePreviewMeshByWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AESGridActor_UpdatePreviewMeshByWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AESGridActor, nullptr, "UpdatePreviewMeshByWorldLocation", nullptr, nullptr, Z_Construct_UFunction_AESGridActor_UpdatePreviewMeshByWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_UpdatePreviewMeshByWorldLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AESGridActor_UpdatePreviewMeshByWorldLocation_Statics::ESGridActor_eventUpdatePreviewMeshByWorldLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_UpdatePreviewMeshByWorldLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AESGridActor_UpdatePreviewMeshByWorldLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AESGridActor_UpdatePreviewMeshByWorldLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AESGridActor_UpdatePreviewMeshByWorldLocation_Statics::ESGridActor_eventUpdatePreviewMeshByWorldLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AESGridActor_UpdatePreviewMeshByWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AESGridActor_UpdatePreviewMeshByWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AESGridActor);
	UClass* Z_Construct_UClass_AESGridActor_NoRegister()
	{
		return AESGridActor::StaticClass();
	}
	struct Z_Construct_UClass_AESGridActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundPlane_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GroundPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridScene;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridMeshes_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GridMeshes_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GridMeshes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GridMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackrockMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackrockMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilePreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TilePreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackrockScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackrockScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridOffset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundMaterials_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroundMaterials_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroundMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GroundMaterials;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewGroundMaterials_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviewGroundMaterials_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviewGroundMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGroundMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PreviewGroundMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIsErrorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialIsErrorParamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TileMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTilePreviewLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentTilePreviewLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentTile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AESGridActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AESGridActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AESGridActor_ConfirmPlacement, "ConfirmPlacement" }, // 350319338
		{ &Z_Construct_UFunction_AESGridActor_GetCenterLocation, "GetCenterLocation" }, // 2994220794
		{ &Z_Construct_UFunction_AESGridActor_GetTileTransform, "GetTileTransform" }, // 723205775
		{ &Z_Construct_UFunction_AESGridActor_HidePreviewMesh, "HidePreviewMesh" }, // 3731540748
		{ &Z_Construct_UFunction_AESGridActor_OnTileDestroyed, "OnTileDestroyed" }, // 2260370266
		{ &Z_Construct_UFunction_AESGridActor_OnTileSpawned, "OnTileSpawned" }, // 1054647847
		{ &Z_Construct_UFunction_AESGridActor_SetPreviewMesh, "SetPreviewMesh" }, // 376065526
		{ &Z_Construct_UFunction_AESGridActor_UpdatePreviewMesh, "UpdatePreviewMesh" }, // 4014865765
		{ &Z_Construct_UFunction_AESGridActor_UpdatePreviewMeshByWorldLocation, "UpdatePreviewMeshByWorldLocation" }, // 41274303
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Grid/ESGridActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::NewProp_GroundPlane_MetaData[] = {
		{ "Category", "ESGridActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_GroundPlane = { "GroundPlane", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESGridActor, GroundPlane), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::NewProp_GroundPlane_MetaData), Z_Construct_UClass_AESGridActor_Statics::NewProp_GroundPlane_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::NewProp_GridScene_MetaData[] = {
		{ "Category", "ESGridActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UPROPERTY(BlueprintReadOnly, VisibleAnywhere)\n// UInstancedStaticMeshComponent* GridMeshes;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(BlueprintReadOnly, VisibleAnywhere)\nUInstancedStaticMeshComponent* GridMeshes;" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_GridScene = { "GridScene", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESGridActor, GridScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::NewProp_GridScene_MetaData), Z_Construct_UClass_AESGridActor_Statics::NewProp_GridScene_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_GridMeshes_ValueProp = { "GridMeshes", nullptr, (EPropertyFlags)0x00000000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_GridMeshes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_GridMeshes_Key_KeyProp = { "GridMeshes_Key", nullptr, (EPropertyFlags)0x00000000000a0009, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_EveOfTheStorm_EGroundType, METADATA_PARAMS(0, nullptr) }; // 3897062157
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::NewProp_GridMeshes_MetaData[] = {
		{ "Category", "ESGridActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//storge the instance static mesh of certain ground \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "storge the instance static mesh of certain ground" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_GridMeshes = { "GridMeshes", nullptr, (EPropertyFlags)0x002008800002001d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESGridActor, GridMeshes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::NewProp_GridMeshes_MetaData), Z_Construct_UClass_AESGridActor_Statics::NewProp_GridMeshes_MetaData) }; // 3897062157
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::NewProp_BackrockMeshes_MetaData[] = {
		{ "Category", "ESGridActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_BackrockMeshes = { "BackrockMeshes", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESGridActor, BackrockMeshes), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::NewProp_BackrockMeshes_MetaData), Z_Construct_UClass_AESGridActor_Statics::NewProp_BackrockMeshes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::NewProp_TilePreviewMesh_MetaData[] = {
		{ "Category", "ESGridActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_TilePreviewMesh = { "TilePreviewMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESGridActor, TilePreviewMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::NewProp_TilePreviewMesh_MetaData), Z_Construct_UClass_AESGridActor_Statics::NewProp_TilePreviewMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::NewProp_GridSystem_MetaData[] = {
		{ "Category", "ESGridActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_GridSystem = { "GridSystem", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESGridActor, GridSystem), Z_Construct_UClass_UESGridSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::NewProp_GridSystem_MetaData), Z_Construct_UClass_AESGridActor_Statics::NewProp_GridSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "ESGridActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESGridActor, GridSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::NewProp_GridSize_MetaData), Z_Construct_UClass_AESGridActor_Statics::NewProp_GridSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::NewProp_TileScale_MetaData[] = {
		{ "Category", "ESGridActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_TileScale = { "TileScale", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESGridActor, TileScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::NewProp_TileScale_MetaData), Z_Construct_UClass_AESGridActor_Statics::NewProp_TileScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::NewProp_BackrockScale_MetaData[] = {
		{ "Category", "ESGridActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_BackrockScale = { "BackrockScale", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESGridActor, BackrockScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::NewProp_BackrockScale_MetaData), Z_Construct_UClass_AESGridActor_Statics::NewProp_BackrockScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::NewProp_GridOffset_MetaData[] = {
		{ "Category", "ESGridActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_GridOffset = { "GridOffset", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESGridActor, GridOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::NewProp_GridOffset_MetaData), Z_Construct_UClass_AESGridActor_Statics::NewProp_GridOffset_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_GroundMaterials_ValueProp = { "GroundMaterials", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBlockMaterial, METADATA_PARAMS(0, nullptr) }; // 438623336
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_GroundMaterials_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_GroundMaterials_Key_KeyProp = { "GroundMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_EveOfTheStorm_EGroundType, METADATA_PARAMS(0, nullptr) }; // 3897062157
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::NewProp_GroundMaterials_MetaData[] = {
		{ "Category", "ESGridActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_GroundMaterials = { "GroundMaterials", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESGridActor, GroundMaterials), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::NewProp_GroundMaterials_MetaData), Z_Construct_UClass_AESGridActor_Statics::NewProp_GroundMaterials_MetaData) }; // 3897062157 438623336
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewGroundMaterials_ValueProp = { "PreviewGroundMaterials", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewGroundMaterials_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewGroundMaterials_Key_KeyProp = { "PreviewGroundMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_EveOfTheStorm_EGroundType, METADATA_PARAMS(0, nullptr) }; // 3897062157
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewGroundMaterials_MetaData[] = {
		{ "Category", "ESGridActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewGroundMaterials = { "PreviewGroundMaterials", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESGridActor, PreviewGroundMaterials), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewGroundMaterials_MetaData), Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewGroundMaterials_MetaData) }; // 3897062157
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewMaterials_MetaData[] = {
		{ "Category", "ESGridActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewMaterials = { "PreviewMaterials", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESGridActor, PreviewMaterials), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewMaterials_MetaData), Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewMaterials_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::NewProp_MaterialIsErrorParamName_MetaData[] = {
		{ "Category", "ESGridActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_MaterialIsErrorParamName = { "MaterialIsErrorParamName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESGridActor, MaterialIsErrorParamName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::NewProp_MaterialIsErrorParamName_MetaData), Z_Construct_UClass_AESGridActor_Statics::NewProp_MaterialIsErrorParamName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::NewProp_TileMesh_MetaData[] = {
		{ "Category", "ESGridActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_TileMesh = { "TileMesh", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESGridActor, TileMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::NewProp_TileMesh_MetaData), Z_Construct_UClass_AESGridActor_Statics::NewProp_TileMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewMaterial_MetaData[] = {
		{ "Category", "ESGridActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewMaterial = { "PreviewMaterial", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESGridActor, PreviewMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewMaterial_MetaData), Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::NewProp_CurrentTilePreviewLocation_MetaData[] = {
		{ "Category", "ESGridActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_CurrentTilePreviewLocation = { "CurrentTilePreviewLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESGridActor, CurrentTilePreviewLocation), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::NewProp_CurrentTilePreviewLocation_MetaData), Z_Construct_UClass_AESGridActor_Statics::NewProp_CurrentTilePreviewLocation_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_CurrentDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::NewProp_CurrentDirection_MetaData[] = {
		{ "Category", "ESGridActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_CurrentDirection = { "CurrentDirection", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESGridActor, CurrentDirection), Z_Construct_UEnum_EveOfTheStorm_EGridDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::NewProp_CurrentDirection_MetaData), Z_Construct_UClass_AESGridActor_Statics::NewProp_CurrentDirection_MetaData) }; // 3444209995
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESGridActor_Statics::NewProp_CurrentTile_MetaData[] = {
		{ "Category", "ESGridActor" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AESGridActor_Statics::NewProp_CurrentTile = { "CurrentTile", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESGridActor, CurrentTile), Z_Construct_UScriptStruct_FGridTile, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::NewProp_CurrentTile_MetaData), Z_Construct_UClass_AESGridActor_Statics::NewProp_CurrentTile_MetaData) }; // 2185704064
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AESGridActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_GroundPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_GridScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_GridMeshes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_GridMeshes_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_GridMeshes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_GridMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_BackrockMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_TilePreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_GridSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_TileScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_BackrockScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_GridOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_GroundMaterials_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_GroundMaterials_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_GroundMaterials_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_GroundMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewGroundMaterials_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewGroundMaterials_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewGroundMaterials_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewGroundMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_MaterialIsErrorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_TileMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_PreviewMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_CurrentTilePreviewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_CurrentDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_CurrentDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESGridActor_Statics::NewProp_CurrentTile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AESGridActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AESGridActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AESGridActor_Statics::ClassParams = {
		&AESGridActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AESGridActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AESGridActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AESGridActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AESGridActor()
	{
		if (!Z_Registration_Info_UClass_AESGridActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AESGridActor.OuterSingleton, Z_Construct_UClass_AESGridActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AESGridActor.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<AESGridActor>()
	{
		return AESGridActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AESGridActor);
	AESGridActor::~AESGridActor() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_Statics::ScriptStructInfo[] = {
		{ FBlockIndex::StaticStruct, Z_Construct_UScriptStruct_FBlockIndex_Statics::NewStructOps, TEXT("BlockIndex"), &Z_Registration_Info_UScriptStruct_BlockIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlockIndex), 549499190U) },
		{ FBlockMaterial::StaticStruct, Z_Construct_UScriptStruct_FBlockMaterial_Statics::NewStructOps, TEXT("BlockMaterial"), &Z_Registration_Info_UScriptStruct_BlockMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlockMaterial), 438623336U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AESGridActor, AESGridActor::StaticClass, TEXT("AESGridActor"), &Z_Registration_Info_UClass_AESGridActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AESGridActor), 3510393977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_363371112(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
