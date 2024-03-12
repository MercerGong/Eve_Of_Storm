// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Grid/ESBuildingActor.h"


// Sets default values
AESBuildingActor::AESBuildingActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
	SetRootComponent(RootSceneComponent);
	
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Building Plane"));
	StaticMeshComponent->SetupAttachment(RootComponent);
	StaticMeshComponent->SetRelativeRotation(FRotator(0, 135.f, 60.f));
	StaticMeshComponent->SetRelativeScale3D(FVector(5.f));
	
	StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	StaticMeshComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
	StaticMeshComponent->SetCollisionResponseToChannel(ECC_GameTraceChannel3, ECR_Block);
}

void AESBuildingActor::Init(FIntPoint InPos, FBuildingData InBuildingData, int ImageIndex, EGridDirection InDirection)
{
	Data = InBuildingData;

	if (DynamicMaterial == nullptr)
	{
		DynamicMaterial = UMaterialInstanceDynamic::Create(BaseMaterial, this);
		StaticMeshComponent->SetMaterial(0, DynamicMaterial);
	}
	
	if (Data.Images.Num() > 0)
	{
		if (ImageIndex < Data.Images.Num())
			DynamicMaterial->SetTextureParameterValue(FName("Color"), Data.Images[ImageIndex]);
		else
			DynamicMaterial->SetTextureParameterValue(FName("Color"),
				Data.Images[FMath::RandRange(0, Data.Images.Num() - 1)]);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Image is empty"))
	}

	StaticMeshComponent->SetRelativeTransform(Data.BuildingTransform);

	SetDirection(InDirection);

	Position = InPos;
	StartPeriod = 0;
}

void AESBuildingActor::TickTurn(int deltaTurn)
{
	OffsetPeriod += deltaTurn;
	for (int i = 1; i < deltaTurn; ++i)
	{
		if (CheckTick(OffsetPeriod + i))
		{
			OnBuildingTriggeredEvent.Broadcast(Data, OffsetPeriod + i);
		}
	}
}

void AESBuildingActor::SetPosition(FIntPoint InPos)
{
	Position = InPos;
}

void AESBuildingActor::SetDirection(EGridDirection InDirection)
{
	Direction = InDirection;

	if ((Data.Shape.Num() < 2 && FMath::RandBool()) || Direction != EGridDirection::North)
	{
		FVector ScaleVec = Data.BuildingTransform.GetScale3D();
		ScaleVec.X *= -1;
		StaticMeshComponent->SetRelativeScale3D(ScaleVec);
	}
}

bool AESBuildingActor::CheckTick(int Turn)
{
	for (auto& p : Data.Rewards)
	{
		if (p.Period == 0)
		{
			continue;
		}
	
		if (Turn % p.Period == 0)
		{
			return true;
		}
	}
	return false;
}

// Called when the game starts or when spawned
void AESBuildingActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AESBuildingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

