// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Grid/ESGridActor.h"
#include "Core/Grid/FastNoiseLite.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Core/Game/ESDefaultGameMode.h"
#include <random>
#include "Core/Grid/ESGridHelper.h"
#include "Core/Grid/ESGridSystem.h"


// Sets default values
AESGridActor::AESGridActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Noise = new FastNoiseLite();
	Cells.SetNum(CellSizeSize * CellSizeSize * CellSizeSize);
	GroundPlane = CreateDefaultSubobject<UBoxComponent>(TEXT("Ground Plane"));
	GroundPlane->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	GroundPlane->SetCollisionResponseToAllChannels(ECR_Ignore);
	GroundPlane->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Block);
	GroundPlane->SetRelativeTransform(
		FTransform(FRotator(0, 0, 0),
		FVector(0, 0, -1),
		FVector(1, 1, 1)));
	SetRootComponent(GroundPlane);

	GridScene = CreateDefaultSubobject<USceneComponent>(TEXT("Grid Scene"));
	GridScene->SetupAttachment(RootComponent);

	// GridMeshes = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Grid Meshes"));
	// GridMeshes->SetupAttachment(RootComponent);
	// GridMeshes->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	// GridMeshes->SetCollisionResponseToAllChannels(ECR_Ignore);
	// GridMeshes->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
	// GridMeshes->SetCollisionResponseToChannel(ECC_GameTraceChannel2, ECR_Block);

	TilePreviewMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Preview Meshes"));
	TilePreviewMesh->SetupAttachment(RootComponent);
	TilePreviewMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	TilePreviewMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	TilePreviewMesh->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);

	BackrockMeshes = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Backrock Meshes"));
	BackrockMeshes->SetupAttachment(RootComponent);
	BackrockMeshes->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BackrockMeshes->SetCollisionResponseToAllChannels(ECR_Ignore);
	BackrockMeshes->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
}

// Called when the game starts or when spawned
void AESGridActor::BeginPlay()
{
	Super::BeginPlay();

	Noise->SetFrequency(Frequency);
	Noise->SetNoiseType(FastNoiseLite::NoiseType_ValueCubic);
	Noise->SetFractalType(FastNoiseLite::FractalType_FBm);

	TilePreviewMesh->SetStaticMesh(TileMesh);
	TilePreviewMesh->SetMaterial(0, PreviewMaterials);

	const auto GameMode = Cast<AESDefaultGameMode>(GetWorld()->GetAuthGameMode());
	if (GameMode)
	{
		GridSystem = GameMode->GridSystem;
		GridSystem->OnTilePlaced().AddUObject(this, &AESGridActor::OnTilePlaced);
		GridSystem->OnTileRemoved().AddUObject(this, &AESGridActor::OnTileRemoved);
		GridSystem->OnTileChanged().AddUObject(this, &AESGridActor::OnTileUpdate);
	}
	
	GroundPlane->SetBoxExtent(FVector(GridSize * GridSystem->GridSizeX / 2, GridSize * GridSystem->GridSizeY / 2, 1));
	GridScene->SetRelativeLocation(FVector(-(GridSize * GridSystem->GridSizeX / 2), -(GridSize * GridSystem->GridSizeY / 2), 1)); 
	// GridMeshes->SetRelativeLocation(FVector(-(GridSize * GridSystem->GridSizeX / 2), -(GridSize * GridSystem->GridSizeY / 2), 1));
	TilePreviewMesh->SetRelativeLocation(FVector(-(GridSize * GridSystem->GridSizeX / 2), -(GridSize * GridSystem->GridSizeY / 2), 1));
	BackrockMeshes->SetRelativeLocation(FVector(-(GridSize * GridSystem->GridSizeX / 2), -(GridSize * GridSystem->GridSizeY / 2), 1));

	PreviewMaterial = UMaterialInstanceDynamic::Create(TilePreviewMesh->GetMaterial(0), this);
	TilePreviewMesh->SetMaterial(0, PreviewMaterial);
	
	// Initial Ground Meshes
	for (int i = 1; i < 6; ++i)
	{
		EGroundType Type = static_cast<EGroundType>(i);
		MeshIndex.Emplace(Type, TArray<FIntPoint>());
		UInstancedStaticMeshComponent* MeshInstance = NewObject<UInstancedStaticMeshComponent>(this, *FString("Grid Mesh" + FString::FromInt(i)));
		MeshInstance->SetupAttachment(GridScene);
		MeshInstance->RegisterComponent();
		// MeshInstance->AttachToComponent(GridScene, FAttachmentTransformRules::KeepRelativeTransform);
		MeshInstance->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		MeshInstance->SetCollisionResponseToAllChannels(ECR_Ignore);
		MeshInstance->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
		MeshInstance->SetCollisionResponseToChannel(ECC_GameTraceChannel2, ECR_Block);
		MeshInstance->SetStaticMesh(TileMesh);
		switch (i)
		{
		case 1:
			MeshInstance->ComponentTags.Add(FName("Rock"));
			break;
		case 2:
			MeshInstance->ComponentTags.Add(FName("Sand"));
			break;
		case 3:
			MeshInstance->ComponentTags.Add(FName("Grass"));
			break;
		}
		
		if (GroundMaterials.Contains(Type))
		{
			for (int j = 0; j < GroundMaterials[Type].Materials.Num(); ++j)
			{
				MeshInstance->SetMaterial(j, GroundMaterials[Type].Materials[j]);
			}
		}
		GridMeshes.Add(Type, MeshInstance);
	}
}

void AESGridActor::OnTilePlaced(int X, int Y, EGroundType Type)
{
	const FTransform Transform = GetTileTransform(X, Y);
	//recreate a GridMeshes which store the type and meshinstance of the new terrian
	Generate2DHeightMap(FVector2D(x1,y1),Transform.GetLocation());
	Create3DTileMesh(Type,Transform.GetLocation());
	//UE_LOG(LogTemp, Warning, TEXT("Successfully generated one tile"));
	
}

void AESGridActor::OnTileRemoved(int X, int Y, EGroundType Type)
{
	FIntPoint Point = FIntPoint(X, Y);
	for (int i = 0; i < MeshIndex[Type].Num(); ++i)
	{
		if (Point == MeshIndex[Type][i])
		{
			MeshIndex[Type].RemoveAt(i);
			GridMeshes[Type]->RemoveInstance(i);
			break;
		}
	}
	OnTileDestroyed(Type, X, Y);
}

void AESGridActor::OnTileUpdate(int X, int Y, EGroundType OldType, EGroundType NewType)
{
	OnTileRemoved(X, Y, OldType);
	OnTilePlaced(X, Y, NewType);
}

void AESGridActor::SetPreviewMesh(const FGridTile Tile, EGridDirection Direction)
{
	HidePreviewMesh();

	CurrentTile = Tile;
	CurrentDirection = Direction;

	// auto TextureRen
	TArray<FIntPoint> RotatedShape = UESGridHelper::RotateShape(Tile.Shape, Direction);
	PreviewMaterial->SetTextureParameterValue(FName("Color"), PreviewGroundMaterials[Tile.Type]);
	for (auto p : RotatedShape)
	{
		FTransform Transform = GetTileTransform(p.X, p.Y);
		TilePreviewMesh->AddInstance(Transform);
	}
	
	// auto Type = Tile.Type;
	// if (PreviewGroundMaterials.Contains(Type))
	// {
	// 	TilePreviewMesh->SetVectorParameterValueOnMaterials()
	// 	TilePreviewMesh->SetMaterial(0, GroundMaterials[Type]);
	// }
}

void AESGridActor::UpdatePreviewMesh(int X, int Y)
{
	// Calculate Correct Transform
	FTransform Transform = GetTileTransform(X, Y);
	CurrentTilePreviewLocation = FIntPoint(X, Y);
	const FVector Location = Transform.GetLocation();
	Transform.SetLocation(FVector(Location.X - (GridSize * GridSystem->GridSizeX / 2), Location.Y - (GridSize * GridSystem->GridSizeY / 2), 1));
	Transform.SetScale3D(FVector(1));
	TilePreviewMesh->SetRelativeTransform(Transform);

	// Check if Tile is Valid
	if (GridSystem->HasTile(X, Y, CurrentTile, CurrentDirection))
	{
		TilePreviewMesh->SetScalarParameterValueOnMaterials(MaterialIsErrorParamName, 1);
	}
	else
	{
		TilePreviewMesh->SetScalarParameterValueOnMaterials(MaterialIsErrorParamName, 0);
	}
}

void AESGridActor::UpdatePreviewMeshByWorldLocation(const FVector Location)
{
	const FVector GroundPosition = GetActorTransform().InverseTransformPosition(Location);
	const FVector GridPosition = GridScene->GetRelativeTransform().InverseTransformPosition(GroundPosition);

	const int X = FMath::FloorToInt(GridPosition.X / GridSize);
	const int Y = FMath::FloorToInt(GridPosition.Y / GridSize);
	UpdatePreviewMesh(X, Y);
	// UE_LOG(LogTemp, Warning, TEXT("GridPosition: %s Pos: %d, %d"), *GridPosition.ToString(), X, Y);
}

void AESGridActor::HidePreviewMesh()
{
	TilePreviewMesh->ClearInstances();
	TilePreviewMesh->SetRelativeTransform(FTransform());
}
// store the date 
bool AESGridActor::ConfirmPlacement()
{
	if (GridSystem->CanPlaceTile(CurrentTilePreviewLocation.X, CurrentTilePreviewLocation.Y, CurrentTile, CurrentDirection)
		&& !GridSystem->HasTile(CurrentTilePreviewLocation.X, CurrentTilePreviewLocation.Y, CurrentTile, CurrentDirection))
	{
		GridSystem->PlaceTile(CurrentTilePreviewLocation.X, CurrentTilePreviewLocation.Y, CurrentTile, CurrentDirection); 
		HidePreviewMesh();
		return true;
	}
	return false;
}

FVector AESGridActor::GetCenterLocation()
{
	return FVector(GridSize * GridSystem->GridSizeX / 2, GridSize * GridSystem->GridSizeY / 2, 1);
}

// Called every frame
void AESGridActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FTransform AESGridActor::GetTileTransform(int X, int Y)
{
	float OffsetX = (X * GridSize) + GridOffset;
	float OffsetY = (Y * GridSize) + GridOffset;
	return FTransform(FRotator::ZeroRotator, FVector(OffsetX, OffsetY, 0), TileScale);
}


FVector2D AESGridActor::Generate2DHeightMap(FVector2D NoiceLocation,const FVector Position)
{
	//Frequency = GenerateRandomFloat(0.2f, 0.6f);
	//Noise->SetFrequency(Frequency);

	for (int x = 0; x < CellSizeSize; x++)
	{
		for (int y = 0; y < CellSizeSize; y++)
		{
			 x1=Position.X*5+x;
			 y1=Position.Y*5+y;
		
			
			int Height=1;
			//const int Height = FMath::Clamp(FMath::RoundToInt((Noise->GetNoise(Xpos, ypos) + 1) * CellSizeSize / 2), 0, CellSizeSize);
			//const int Height = FMath::Clamp(FMath::RoundToInt((Noise->GetNoise(x1, y1) + 1) * CellSizeSize / 2), 0, CellSizeSize);

			if(((Noise->GetNoise(x1, y1) + 1) * CellSizeSize / 2)>2.9f){
				Height = 2;
			}
			UE_LOG(LogTemp, Log, TEXT("Cells: %f"), ((Noise->GetNoise(x1, y1) + 1) * CellSizeSize / 2));
			
			for (int z = 0; z < Height; z++)
			{
				//1 MEANS THERE IS A BLOCK AT THAT LOCATION 
				Cells[GetBlockIndex(x,y,z)] = 1;
			}

			for (int z = Height; z < CellSizeSize; z++)
			{
				//0 MEANS THERE IS NO BLOCK AT THAT LOCATION 
				Cells[GetBlockIndex(x,y,z)] = 0;
			}
			
		}
	}

	
	return FVector2D(x1,y1);
	
	FString ArrayContents;
	for (int Element : Cells)
	{
		ArrayContents += FString::FromInt(Element) + TEXT(", ");
	}
	UE_LOG(LogTemp, Log, TEXT("Cells: %s"), *ArrayContents);
}


void AESGridActor:: Create3DTileMesh(EGroundType Type,FVector Position2)
{
	

	for (int x = 0; x < CellSizeSize; x++)
	{
		for (int y = 0; y < CellSizeSize; y++)
		{
			for (int z = 0; z < CellSizeSize; z++)
			{
				const auto Position = FVector(x,y,z);
				if (Cells[GetBlockIndex(x,y,z)] != 0)
				{
					CreateCellGround(Position * 100 * 4 + Position2);
					//CreateCells(Position*100+Position2 ,Type);
					UE_LOG(LogTemp, Warning, TEXT("Try To generate cell once"));
					if(Cells[GetBlockIndex(x,y,z+1)] == 0)
					{
						CreateCells(Position * 100 * 4 + Position2, Type);
						//CreateCellGround(Position*100+Position2);
						//UE_LOG(LogTemp, Warning, TEXT("Position: (%f, %f, %f)"), Position.X, Position.Y, Position.Z);
					}
					
				}
			}
		}
	}
}

void AESGridActor::CreateCells(const FVector Position,EGroundType Type)
{
	// Make it random rotate



	GridMeshes[Type]->AddInstance(FTransform(FRotator::ZeroRotator, Position, TileScale/4));
	//UE_LOG(LogTemp, Log, TEXT("Spawncell at location: %s"), *Position.ToString());
	// Create an FRotator with the random angle for the X-axis
	// Array of possible rotation angles in degrees
	TArray<float> Angles = {0.0f, 90.0f, 180.0f, 270.0f};
	// Choose a random index from the array
	int32 RandomIndex = FMath::RandRange(0, Angles.Num() - 1);

	// Get the random angle
	float RandomAngle = Angles[RandomIndex];
	FRotator RandomRotation(0.0f, RandomAngle, 0.0f);
	int32 NumInstances = GridMeshes[Type]->GetInstanceCount();
	for (int32 InstanceIndex = 0; InstanceIndex < NumInstances; ++InstanceIndex)
	{
		// Get the current transform of the instance
		FTransform InstanceTransform;
		GridMeshes[Type]->GetInstanceTransform(InstanceIndex, InstanceTransform, true);

		// Modify the rotation
		InstanceTransform.ConcatenateRotation(RandomRotation.Quaternion());

		// Update the instance with the new transform
		GridMeshes[Type]->UpdateInstanceTransform(InstanceIndex, InstanceTransform, true, true, true);
	}

	
}

void AESGridActor::CreateCellGround(const FVector Position)
{
	BackrockMeshes->AddInstance(FTransform(FRotator::ZeroRotator, Position, BackrockScale));
	// Array of possible rotation angles in degrees
	TArray<float> Angles = {0.0f, 90.0f, 180.0f, 270.0f};
	// Choose a random index from the array
	int32 RandomIndex = FMath::RandRange(0, Angles.Num() - 1);
	float RandomAngle = Angles[RandomIndex];
	FRotator RandomRotation(0.0f, RandomAngle, 0.0f);
	int32 NumInstances = BackrockMeshes->GetInstanceCount();
	for (int32 InstanceIndex = 0; InstanceIndex < NumInstances; ++InstanceIndex)
	{
		// Get the current transform of the instance
		FTransform InstanceTransform;
		BackrockMeshes->GetInstanceTransform(InstanceIndex, InstanceTransform, true);

		// Modify the rotation
		InstanceTransform.ConcatenateRotation(RandomRotation.Quaternion());

		// Update the instance with the new transform
		BackrockMeshes->UpdateInstanceTransform(InstanceIndex, InstanceTransform, true, true, true);
	}
}




int AESGridActor::GetBlockIndex(const int X, const int Y, const int Z) const
{
	return Z * CellSizeSize * CellSizeSize + Y * CellSizeSize + X;
}

float AESGridActor::GenerateRandomFloat(float min, float max) {
	std::random_device rd;  // Obtain a random number from hardware
	std::mt19937 eng(rd()); // Seed the generator
	std::uniform_real_distribution<> distr(min, max); // Define the range

	return static_cast<float>(distr(eng));
}
