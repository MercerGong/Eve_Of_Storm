// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/ESCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESCharacterBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESCharacterBase();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESCharacterBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	void AESCharacterBase::StaticRegisterNativesAESCharacterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AESCharacterBase);
	UClass* Z_Construct_UClass_AESCharacterBase_NoRegister()
	{
		return AESCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AESCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AESCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AESCharacterBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Core/ESCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Core/ESCharacterBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AESCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AESCharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AESCharacterBase_Statics::ClassParams = {
		&AESCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AESCharacterBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AESCharacterBase()
	{
		if (!Z_Registration_Info_UClass_AESCharacterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AESCharacterBase.OuterSingleton, Z_Construct_UClass_AESCharacterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AESCharacterBase.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<AESCharacterBase>()
	{
		return AESCharacterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AESCharacterBase);
	AESCharacterBase::~AESCharacterBase() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_ESCharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_ESCharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AESCharacterBase, AESCharacterBase::StaticClass, TEXT("AESCharacterBase"), &Z_Registration_Info_UClass_AESCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AESCharacterBase), 3745238813U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_ESCharacterBase_h_1802338354(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_ESCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_ESCharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
