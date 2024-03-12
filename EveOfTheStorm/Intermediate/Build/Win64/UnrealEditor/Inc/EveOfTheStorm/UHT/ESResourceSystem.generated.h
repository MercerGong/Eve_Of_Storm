// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Game/ESResourceSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EResourceType : uint8;
struct FResourceDefinition;
struct FResourceModifier;
#ifdef EVEOFTHESTORM_ESResourceSystem_generated_h
#error "ESResourceSystem.generated.h already included, missing '#pragma once' in ESResourceSystem.h"
#endif
#define EVEOFTHESTORM_ESResourceSystem_generated_h

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_11_DELEGATE \
EVEOFTHESTORM_API void FOnResourceChangeEvent_DelegateWrapper(const FMulticastScriptDelegate& OnResourceChangeEvent, EResourceType type, float NewValue, float OldValue);


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResourceDefinition_Statics; \
	EVEOFTHESTORM_API static class UScriptStruct* StaticStruct();


template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<struct FResourceDefinition>();

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResourceModifier_Statics; \
	EVEOFTHESTORM_API static class UScriptStruct* StaticStruct();


template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<struct FResourceModifier>();

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_49_SPARSE_DATA
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_49_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_49_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyModifier); \
	DECLARE_FUNCTION(execValidResource); \
	DECLARE_FUNCTION(execSetMaxResourceValue); \
	DECLARE_FUNCTION(execGetMaxResourceValue); \
	DECLARE_FUNCTION(execHasEnoughResource); \
	DECLARE_FUNCTION(execSubtractResourceValue); \
	DECLARE_FUNCTION(execAddResourceValue); \
	DECLARE_FUNCTION(execSetResourceValue); \
	DECLARE_FUNCTION(execGetResourceValue); \
	DECLARE_FUNCTION(execInit);


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_49_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUESResourceSystem(); \
	friend struct Z_Construct_UClass_UESResourceSystem_Statics; \
public: \
	DECLARE_CLASS(UESResourceSystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EveOfTheStorm"), NO_API) \
	DECLARE_SERIALIZER(UESResourceSystem)


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UESResourceSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UESResourceSystem(UESResourceSystem&&); \
	NO_API UESResourceSystem(const UESResourceSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UESResourceSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UESResourceSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UESResourceSystem) \
	NO_API virtual ~UESResourceSystem();


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_46_PROLOG
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_49_SPARSE_DATA \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_49_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_49_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_49_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_49_INCLASS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVEOFTHESTORM_API UClass* StaticClass<class UESResourceSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
