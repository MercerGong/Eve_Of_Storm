// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Types/CardType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardType() {}
// Cross Module References
	EVEOFTHESTORM_API UEnum* Z_Construct_UEnum_EveOfTheStorm_ECardType();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECardType;
	static UEnum* ECardType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECardType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECardType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EveOfTheStorm_ECardType, (UObject*)Z_Construct_UPackage__Script_EveOfTheStorm(), TEXT("ECardType"));
		}
		return Z_Registration_Info_UEnum_ECardType.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UEnum* StaticEnum<ECardType>()
	{
		return ECardType_StaticEnum();
	}
	struct Z_Construct_UEnum_EveOfTheStorm_ECardType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EveOfTheStorm_ECardType_Statics::Enumerators[] = {
		{ "ECardType::Ground", (int64)ECardType::Ground },
		{ "ECardType::Blueprint", (int64)ECardType::Blueprint },
		{ "ECardType::Policy", (int64)ECardType::Policy },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EveOfTheStorm_ECardType_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Blueprint.Name", "ECardType::Blueprint" },
		{ "BlueprintType", "true" },
		{ "Category", "ES|Types" },
		{ "DisplayName", "Card Type" },
		{ "Ground.Name", "ECardType::Ground" },
		{ "ModuleRelativePath", "Public/Core/Types/CardType.h" },
		{ "Policy.Name", "ECardType::Policy" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EveOfTheStorm_ECardType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EveOfTheStorm,
		nullptr,
		"ECardType",
		"ECardType",
		Z_Construct_UEnum_EveOfTheStorm_ECardType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EveOfTheStorm_ECardType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EveOfTheStorm_ECardType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EveOfTheStorm_ECardType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_EveOfTheStorm_ECardType()
	{
		if (!Z_Registration_Info_UEnum_ECardType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECardType.InnerSingleton, Z_Construct_UEnum_EveOfTheStorm_ECardType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECardType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Types_CardType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Types_CardType_h_Statics::EnumInfo[] = {
		{ ECardType_StaticEnum, TEXT("ECardType"), &Z_Registration_Info_UEnum_ECardType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2593328734U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Types_CardType_h_3153532043(TEXT("/Script/EveOfTheStorm"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Types_CardType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Types_CardType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
