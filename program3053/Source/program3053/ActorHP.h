// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorHP.generated.h"

class USphereComponent;

UCLASS()
class PROGRAM3053_API AActorHP : public AActor
{

	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AActorHP();

protected:
	// Called when the game starts or when spawned

	UPROPERTY(VisibleAnywhere, Category = "Components")
		UStaticMeshComponent * MeshComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
		USphereComponent * SphereComp;

	virtual void BeginPlay() override;

public:	
	// Called every frame

	virtual void Tick(float DeltaTime) override;

	/** Sound to play each time HPpack destory */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
		class USoundBase* HPSound;

	virtual void NotifyActorBeginOverlap(AActor * OtherActor) override;
};
