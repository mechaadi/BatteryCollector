#include "Pickup.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"



// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootMesh = CreateDefaultSubobject<USceneComponent>(TEXT("ROOT"));
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pickup"));
	bIsActive = true;
	RootComponent = RootMesh;
	PickupMesh->AttachToComponent(RootMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	
}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool APickup::isActive()
{
	return bIsActive;
}

void APickup::setActive(bool NewPickupState)
{
	
}



void APickup::WasCollected_Implementation()
{
	// Log a debug message
	FString PickupDebugString = GetName();
	UE_LOG(LogClass, Log, TEXT("You have collected %s"), *PickupDebugString);

}