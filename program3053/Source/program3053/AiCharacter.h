// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AiCharacter.generated.h"

UCLASS()
class PROGRAM3053_API AAiCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAiCharacter();

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
	float AIHP = 100.0f;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
	float ArrowInjury = 25.0f;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
	float ProbabilitySimulation = 0.5f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FTimerHandle TimerHandle_ShotTimerExpired;

	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	FVector GunOffset;

	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;

	uint32 bCanFire : 1;

	UFUNCTION(BluePrintCallable, Category = "Fire")
	void FireShot(FVector FireDirection);

	void ShotTimerExpired();

	virtual void NotifyActorBeginOverlap(AActor * OtherActor) override;

	void CalculateHealth();

	void IsDead();

	float DoubleDamageProbability();

	UFUNCTION(BlueprintCallable, Category = property)
	void IncreaseDoubleDamageProbability();
};
