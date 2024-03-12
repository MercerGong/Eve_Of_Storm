// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Core/ESCharacterBase.h"
#include "GameFramework/Character.h"
#include "EveOfTheStormCharacter.generated.h"

UCLASS(Blueprintable)
class AEveOfTheStormCharacter : public AESCharacterBase
{
	GENERATED_BODY()

public:
	AEveOfTheStormCharacter();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;
	
	/** Returns SceneComponent subobject **/
	FORCEINLINE class USceneComponent* GetSceneComponent() const { return SceneComponent; }
	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class UFloatingPawnMovement* GetPawnMovement() const { return PawnMovement; }

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = Camera)
	float ZoomSpeed = 50.0f;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = Camera)
	float DefaultZoom = 1400.0f;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = Camera)
	float MinZoom = 1000.0f;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = Camera)
	float MaxZoom = 1600.0f;
	
	UPROPERTY(BlueprintReadWrite, Transient, Category = Camera)
	float TargetZoom;

	UFUNCTION(BlueprintCallable)
	virtual void ZoomCamera(float ZoomAmount);

private:
	/** Scene Object */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* SceneComponent;
	
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	class UFloatingPawnMovement* PawnMovement;
};

