// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Definition/ESCardBuff.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESCardBuff() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardBuff();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardBuff_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	void UESCardBuff::StaticRegisterNativesUESCardBuff()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UESCardBuff);
	UClass* Z_Construct_UClass_UESCardBuff_NoRegister()
	{
		return UESCardBuff::StaticClass();
	}
	struct Z_Construct_UClass_UESCardBuff_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UESCardBuff_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardBuff_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardBuff_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Definition/ESCardBuff.h" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardBuff.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UESCardBuff_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UESCardBuff>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UESCardBuff_Statics::ClassParams = {
		&UESCardBuff::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardBuff_Statics::Class_MetaDataParams), Z_Construct_UClass_UESCardBuff_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UESCardBuff()
	{
		if (!Z_Registration_Info_UClass_UESCardBuff.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UESCardBuff.OuterSingleton, Z_Construct_UClass_UESCardBuff_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UESCardBuff.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<UESCardBuff>()
	{
		return UESCardBuff::StaticClass();
	}
	UESCardBuff::UESCardBuff(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UESCardBuff);
	UESCardBuff::~UESCardBuff() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardBuff_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardBuff_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UESCardBuff, UESCardBuff::StaticClass, TEXT("UESCardBuff"), &Z_Registration_Info_UClass_UESCardBuff, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UESCardBuff), 1122432961U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardBuff_h_115787263(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardBuff_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardBuff_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
