// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Grid/ESBuildingManagerActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AESBuildingActor;
class UESBuildingSystem;
enum class EGridDirection : uint8;
struct FBuildingData;
#ifdef EVEOFTHESTORM_ESBuildingManagerActor_generated_h
#error "ESBuildingManagerActor.generated.h already included, missing '#pragma once' in ESBuildingManagerActor.h"
#endif
#define EVEOFTHESTORM_ESBuildingManagerActor_generated_h

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_15_SPARSE_DATA
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGetGroundOffset); \
	DECLARE_FUNCTION(execGetBuildDesireTransform); \
	DECLARE_FUNCTION(execConfirmPlacement); \
	DECLARE_FUNCTION(execHidePreviewActor); \
	DECLARE_FUNCTION(execUpdatePreviewActorByWorldLocation); \
	DECLARE_FUNCTION(execUpdatePreviewActor); \
	DECLARE_FUNCTION(execSetPreviewActor); \
	DECLARE_FUNCTION(execOnBuildingRemoved); \
	DECLARE_FUNCTION(execOnBuildingPlaced); \
	DECLARE_FUNCTION(execInit);


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_15_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAESBuildingManagerActor(); \
	friend struct Z_Construct_UClass_AESBuildingManagerActor_Statics; \
public: \
	DECLARE_CLASS(AESBuildingManagerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EveOfTheStorm"), NO_API) \
	DECLARE_SERIALIZER(AESBuildingManagerActor)


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AESBuildingManagerActor(AESBuildingManagerActor&&); \
	NO_API AESBuildingManagerActor(const AESBuildingManagerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AESBuildingManagerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AESBuildingManagerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AESBuildingManagerActor) \
	NO_API virtual ~AESBuildingManagerActor();


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_12_PROLOG
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_15_SPARSE_DATA \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_15_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVEOFTHESTORM_API UClass* StaticClass<class AESBuildingManagerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingManagerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
