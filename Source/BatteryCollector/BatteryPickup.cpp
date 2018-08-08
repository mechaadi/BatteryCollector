// Fill out your copyright notice in the Description page of Project Settings.
#include "BatteryPickup.h"
#include "Pickup.h"

#include "Components/StaticMeshComponent.h"


ABatteryPickup::ABatteryPickup()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	
	GetMesh()->SetSimulatePhysics(true);

}


