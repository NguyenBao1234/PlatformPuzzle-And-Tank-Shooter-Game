// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GrabberComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PGAMECPP_API UGrabberComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UGrabberComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
		void Grab();
	UFUNCTION(BlueprintCallable)
		void Release();


private:

	UPROPERTY(EditAnywhere)
		float DistanceCanGrab = 300;

	UPROPERTY(EditAnywhere)
		float DistanceHold = 150;

	UPhysicsHandleComponent* PhysicHandle;
};
