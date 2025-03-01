


#include "Quicksand.h"

// Sets default values
AQuicksand::AQuicksand()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AQuicksand::BeginPlay()
{
	Super::BeginPlay();
	// print a log w/ the self drag speed
	UE_LOG(LogTemp, Log , TEXT("Quicksand reporting for duty! Drag Speed of %f"), DragSpeed);
	
}

// Called every frame
void AQuicksand::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

