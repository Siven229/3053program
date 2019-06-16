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
	/* Sound to play each time Get Hit */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
		class USoundBase* HitSound;

	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
		class USoundBase* BowHitSound;

	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
		class USoundBase* BladeHitSound;

	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
		class USoundBase* MagicHitSound;

	/* Sound to play each time Get Double Hit */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
		class USoundBase* DoubleDamagedSound;

	//set basic data
	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
	float AIHP = 100.0f;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
	float ArrowInjury = 25.0f;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		float BladeInjury = 50.0f;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		float MagicInjury = 34.0f;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
	float ProbabilitySimulation = 2.0f;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor * OtherActor) override;

	void CalculateHealth();

	void IsDead();

	float DoubleDamageProbability();

	UFUNCTION(BlueprintCallable, Category = property)
	void IncreaseDoubleDamageProbability();



};
