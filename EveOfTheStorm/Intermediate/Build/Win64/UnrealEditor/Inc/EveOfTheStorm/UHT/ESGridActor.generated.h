// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Grid/ESGridActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGridDirection : uint8;
enum class EGroundType : uint8;
struct FGridTile;
#ifdef EVEOFTHESTORM_ESGridActor_generated_h
#error "ESGridActor.generated.h already included, missing '#pragma once' in ESGridActor.h"
#endif
#define EVEOFTHESTORM_ESGridActor_generated_h

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlockIndex_Statics; \
	EVEOFTHESTORM_API static class UScriptStruct* StaticStruct();


template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<struct FBlockIndex>();

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlockMaterial_Statics; \
	EVEOFTHESTORM_API static class UScriptStruct* StaticStruct();


template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<struct FBlockMaterial>();

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_50_SPARSE_DATA
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_50_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTileTransform); \
	DECLARE_FUNCTION(execGetCenterLocation); \
	DECLARE_FUNCTION(execConfirmPlacement); \
	DECLARE_FUNCTION(execHidePreviewMesh); \
	DECLARE_FUNCTION(execUpdatePreviewMeshByWorldLocation); \
	DECLARE_FUNCTION(execUpdatePreviewMesh); \
	DECLARE_FUNCTION(execSetPreviewMesh);


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_50_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_50_CALLBACK_WRAPPERS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAESGridActor(); \
	friend struct Z_Construct_UClass_AESGridActor_Statics; \
public: \
	DECLARE_CLASS(AESGridActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EveOfTheStorm"), NO_API) \
	DECLARE_SERIALIZER(AESGridActor)


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AESGridActor(AESGridActor&&); \
	NO_API AESGridActor(const AESGridActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AESGridActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AESGridActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AESGridActor) \
	NO_API virtual ~AESGridActor();


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_47_PROLOG
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_50_SPARSE_DATA \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_50_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_50_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_50_CALLBACK_WRAPPERS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_50_INCLASS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVEOFTHESTORM_API UClass* StaticClass<class AESGridActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
