// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Grid/ESBuildingManagerActor.h"

#include "Components/InstancedStaticMeshComponent.h"
#include "Core/Grid/ESBuildingActor.h"
#include "Core/Grid/ESGridHelper.h"
#include "Core/Grid/ESGridType.h"


// Sets default values
AESBuildingManagerActor::AESBuildingManagerActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SetRootComponent(RootSceneComponent);

	TilePreviewMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Preview Instance"));
	TilePreviewMesh->SetupAttachment(RootComponent);
	TilePreviewMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	TilePreviewMesh->SetRelativeTransform(
		FTransform(FRotator(0, 0, 0),
		FVector(0, 0, -1),
		FVector(1, 1, 1)));
}

void AESBuildingManagerActor::Init(UESBuildingSystem* InSystem, TSubclassOf<AESBuildingActor> InActorClass)
{
	BuildingSystem = InSystem;

	BuildingSystem->OnTilePlaced().AddUObject(this, &AESBuildingManagerActor::OnBuildingPlaced);
	BuildingSystem->OnTileRemoved().AddUObject(this, &AESBuildingManagerActor::OnBuildingRemoved);

	LocationOrigin = FTransform(FVector(-(GridSize * BuildingSystem->GridSizeX / 2),
				-(GridSize * BuildingSystem->GridSizeY / 2),
				1));

	BuildingActorClass = InActorClass;

	// Spawn Preview
	BuildingPreviewActor = GetWorld()->SpawnActor<AESBuildingActor>(BuildingActorClass);

	if (BuildingPreviewActor)
	{
		BuildingPreviewActor->SetActorEnableCollision(false);
		BuildingPreviewActor->SetActorHiddenInGame(true);
	}
	else
	{
		// UE_LOG(LogTemp, Warning, TEXT("Cannot Spawn Actor"))
	}
}

void AESBuildingManagerActor::OnBuildingPlaced(int X, int Y, FBuildingData InBuildingData)
{
	PreviewPos = FIntPoint(X, Y);
	FTransform Transform = GetBuildDesireTransform(PreviewPos, InBuildingData);
	FVector Position = Transform.GetLocation();
	Position.Z += OffsetZ;
	Transform.SetLocation(Position);
	Transform.SetScale3D(FVector(1.0f));
	
	AESBuildingActor* Actor = GetWorld()->SpawnActor<AESBuildingActor>(BuildingActorClass, Transform);

	if (Actor)
	{
		Actor->Init(FIntPoint(X, Y), InBuildingData, ImageIndex, PreviewDirection);
		BuildingActors.Add(Actor);
	}
}

void AESBuildingManagerActor::OnBuildingRemoved(int Index)
{
	if (BuildingActors.Num() > Index && IsValid(BuildingActors[Index]))
	{
		BuildingActors[Index]->Destroyed();
		BuildingActors[Index] = nullptr;
	}
}

void AESBuildingManagerActor::SetPreviewActor(FBuildingData InBuildingData, EGridDirection Direction)
{
	HidePreviewActor();
	
	PreviewBuildingData = InBuildingData;
	PreviewPos = FIntPoint(0, 0);
	PreviewDirection = Direction;
	const FTransform Transform = GetBuildDesireTransform(FIntPoint(0, 0), InBuildingData);
	
	ImageIndex = FMath::RandRange(0, PreviewBuildingData.Images.Num() - 1);
	if (BuildingPreviewActor)
	{
		FVector Location = Transform.GetLocation();
		Location.Z += OffsetZ;
		BuildingPreviewActor->Init(PreviewPos, PreviewBuildingData, ImageIndex, PreviewDirection);
		BuildingPreviewActor->SetActorHiddenInGame(false);
		BuildingPreviewActor->SetActorLocation(Location);
		BuildingPreviewActor->SetDirection(Direction);
	}

	// auto TextureRen
	TArray<FIntPoint> RotatedShape = UESGridHelper::RotateShape(PreviewBuildingData.Shape, Direction);
	for (auto p : RotatedShape)
	{
		UE_LOG(LogTemp, Warning, TEXT("Point x: %d Y:%d"), p.X, p.Y)
		FTransform TileTransform = GetTileTransform(p.X, p.Y);
		TilePreviewMesh->AddInstance(TileTransform);
	}
}

void AESBuildingManagerActor::UpdatePreviewActor(int X, int Y, EGridDirection Direction)
{
	const FTransform Transform = GetBuildDesireTransform(FIntPoint(X, Y), PreviewBuildingData);
	PreviewPos = FIntPoint(X, Y);
	PreviewDirection = Direction;
	
	// Update Building
	if (BuildingPreviewActor)
	{
		FVector Location = Transform.GetLocation();
		Location.Z += OffsetZ;
		BuildingPreviewActor->SetPosition(PreviewPos);
		BuildingPreviewActor->SetActorLocation(Location);
		BuildingPreviewActor->SetDirection(Direction);
	}
	
	// Calculate Correct Transform
	FTransform TileTransform = GetTileTransform(X, Y);
	const FVector Location = TileTransform.GetLocation();
	TileTransform.SetLocation(FVector(Location.X - (GridSize * BuildingSystem->GridSizeX / 2), Location.Y - (GridSize * BuildingSystem->GridSizeY / 2), 1));
	TileTransform.SetScale3D(FVector(1));
	TilePreviewMesh->SetRelativeTransform(TileTransform);
	
	if (BuildingSystem->CanPlaceBuilding(PreviewPos, PreviewBuildingData, Direction))
	{
		TilePreviewMesh->SetScalarParameterValueOnMaterials(MaterialIsErrorParamName, 0);
	}
	else
	{
		TilePreviewMesh->SetScalarParameterValueOnMaterials(MaterialIsErrorParamName, 1);
	}
}

void AESBuildingManagerActor::UpdatePreviewActorByWorldLocation(const FVector Location)
{
	const FVector GroundPosition = LocationOrigin.InverseTransformPosition(Location);
	
	const int X = FMath::FloorToInt(GroundPosition.X / GridSize);
	const int Y = FMath::FloorToInt(GroundPosition.Y / GridSize);
	UpdatePreviewActor(X, Y, PreviewDirection);
}

void AESBuildingManagerActor::HidePreviewActor()
{
	TilePreviewMesh->ClearInstances();
	TilePreviewMesh->SetRelativeTransform(FTransform());
	if (BuildingPreviewActor)
	{
		BuildingPreviewActor->SetActorHiddenInGame(true);
	}
}

bool AESBuildingManagerActor::ConfirmPlacement()
{
	HidePreviewActor();
	
	if (BuildingSystem->CanPlaceBuilding(PreviewPos, PreviewBuildingData, PreviewDirection))
	{
		BuildingSystem->PlaceBuilding(PreviewPos, PreviewBuildingData, PreviewDirection);
		return true;
	}
	return false;
}

FTransform AESBuildingManagerActor::GetBuildDesireTransform(FIntPoint Pos, FBuildingData& BuildingInfo)
{
	FIntPoint Center = UESGridHelper::CalculateCenter(BuildingInfo.Shape);

	float OffsetX = (Pos.X * GridSize) + Center.X * GridSize + OffsetBuilding.X;
	float OffsetY = (Pos.Y * GridSize) + Center.Y * GridSize + OffsetBuilding.Y;
	return FTransform(FRotator::ZeroRotator, LocationOrigin.TransformPosition(FVector(OffsetX, OffsetY, 0)), TileScale);
}

FVector AESBuildingManagerActor::SetGetGroundOffset()
{
	return FVector(GridSize * BuildingSystem->GridSizeX / 2, GridSize * BuildingSystem->GridSizeY / 2, 1);
}

// Called when the game starts or when spawned
void AESBuildingManagerActor::BeginPlay()
{
	Super::BeginPlay();

	TilePreviewMesh->SetStaticMesh(TileMesh);
	TilePreviewMesh->SetMaterial(0, TileMaterial);
}

// Called every frame
void AESBuildingManagerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FTransform AESBuildingManagerActor::GetTileTransform(int X, int Y)
{
	float OffsetX = (X * GridSize) + GridOffset;
	float OffsetY = (Y * GridSize) + GridOffset;
	return FTransform(
		FRotator::ZeroRotator,
		FVector(OffsetX, OffsetY, 0),
		TileScale
	);
}

