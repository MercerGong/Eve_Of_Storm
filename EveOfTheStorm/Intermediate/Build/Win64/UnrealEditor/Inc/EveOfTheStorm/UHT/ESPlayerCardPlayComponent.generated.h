// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Player/ESPlayerCardPlayComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCardData;
#ifdef EVEOFTHESTORM_ESPlayerCardPlayComponent_generated_h
#error "ESPlayerCardPlayComponent.generated.h already included, missing '#pragma once' in ESPlayerCardPlayComponent.h"
#endif
#define EVEOFTHESTORM_ESPlayerCardPlayComponent_generated_h

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_18_SPARSE_DATA
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execOnRotate); \
	DECLARE_FUNCTION(execOnMouseTrigger); \
	DECLARE_FUNCTION(execCancelPlayCard); \
	DECLARE_FUNCTION(execPlayCard); \
	DECLARE_FUNCTION(execStartPlayCard); \
	DECLARE_FUNCTION(execCanPlayCard);


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_18_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUESPlayerCardPlayComponent(); \
	friend struct Z_Construct_UClass_UESPlayerCardPlayComponent_Statics; \
public: \
	DECLARE_CLASS(UESPlayerCardPlayComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EveOfTheStorm"), NO_API) \
	DECLARE_SERIALIZER(UESPlayerCardPlayComponent)


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UESPlayerCardPlayComponent(UESPlayerCardPlayComponent&&); \
	NO_API UESPlayerCardPlayComponent(const UESPlayerCardPlayComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UESPlayerCardPlayComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UESPlayerCardPlayComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UESPlayerCardPlayComponent) \
	NO_API virtual ~UESPlayerCardPlayComponent();


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_15_PROLOG
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_18_SPARSE_DATA \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_18_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVEOFTHESTORM_API UClass* StaticClass<class UESPlayerCardPlayComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerCardPlayComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
