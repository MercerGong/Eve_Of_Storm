// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Player/ESCardAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AESDefaultGameMode;
class APlayerController;
class UWorld;
struct FCardData;
#ifdef EVEOFTHESTORM_ESCardAction_generated_h
#error "ESCardAction.generated.h already included, missing '#pragma once' in ESCardAction.h"
#endif
#define EVEOFTHESTORM_ESCardAction_generated_h

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_20_SPARSE_DATA
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetESGameMode); \
	DECLARE_FUNCTION(execOnRotate); \
	DECLARE_FUNCTION(execOnMouseTrigger); \
	DECLARE_FUNCTION(execCancelPlayCard); \
	DECLARE_FUNCTION(execPlayCard); \
	DECLARE_FUNCTION(execStartPlayCard); \
	DECLARE_FUNCTION(execCanPlayCard); \
	DECLARE_FUNCTION(execInit);


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_20_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_20_CALLBACK_WRAPPERS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUESCardAction(); \
	friend struct Z_Construct_UClass_UESCardAction_Statics; \
public: \
	DECLARE_CLASS(UESCardAction, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EveOfTheStorm"), NO_API) \
	DECLARE_SERIALIZER(UESCardAction)


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UESCardAction(UESCardAction&&); \
	NO_API UESCardAction(const UESCardAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UESCardAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UESCardAction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UESCardAction) \
	NO_API virtual ~UESCardAction();


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_17_PROLOG
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_20_SPARSE_DATA \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_20_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_20_CALLBACK_WRAPPERS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_20_INCLASS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVEOFTHESTORM_API UClass* StaticClass<class UESCardAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESCardAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
