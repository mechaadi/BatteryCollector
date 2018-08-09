// Fill out your copyright notice in the Description page of Project Settings.
#include "BatteryPickup.h"
#include "Components/StaticMeshComponent.h"
#include "Pickup.h"

ABatteryPickup::ABatteryPickup()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	
	GetMesh()->SetSimulatePhysics(true);

	//base power level of battery
	BatteryPower = 150.f;


}

void ABatteryPickup::WasCollected_Implementation()
{
	// Use the base pickup behavior
	Super::WasCollected_Implementation();
	// Destroy the battery
	Destroy();
}

float ABatteryPickup::GetPower()
{
	return BatteryPower;
}