#pragma once

#include "CardDefinition.h"
#include "Engine/DataTable.h"
#include "Card.generated.h"

UENUM(BlueprintType)
enum class ECardRarity : uint8
{
	Common,
	Uncommon,
	Rare,
	Epic,
	Legendary
};

UENUM(BlueprintType)
enum ECardModOp : int
{
	/** Numeric. */
	Additive = 0		UMETA(DisplayName="Add"),
	/** Numeric. */
	Multiplicitive		UMETA(DisplayName = "Multiply"),
	/** Numeric. */
	Division			UMETA(DisplayName = "Divide"),

	/** Other. */
	Override 			UMETA(DisplayName="Override"),	// This should always be the first non numeric ModOp

	// This must always be at the end.
	Max					UMETA(DisplayName="Invalid")
};

USTRUCT(BlueprintType)
struct FCardAttribute
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Attribute Data")
	uint8 ResourceId;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Attribute Data")
	TEnumAsByte<ECardModOp> ModifierOp = ECardModOp::Additive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Attribute Data")
	float EffectValue;
};

USTRUCT(BlueprintType)
struct FCardVisual : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Pack Visual")
	uint8 Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Pack Visual")
	ECardRarity Rarity;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual Data")
	UTexture2D* FrameTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual Data")
	UTexture2D* BackTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual Data")
	UMaterial* FrameMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual Data")
	UMaterial* BackMaterial;
};

USTRUCT(BlueprintType)
struct FCardData : public FTableRowBase
{
	GENERATED_BODY()

	FCardData(): Name(FText::FromString("None")), Description(FText::FromString("None")), Type(0), Rarity(ECardRarity::Common), Image(nullptr)
	{
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Data")
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Data", meta=(MultiLine))
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Data")
	uint8 Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Data")
	ECardRarity Rarity;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Visual")
	UTexture2D* Image;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Effect")
	TArray<FCardAttribute> Attributes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Effect")
	TSubclassOf<class UCardDefinition> Definition;
};

