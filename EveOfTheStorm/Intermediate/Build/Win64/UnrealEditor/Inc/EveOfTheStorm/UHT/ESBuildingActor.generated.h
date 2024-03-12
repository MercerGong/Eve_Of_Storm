// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Grid/ESBuildingActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGridDirection : uint8;
struct FBuildingData;
#ifdef EVEOFTHESTORM_ESBuildingActor_generated_h
#error "ESBuildingActor.generated.h already included, missing '#pragma once' in ESBuildingActor.h"
#endif
#define EVEOFTHESTORM_ESBuildingActor_generated_h

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_14_SPARSE_DATA
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDirection); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execTickTurn); \
	DECLARE_FUNCTION(execInit);


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_14_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_14_CALLBACK_WRAPPERS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAESBuildingActor(); \
	friend struct Z_Construct_UClass_AESBuildingActor_Statics; \
public: \
	DECLARE_CLASS(AESBuildingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EveOfTheStorm"), NO_API) \
	DECLARE_SERIALIZER(AESBuildingActor)


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AESBuildingActor(AESBuildingActor&&); \
	NO_API AESBuildingActor(const AESBuildingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AESBuildingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AESBuildingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AESBuildingActor) \
	NO_API virtual ~AESBuildingActor();


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_11_PROLOG
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_14_SPARSE_DATA \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_14_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_14_CALLBACK_WRAPPERS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVEOFTHESTORM_API UClass* StaticClass<class AESBuildingActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
