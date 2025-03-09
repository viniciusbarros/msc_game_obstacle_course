

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovablePlatform.generated.h"

UCLASS()
class OBSTACLECOURSE_API AMovablePlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovablePlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	//the speed at which the platform rotates
	UPROPERTY(EditAnywhere)
	float RotationSpeed = 20;
	UPROPERTY(EditAnywhere)
	FVector MovementSpeed = FVector(0, 0, 0);
	UPROPERTY(EditAnywhere)
	float MaximumDistance = 100;

private:
	FVector InitialPosition;
	bool IsMovingForward = true;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//a function that roates the platform in it's z axis
	void RotatePlatform(float DeltaTime);

	void MovePlatform(float DeltaTime);


};
