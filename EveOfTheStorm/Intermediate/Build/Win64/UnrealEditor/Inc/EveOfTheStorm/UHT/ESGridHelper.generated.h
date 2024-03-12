// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Grid/ESGridHelper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGridDirection : uint8;
struct FBuildingData;
#ifdef EVEOFTHESTORM_ESGridHelper_generated_h
#error "ESGridHelper.generated.h already included, missing '#pragma once' in ESGridHelper.h"
#endif
#define EVEOFTHESTORM_ESGridHelper_generated_h

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_17_SPARSE_DATA
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanProduceFood); \
	DECLARE_FUNCTION(execCalculateCenter); \
	DECLARE_FUNCTION(execRotateShape);


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_17_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUESGridHelper(); \
	friend struct Z_Construct_UClass_UESGridHelper_Statics; \
public: \
	DECLARE_CLASS(UESGridHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EveOfTheStorm"), NO_API) \
	DECLARE_SERIALIZER(UESGridHelper)


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UESGridHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UESGridHelper(UESGridHelper&&); \
	NO_API UESGridHelper(const UESGridHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UESGridHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UESGridHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UESGridHelper) \
	NO_API virtual ~UESGridHelper();


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_14_PROLOG
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_17_SPARSE_DATA \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_17_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_17_INCLASS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVEOFTHESTORM_API UClass* StaticClass<class UESGridHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
