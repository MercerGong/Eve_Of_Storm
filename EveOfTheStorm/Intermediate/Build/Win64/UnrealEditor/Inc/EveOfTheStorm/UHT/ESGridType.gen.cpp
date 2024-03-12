// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Grid/ESGridType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESGridType() {}
// Cross Module References
	EVEOFTHESTORM_API UEnum* Z_Construct_UEnum_EveOfTheStorm_EGridDirection();
	EVEOFTHESTORM_API UEnum* Z_Construct_UEnum_EveOfTheStorm_EGripTileShape();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGripTileShape;
	static UEnum* EGripTileShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGripTileShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGripTileShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EveOfTheStorm_EGripTileShape, (UObject*)Z_Construct_UPackage__Script_EveOfTheStorm(), TEXT("EGripTileShape"));
		}
		return Z_Registration_Info_UEnum_EGripTileShape.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UEnum* StaticEnum<EGripTileShape>()
	{
		return EGripTileShape_StaticEnum();
	}
	struct Z_Construct_UEnum_EveOfTheStorm_EGripTileShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EveOfTheStorm_EGripTileShape_Statics::Enumerators[] = {
		{ "EGripTileShape::Single", (int64)EGripTileShape::Single },
		{ "EGripTileShape::Square", (int64)EGripTileShape::Square },
		{ "EGripTileShape::Line", (int64)EGripTileShape::Line },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EveOfTheStorm_EGripTileShape_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Category", "ES|Grid" },
		{ "DisplayName", "Grid Type" },
		{ "Line.Name", "EGripTileShape::Line" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridType.h" },
		{ "Single.Name", "EGripTileShape::Single" },
		{ "Square.Name", "EGripTileShape::Square" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EveOfTheStorm_EGripTileShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EveOfTheStorm,
		nullptr,
		"EGripTileShape",
		"EGripTileShape",
		Z_Construct_UEnum_EveOfTheStorm_EGripTileShape_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EveOfTheStorm_EGripTileShape_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EveOfTheStorm_EGripTileShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EveOfTheStorm_EGripTileShape_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_EveOfTheStorm_EGripTileShape()
	{
		if (!Z_Registration_Info_UEnum_EGripTileShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGripTileShape.InnerSingleton, Z_Construct_UEnum_EveOfTheStorm_EGripTileShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGripTileShape.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGridDirection;
	static UEnum* EGridDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGridDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGridDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EveOfTheStorm_EGridDirection, (UObject*)Z_Construct_UPackage__Script_EveOfTheStorm(), TEXT("EGridDirection"));
		}
		return Z_Registration_Info_UEnum_EGridDirection.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UEnum* StaticEnum<EGridDirection>()
	{
		return EGridDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_EveOfTheStorm_EGridDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EveOfTheStorm_EGridDirection_Statics::Enumerators[] = {
		{ "EGridDirection::North", (int64)EGridDirection::North },
		{ "EGridDirection::East", (int64)EGridDirection::East },
		{ "EGridDirection::South", (int64)EGridDirection::South },
		{ "EGridDirection::West", (int64)EGridDirection::West },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EveOfTheStorm_EGridDirection_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Category", "ES|Grid" },
		{ "DisplayName", "Grid Direction" },
		{ "East.Name", "EGridDirection::East" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridType.h" },
		{ "North.Name", "EGridDirection::North" },
		{ "South.Name", "EGridDirection::South" },
		{ "West.Name", "EGridDirection::West" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EveOfTheStorm_EGridDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EveOfTheStorm,
		nullptr,
		"EGridDirection",
		"EGridDirection",
		Z_Construct_UEnum_EveOfTheStorm_EGridDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EveOfTheStorm_EGridDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EveOfTheStorm_EGridDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EveOfTheStorm_EGridDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_EveOfTheStorm_EGridDirection()
	{
		if (!Z_Registration_Info_UEnum_EGridDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGridDirection.InnerSingleton, Z_Construct_UEnum_EveOfTheStorm_EGridDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGridDirection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridType_h_Statics::EnumInfo[] = {
		{ EGripTileShape_StaticEnum, TEXT("EGripTileShape"), &Z_Registration_Info_UEnum_EGripTileShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3628574327U) },
		{ EGridDirection_StaticEnum, TEXT("EGridDirection"), &Z_Registration_Info_UEnum_EGridDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3444209995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridType_h_86251786(TEXT("/Script/EveOfTheStorm"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
