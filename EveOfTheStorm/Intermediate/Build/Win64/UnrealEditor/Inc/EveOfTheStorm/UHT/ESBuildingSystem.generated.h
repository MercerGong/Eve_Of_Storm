// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Grid/ESBuildingSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UESGridSystem;
enum class EGridDirection : uint8;
struct FBuildingData;
struct FBuildingInfo;
struct FBuildingInitData;
#ifdef EVEOFTHESTORM_ESBuildingSystem_generated_h
#error "ESBuildingSystem.generated.h already included, missing '#pragma once' in ESBuildingSystem.h"
#endif
#define EVEOFTHESTORM_ESBuildingSystem_generated_h

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics; \
	EVEOFTHESTORM_API static class UScriptStruct* StaticStruct();


template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<struct FBuildRewardPeriod>();

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBuildingData_Statics; \
	EVEOFTHESTORM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<struct FBuildingData>();

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBuildingInfo_Statics; \
	EVEOFTHESTORM_API static class UScriptStruct* StaticStruct();


template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<struct FBuildingInfo>();

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBuildingInitData_Statics; \
	EVEOFTHESTORM_API static class UScriptStruct* StaticStruct();


template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<struct FBuildingInitData>();

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_98_DELEGATE \
EVEOFTHESTORM_API void FOnBuildingTriggerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnBuildingTriggerEvent, FBuildingData const& BuildinData, int32 EventCount);


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_103_SPARSE_DATA
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_103_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_103_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEstimateCost); \
	DECLARE_FUNCTION(execTickBuilding); \
	DECLARE_FUNCTION(execCanPlaceBuilding); \
	DECLARE_FUNCTION(execHasBuilding); \
	DECLARE_FUNCTION(execGetBuildingByPosition); \
	DECLARE_FUNCTION(execGetBuildingByIndex); \
	DECLARE_FUNCTION(execDropBuildingByPosition); \
	DECLARE_FUNCTION(execDropBuilding); \
	DECLARE_FUNCTION(execPlaceBuilding); \
	DECLARE_FUNCTION(execSetCurrentTick); \
	DECLARE_FUNCTION(execPlaceInitialBuilding); \
	DECLARE_FUNCTION(execInit);


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_103_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUESBuildingSystem(); \
	friend struct Z_Construct_UClass_UESBuildingSystem_Statics; \
public: \
	DECLARE_CLASS(UESBuildingSystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EveOfTheStorm"), NO_API) \
	DECLARE_SERIALIZER(UESBuildingSystem)


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_103_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UESBuildingSystem(UESBuildingSystem&&); \
	NO_API UESBuildingSystem(const UESBuildingSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UESBuildingSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UESBuildingSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UESBuildingSystem) \
	NO_API virtual ~UESBuildingSystem();


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_100_PROLOG
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_103_SPARSE_DATA \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_103_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_103_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_103_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_103_INCLASS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVEOFTHESTORM_API UClass* StaticClass<class UESBuildingSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
