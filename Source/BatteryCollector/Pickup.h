// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class BATTERYCOLLECTOR_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere)
		bool bIsActive;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return PickupMesh; }

	UFUNCTION(BlueprintPure, Category = "pickup")
		bool isActive();

	UFUNCTION(BlueprintCallable, Category = "pickup")
	void setActive(bool NewPickupState);

	//fucntion to call when pickup is collected
	UFUNCTION(BlueprintNativeEvent, Category = "pickup")
		void WasCollected();
		virtual void WasCollected_Implementation();

private:
	UPROPERTY(EditAnywhere, Category="Pickup")
	class UStaticMeshComponent* PickupMesh;
	
	UPROPERTY(EditAnywhere, Category = "PickupR")
		class USceneComponent* RootMesh;
	
};
