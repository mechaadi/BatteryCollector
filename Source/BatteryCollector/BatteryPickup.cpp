// Fill out your copyright notice in the Description page of Project Settings.
#include "BatteryPickup.h"
#include "Pickup.h"

#include "Components/StaticMeshComponent.h"


ABatteryPickup::ABatteryPickup()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	
	GetMesh()->SetSimulatePhysics(true);

}

void ABatteryPickup::WasCollected_Implementation()
{
	//Use the base pickup behaviour
	Super::WasCollected_Implementation();
	// Destroy the battery
	Destroy();


}
