// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	auto ControllerTank = GetControllerTank();
	if (!ControllerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Not posesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Possessing %s"), *ControllerTank->GetName());
	}

	UE_LOG(LogTemp, Warning, TEXT("Player Controller begin play!"));
}

ATank* ATankPlayerController::GetControllerTank() const
{
	return Cast<ATank>(GetPawn());
}