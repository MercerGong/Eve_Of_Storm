// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularCardSystem/Public/MSCRandomSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSCRandomSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UMSCRandomSubsystem();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UMSCRandomSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModularCardSystem();
// End Cross Module References
	void UMSCRandomSubsystem::StaticRegisterNativesUMSCRandomSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSCRandomSubsystem);
	UClass* Z_Construct_UClass_UMSCRandomSubsystem_NoRegister()
	{
		return UMSCRandomSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMSCRandomSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSCRandomSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularCardSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSCRandomSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSCRandomSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MSCRandomSubsystem.h" },
		{ "ModuleRelativePath", "Public/MSCRandomSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSCRandomSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSCRandomSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSCRandomSubsystem_Statics::ClassParams = {
		&UMSCRandomSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSCRandomSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSCRandomSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMSCRandomSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMSCRandomSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSCRandomSubsystem.OuterSingleton, Z_Construct_UClass_UMSCRandomSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSCRandomSubsystem.OuterSingleton;
	}
	template<> MODULARCARDSYSTEM_API UClass* StaticClass<UMSCRandomSubsystem>()
	{
		return UMSCRandomSubsystem::StaticClass();
	}
	UMSCRandomSubsystem::UMSCRandomSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSCRandomSubsystem);
	UMSCRandomSubsystem::~UMSCRandomSubsystem() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MSCRandomSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MSCRandomSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSCRandomSubsystem, UMSCRandomSubsystem::StaticClass, TEXT("UMSCRandomSubsystem"), &Z_Registration_Info_UClass_UMSCRandomSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSCRandomSubsystem), 1289158876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MSCRandomSubsystem_h_2610220675(TEXT("/Script/ModularCardSystem"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MSCRandomSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MSCRandomSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
