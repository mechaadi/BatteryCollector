// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "BatteryPickup.generated.h"

/**
 * 
 */
UCLASS()
class BATTERYCOLLECTOR_API ABatteryPickup : public APickup
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ABatteryPickup();
	
	// Override the WasCollected function - use Implementation because it's a blueprint natiive event
	void WasCollected_Implementation() override;

	// public way to acccess batteryPower
	float GetPower();

protected:
// sets the amount of power the battery gives to the character
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Power", meta = (BlueprintProtected="true"))
	float BatteryPower;
};
