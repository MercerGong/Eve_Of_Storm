// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Types/ResourceType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResourceType() {}
// Cross Module References
	EVEOFTHESTORM_API UEnum* Z_Construct_UEnum_EveOfTheStorm_EResourceType();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EResourceType;
	static UEnum* EResourceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EResourceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EResourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EveOfTheStorm_EResourceType, (UObject*)Z_Construct_UPackage__Script_EveOfTheStorm(), TEXT("EResourceType"));
		}
		return Z_Registration_Info_UEnum_EResourceType.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UEnum* StaticEnum<EResourceType>()
	{
		return EResourceType_StaticEnum();
	}
	struct Z_Construct_UEnum_EveOfTheStorm_EResourceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EveOfTheStorm_EResourceType_Statics::Enumerators[] = {
		{ "EResourceType::Food", (int64)EResourceType::Food },
		{ "EResourceType::Tech", (int64)EResourceType::Tech },
		{ "EResourceType::MaxTech", (int64)EResourceType::MaxTech },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EveOfTheStorm_EResourceType_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Category", "ES|Types" },
		{ "DisplayName", "Resource Type" },
		{ "Food.Name", "EResourceType::Food" },
		{ "MaxTech.Name", "EResourceType::MaxTech" },
		{ "ModuleRelativePath", "Public/Core/Types/ResourceType.h" },
		{ "Tech.Name", "EResourceType::Tech" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EveOfTheStorm_EResourceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EveOfTheStorm,
		nullptr,
		"EResourceType",
		"EResourceType",
		Z_Construct_UEnum_EveOfTheStorm_EResourceType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EveOfTheStorm_EResourceType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EveOfTheStorm_EResourceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EveOfTheStorm_EResourceType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_EveOfTheStorm_EResourceType()
	{
		if (!Z_Registration_Info_UEnum_EResourceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EResourceType.InnerSingleton, Z_Construct_UEnum_EveOfTheStorm_EResourceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EResourceType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Types_ResourceType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Types_ResourceType_h_Statics::EnumInfo[] = {
		{ EResourceType_StaticEnum, TEXT("EResourceType"), &Z_Registration_Info_UEnum_EResourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3645876735U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Types_ResourceType_h_3054323889(TEXT("/Script/EveOfTheStorm"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Types_ResourceType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Types_ResourceType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
