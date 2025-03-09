


#include "MovablePlatform.h"

// Sets default values
AMovablePlatform::AMovablePlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovablePlatform::BeginPlay()
{
	Super::BeginPlay();
	InitialPosition = GetActorLocation();
	
}

// Called every frame
void AMovablePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RotatePlatform(DeltaTime);
	MovePlatform(DeltaTime);

}

void AMovablePlatform::RotatePlatform(float DeltaTime)
{
	if (RotationSpeed == 0)
	{
		// Avoiding computation if the platform has no rotation setup
		return;
	}

	FRotator NewRotation = GetActorRotation();
	NewRotation.Yaw += DeltaTime * RotationSpeed;
	
	SetActorRotation(NewRotation);
}

void AMovablePlatform::MovePlatform(float DeltaTime)
{
	/*
	* This function moves the platoform in a Vector direction at a speed of MovementSpeed
	* At a maximum distance of MaxiumumDistance. Once it reaches the maximum distance, it reverses direction
	* and keeps moving back and forth.
	*/

	FVector CurrentPosition = GetActorLocation();
	FVector Direction = IsMovingForward ? MovementSpeed : -MovementSpeed;
	FVector NewPosition = CurrentPosition + (Direction * DeltaTime);

	// Calculate the distance moved from the initial position
	float DistanceMoved = FVector::Dist(InitialPosition, NewPosition);

	// Check if the platform has reached the maximum distance
	if (DistanceMoved >= MaximumDistance)
	{
		// Reverse the direction
		IsMovingForward = !IsMovingForward;
		// Clamp the position to the maximum distance
		NewPosition = InitialPosition + (Direction.GetSafeNormal() * MaximumDistance);
	}

	SetActorLocation(NewPosition);

	

}


