// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Types/GroundType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroundType() {}
// Cross Module References
	EVEOFTHESTORM_API UEnum* Z_Construct_UEnum_EveOfTheStorm_EGroundType();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroundType;
	static UEnum* EGroundType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroundType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroundType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EveOfTheStorm_EGroundType, (UObject*)Z_Construct_UPackage__Script_EveOfTheStorm(), TEXT("EGroundType"));
		}
		return Z_Registration_Info_UEnum_EGroundType.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UEnum* StaticEnum<EGroundType>()
	{
		return EGroundType_StaticEnum();
	}
	struct Z_Construct_UEnum_EveOfTheStorm_EGroundType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EveOfTheStorm_EGroundType_Statics::Enumerators[] = {
		{ "EGroundType::None", (int64)EGroundType::None },
		{ "EGroundType::Stone", (int64)EGroundType::Stone },
		{ "EGroundType::Sand", (int64)EGroundType::Sand },
		{ "EGroundType::Grass", (int64)EGroundType::Grass },
		{ "EGroundType::Water", (int64)EGroundType::Water },
		{ "EGroundType::Mountain", (int64)EGroundType::Mountain },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EveOfTheStorm_EGroundType_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Category", "ES|Types" },
		{ "DisplayName", "Ground Type" },
		{ "Grass.Name", "EGroundType::Grass" },
		{ "ModuleRelativePath", "Public/Core/Types/GroundType.h" },
		{ "Mountain.Name", "EGroundType::Mountain" },
		{ "None.Name", "EGroundType::None" },
		{ "Sand.Name", "EGroundType::Sand" },
		{ "Stone.Name", "EGroundType::Stone" },
		{ "Water.Name", "EGroundType::Water" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EveOfTheStorm_EGroundType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EveOfTheStorm,
		nullptr,
		"EGroundType",
		"EGroundType",
		Z_Construct_UEnum_EveOfTheStorm_EGroundType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EveOfTheStorm_EGroundType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EveOfTheStorm_EGroundType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EveOfTheStorm_EGroundType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_EveOfTheStorm_EGroundType()
	{
		if (!Z_Registration_Info_UEnum_EGroundType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroundType.InnerSingleton, Z_Construct_UEnum_EveOfTheStorm_EGroundType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroundType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Types_GroundType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Types_GroundType_h_Statics::EnumInfo[] = {
		{ EGroundType_StaticEnum, TEXT("EGroundType"), &Z_Registration_Info_UEnum_EGroundType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3897062157U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Types_GroundType_h_2576936465(TEXT("/Script/EveOfTheStorm"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Types_GroundType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Types_GroundType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
