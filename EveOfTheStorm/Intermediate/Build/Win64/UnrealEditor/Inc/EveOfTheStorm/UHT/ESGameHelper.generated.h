// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Game/ESGameHelper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
enum class EResourceType : uint8;
struct FResourceModifier;
#ifdef EVEOFTHESTORM_ESGameHelper_generated_h
#error "ESGameHelper.generated.h already included, missing '#pragma once' in ESGameHelper.h"
#endif
#define EVEOFTHESTORM_ESGameHelper_generated_h

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_17_SPARSE_DATA
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyResourceModifier); \
	DECLARE_FUNCTION(execHasResource); \
	DECLARE_FUNCTION(execSetResource); \
	DECLARE_FUNCTION(execGetResource);


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_17_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUESGameHelper(); \
	friend struct Z_Construct_UClass_UESGameHelper_Statics; \
public: \
	DECLARE_CLASS(UESGameHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EveOfTheStorm"), NO_API) \
	DECLARE_SERIALIZER(UESGameHelper)


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UESGameHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UESGameHelper(UESGameHelper&&); \
	NO_API UESGameHelper(const UESGameHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UESGameHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UESGameHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UESGameHelper) \
	NO_API virtual ~UESGameHelper();


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_14_PROLOG
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_17_SPARSE_DATA \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_17_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_17_INCLASS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVEOFTHESTORM_API UClass* StaticClass<class UESGameHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESGameHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
