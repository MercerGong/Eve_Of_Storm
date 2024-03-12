// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Grid/ESGridSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGridDirection : uint8;
enum class EGroundType : uint8;
struct FGridTile;
#ifdef EVEOFTHESTORM_ESGridSystem_generated_h
#error "ESGridSystem.generated.h already included, missing '#pragma once' in ESGridSystem.h"
#endif
#define EVEOFTHESTORM_ESGridSystem_generated_h

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGridTile_Statics; \
	EVEOFTHESTORM_API static class UScriptStruct* StaticStruct();


template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<struct FGridTile>();

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_31_SPARSE_DATA
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsGroundValid); \
	DECLARE_FUNCTION(execValidPosition); \
	DECLARE_FUNCTION(execGetPoints); \
	DECLARE_FUNCTION(execUpdateTile); \
	DECLARE_FUNCTION(execUpdateOneTile); \
	DECLARE_FUNCTION(execRemoveOneTile); \
	DECLARE_FUNCTION(execRemoveTile); \
	DECLARE_FUNCTION(execPlaceTile); \
	DECLARE_FUNCTION(execCanPlaceTile); \
	DECLARE_FUNCTION(execIsTileNearGround); \
	DECLARE_FUNCTION(execIsPointNearGround); \
	DECLARE_FUNCTION(execHasTile); \
	DECLARE_FUNCTION(execGetTileType); \
	DECLARE_FUNCTION(execPlaceInitialTile); \
	DECLARE_FUNCTION(execInitialize);


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_31_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUESGridSystem(); \
	friend struct Z_Construct_UClass_UESGridSystem_Statics; \
public: \
	DECLARE_CLASS(UESGridSystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EveOfTheStorm"), NO_API) \
	DECLARE_SERIALIZER(UESGridSystem)


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UESGridSystem(UESGridSystem&&); \
	NO_API UESGridSystem(const UESGridSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UESGridSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UESGridSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UESGridSystem) \
	NO_API virtual ~UESGridSystem();


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_28_PROLOG
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_31_SPARSE_DATA \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_31_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_31_INCLASS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVEOFTHESTORM_API UClass* StaticClass<class UESGridSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
