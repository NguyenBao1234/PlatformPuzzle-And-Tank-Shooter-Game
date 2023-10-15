// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include"RotaterComponent.h"
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "TriggerBoxComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PGAMECPP_API UTriggerBoxComponent : public UBoxComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UTriggerBoxComponent();
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
		void SetRotaterREF(URotaterComponent* RotatorREF);

	UPROPERTY(EditAnywhere)
		FName TagTrigger = "ObjUnlock";

	URotaterComponent* Rotater;
};



