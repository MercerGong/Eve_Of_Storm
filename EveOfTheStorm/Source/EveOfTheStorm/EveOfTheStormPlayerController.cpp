// Copyright Epic Games, Inc. All Rights Reserved.

#include "EveOfTheStormPlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "EveOfTheStormCharacter.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

AEveOfTheStormPlayerController::AEveOfTheStormPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	CachedDestination = FVector::ZeroVector;
	FollowTime = 0.f;
}

void AEveOfTheStormPlayerController::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}
}

void AEveOfTheStormPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		// Setup SeoectObejct input events
		EnhancedInputComponent->BindAction(SelectObjectClickAction, ETriggerEvent::Started, this, &AEveOfTheStormPlayerController::OnInputStarted);
		EnhancedInputComponent->BindAction(SelectObjectClickAction, ETriggerEvent::Triggered, this, &AEveOfTheStormPlayerController::OnSelectObjectTriggered);
		EnhancedInputComponent->BindAction(SelectObjectClickAction, ETriggerEvent::Completed, this, &AEveOfTheStormPlayerController::OnSelectObjectReleased);
		EnhancedInputComponent->BindAction(SelectObjectClickAction, ETriggerEvent::Canceled, this, &AEveOfTheStormPlayerController::OnSelectObjectReleased);

		// Setup touch input events
		EnhancedInputComponent->BindAction(SelectObjectTouchAction, ETriggerEvent::Started, this, &AEveOfTheStormPlayerController::OnInputStarted);
		EnhancedInputComponent->BindAction(SelectObjectTouchAction, ETriggerEvent::Triggered, this, &AEveOfTheStormPlayerController::OnTouchTriggered);
		EnhancedInputComponent->BindAction(SelectObjectTouchAction, ETriggerEvent::Completed, this, &AEveOfTheStormPlayerController::OnTouchReleased);
		EnhancedInputComponent->BindAction(SelectObjectTouchAction, ETriggerEvent::Canceled, this, &AEveOfTheStormPlayerController::OnTouchReleased);

		EnhancedInputComponent->BindAction(ZoomAction, ETriggerEvent::Triggered, this, &AEveOfTheStormPlayerController::OnZoomTriggered);
		EnhancedInputComponent->BindAction(CameraMoveAction, ETriggerEvent::Triggered, this, &AEveOfTheStormPlayerController::OnCameraMoveTriggered);
		EnhancedInputComponent->BindAction(MouseMoveAction, ETriggerEvent::Triggered, this, &AEveOfTheStormPlayerController::OnMouseMoveTriggered);
	}
}

void AEveOfTheStormPlayerController::OnInputStarted()
{
	// TODO: deselect item?
	StopMovement();
}

// Triggered every frame when the input is held down
void AEveOfTheStormPlayerController::OnSelectObjectTriggered()
{
	// We flag that the input is being pressed
	FollowTime += GetWorld()->GetDeltaSeconds();
	
	// We look for the location in the world where the player has pressed the input
	FHitResult Hit;
	bool bHitSuccessful = false;
	if (bIsTouch)
	{
		bHitSuccessful = GetHitResultUnderFinger(ETouchIndex::Touch1, ECollisionChannel::ECC_Visibility, true, Hit);
	}
	else
	{
		bHitSuccessful = GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit);
	}

	// If we hit a surface, cache the location
	if (bHitSuccessful)
	{
		CachedDestination = Hit.Location;
	}
	
	// // Move towards mouse pointer or touch
	// APawn* ControlledPawn = GetPawn();
	// if (ControlledPawn != nullptr)
	// {
	// 	FVector WorldDirection = (CachedDestination - ControlledPawn->GetActorLocation()).GetSafeNormal();
	// 	ControlledPawn->AddMovementInput(WorldDirection, 1.0, false);
	// }
}

void AEveOfTheStormPlayerController::OnSelectObjectReleased()
{
	// If it was a short press
	// if (FollowTime <= ShortPressThreshold)
	// {
	// 	// We move there and spawn some particles
	// 	UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, CachedDestination);
	// 	UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, FXCursor, CachedDestination, FRotator::ZeroRotator, FVector(1.f, 1.f, 1.f), true, true, ENCPoolMethod::None, true);
	// }

	FollowTime = 0.f;
}

// Triggered every frame when the input is held down
void AEveOfTheStormPlayerController::OnTouchTriggered()
{
	bIsTouch = true;
	// OnSelectObjectTriggered();
}

void AEveOfTheStormPlayerController::OnTouchReleased()
{
	bIsTouch = false;
	// OnSelectObjectReleased();
}

void AEveOfTheStormPlayerController::OnZoomTriggered(const FInputActionValue& Value)
{
	float ZoomValue = Value.Get<float>();
	
	APawn* ControlledPawn = GetPawn();
	AEveOfTheStormCharacter* ESPawn = Cast<AEveOfTheStormCharacter>(ControlledPawn);
	if (ESPawn != nullptr)
	{
		ESPawn->ZoomCamera(-ZoomValue);
	}

	UE_LOG(LogTemp, Warning, TEXT("ZoomValue: %f"), ZoomValue);
}

void AEveOfTheStormPlayerController::OnCameraMoveTriggered(const FInputActionValue& Value)
{
	const FVector2D MovementVector = Value.Get<FVector2D>();

	APawn* ControlledPawn = GetPawn();
	if (ControlledPawn != nullptr)
	{
		// add movement 
		ControlledPawn->AddMovementInput(ControlledPawn->GetActorForwardVector(), MovementVector.Y);
		ControlledPawn->AddMovementInput(ControlledPawn->GetActorRightVector(), MovementVector.X);
	}
}

void AEveOfTheStormPlayerController::OnMouseMoveTriggered(const FInputActionValue& Value)
{
	// TODO: Later we can use this to move the mouse cursor
	const FVector2D MovementVector = Value.Get<FVector2D>();
	
	UE_LOG(LogTemp, Warning, TEXT("Mouse Value: %f, %f"), MovementVector.X, MovementVector.Y);
}
