// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEveOfTheStorm_init() {}
	EVEOFTHESTORM_API UFunction* Z_Construct_UDelegateFunction_EveOfTheStorm_GameTurnTriggerEvent__DelegateSignature();
	EVEOFTHESTORM_API UFunction* Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature();
	EVEOFTHESTORM_API UFunction* Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature();
	EVEOFTHESTORM_API UFunction* Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EveOfTheStorm;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EveOfTheStorm()
	{
		if (!Z_Registration_Info_UPackage__Script_EveOfTheStorm.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_EveOfTheStorm_GameTurnTriggerEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EveOfTheStorm_OnFoodChangeEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EveOfTheStorm",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1EB0F010,
				0x539EBE13,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EveOfTheStorm.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EveOfTheStorm.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EveOfTheStorm(Z_Construct_UPackage__Script_EveOfTheStorm, TEXT("/Script/EveOfTheStorm"), Z_Registration_Info_UPackage__Script_EveOfTheStorm, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1EB0F010, 0x539EBE13));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
