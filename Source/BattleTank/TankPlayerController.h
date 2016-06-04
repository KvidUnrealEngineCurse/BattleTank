// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "Public/Tank.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
private:
	ATank *GetControlledTank() const;
	
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	void AimTowardsCrosshair();

	// Return an OUT parameter, true if hit landscape
	bool GetSightRayHitLocation(FVector &HitLocation) const;

	UPROPERTY(EditAnywhere, Category = "Crosshair")
	float CrossHairXLocation = 0.5;

	UPROPERTY(EditAnywhere, Category = "Crosshair")
	float CrossHairYLocation = 0.33333;
};
