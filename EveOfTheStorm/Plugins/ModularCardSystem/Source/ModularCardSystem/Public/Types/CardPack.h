#pragma once

#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "CardPack.generated.h"

USTRUCT(BlueprintType)
struct FCardPackVisual
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Pack Visual")
	uint8 Type;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual Data")
	UTexture2D* FrameTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual Data")
	UTexture2D* BackTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual Data")
	UMaterial* FrameMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual Data")
	UMaterial* BackMaterial;
};

UCLASS(BlueprintType)
class UCardPackAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pack Data")
	FName Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pack Data")
	FString Title;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pack Data")
	FString Description;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pack Data")
	UTexture2D* Icon;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pack Data")
	UDataTable* CardTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pack Data")
	TArray<FCardPackVisual> Visuals;
};