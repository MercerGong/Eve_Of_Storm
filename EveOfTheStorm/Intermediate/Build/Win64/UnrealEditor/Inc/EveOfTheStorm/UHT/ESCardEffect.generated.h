// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Definition/ESCardEffect.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AESDefaultGameMode;
class APlayerController;
#ifdef EVEOFTHESTORM_ESCardEffect_generated_h
#error "ESCardEffect.generated.h already included, missing '#pragma once' in ESCardEffect.h"
#endif
#define EVEOFTHESTORM_ESCardEffect_generated_h

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_16_SPARSE_DATA
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEffect); \
	DECLARE_FUNCTION(execCanApplyEffect);


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_16_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_16_CALLBACK_WRAPPERS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUESCardEffect(); \
	friend struct Z_Construct_UClass_UESCardEffect_Statics; \
public: \
	DECLARE_CLASS(UESCardEffect, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EveOfTheStorm"), NO_API) \
	DECLARE_SERIALIZER(UESCardEffect)


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UESCardEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UESCardEffect(UESCardEffect&&); \
	NO_API UESCardEffect(const UESCardEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UESCardEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UESCardEffect); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UESCardEffect) \
	NO_API virtual ~UESCardEffect();


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_13_PROLOG
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_16_SPARSE_DATA \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_16_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_16_CALLBACK_WRAPPERS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_16_INCLASS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVEOFTHESTORM_API UClass* StaticClass<class UESCardEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
