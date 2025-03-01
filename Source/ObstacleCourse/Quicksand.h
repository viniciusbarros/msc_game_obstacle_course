

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Quicksand.generated.h"

UCLASS()
class OBSTACLECOURSE_API AQuicksand : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AQuicksand();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override

	UPROPERTY(EditAnywhere, Category = "Quicksand Properties");
	float DragSpeed = 1;

};
