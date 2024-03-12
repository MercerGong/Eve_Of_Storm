// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/EveOfTheStormCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEveOfTheStormCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESCharacterBase();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AEveOfTheStormCharacter();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AEveOfTheStormCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	DEFINE_FUNCTION(AEveOfTheStormCharacter::execZoomCamera)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomCamera(Z_Param_ZoomAmount);
		P_NATIVE_END;
	}
	void AEveOfTheStormCharacter::StaticRegisterNativesAEveOfTheStormCharacter()
	{
		UClass* Class = AEveOfTheStormCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ZoomCamera", &AEveOfTheStormCharacter::execZoomCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEveOfTheStormCharacter_ZoomCamera_Statics
	{
		struct EveOfTheStormCharacter_eventZoomCamera_Parms
		{
			float ZoomAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEveOfTheStormCharacter_ZoomCamera_Statics::NewProp_ZoomAmount = { "ZoomAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EveOfTheStormCharacter_eventZoomCamera_Parms, ZoomAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEveOfTheStormCharacter_ZoomCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEveOfTheStormCharacter_ZoomCamera_Statics::NewProp_ZoomAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEveOfTheStormCharacter_ZoomCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EveOfTheStormCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEveOfTheStormCharacter_ZoomCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEveOfTheStormCharacter, nullptr, "ZoomCamera", nullptr, nullptr, Z_Construct_UFunction_AEveOfTheStormCharacter_ZoomCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEveOfTheStormCharacter_ZoomCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEveOfTheStormCharacter_ZoomCamera_Statics::EveOfTheStormCharacter_eventZoomCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEveOfTheStormCharacter_ZoomCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEveOfTheStormCharacter_ZoomCamera_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEveOfTheStormCharacter_ZoomCamera_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AEveOfTheStormCharacter_ZoomCamera_Statics::EveOfTheStormCharacter_eventZoomCamera_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AEveOfTheStormCharacter_ZoomCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEveOfTheStormCharacter_ZoomCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEveOfTheStormCharacter);
	UClass* Z_Construct_UClass_AEveOfTheStormCharacter_NoRegister()
	{
		return AEveOfTheStormCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AEveOfTheStormCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEveOfTheStormCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AESCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AEveOfTheStormCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEveOfTheStormCharacter_ZoomCamera, "ZoomCamera" }, // 1356312442
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EveOfTheStormCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "EveOfTheStormCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "EveOfTheStormCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEveOfTheStormCharacter, ZoomSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_ZoomSpeed_MetaData), Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_ZoomSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_DefaultZoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "EveOfTheStormCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_DefaultZoom = { "DefaultZoom", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEveOfTheStormCharacter, DefaultZoom), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_DefaultZoom_MetaData), Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_DefaultZoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_MinZoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "EveOfTheStormCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_MinZoom = { "MinZoom", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEveOfTheStormCharacter, MinZoom), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_MinZoom_MetaData), Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_MinZoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_MaxZoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "EveOfTheStormCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_MaxZoom = { "MaxZoom", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEveOfTheStormCharacter, MaxZoom), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_MaxZoom_MetaData), Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_MaxZoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_TargetZoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "EveOfTheStormCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_TargetZoom = { "TargetZoom", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEveOfTheStormCharacter, TargetZoom), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_TargetZoom_MetaData), Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_TargetZoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scene Object */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EveOfTheStormCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scene Object" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEveOfTheStormCharacter, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_SceneComponent_MetaData), Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_SceneComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EveOfTheStormCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEveOfTheStormCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_TopDownCameraComponent_MetaData), Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_TopDownCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EveOfTheStormCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEveOfTheStormCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_PawnMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EveOfTheStormCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_PawnMovement = { "PawnMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEveOfTheStormCharacter, PawnMovement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_PawnMovement_MetaData), Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_PawnMovement_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEveOfTheStormCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_ZoomSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_DefaultZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_MinZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_MaxZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_TargetZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEveOfTheStormCharacter_Statics::NewProp_PawnMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEveOfTheStormCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEveOfTheStormCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEveOfTheStormCharacter_Statics::ClassParams = {
		&AEveOfTheStormCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEveOfTheStormCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AEveOfTheStormCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEveOfTheStormCharacter()
	{
		if (!Z_Registration_Info_UClass_AEveOfTheStormCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEveOfTheStormCharacter.OuterSingleton, Z_Construct_UClass_AEveOfTheStormCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEveOfTheStormCharacter.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<AEveOfTheStormCharacter>()
	{
		return AEveOfTheStormCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEveOfTheStormCharacter);
	AEveOfTheStormCharacter::~AEveOfTheStormCharacter() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_EveOfTheStormCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_EveOfTheStormCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEveOfTheStormCharacter, AEveOfTheStormCharacter::StaticClass, TEXT("AEveOfTheStormCharacter"), &Z_Registration_Info_UClass_AEveOfTheStormCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEveOfTheStormCharacter), 1544322093U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_EveOfTheStormCharacter_h_3165930375(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_EveOfTheStormCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_EveOfTheStormCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
