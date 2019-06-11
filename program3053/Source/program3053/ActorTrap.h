// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorTrap.generated.h"

class USphereComponent;

UCLASS()
class PROGRAM3053_API AActorTrap : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorTrap();

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

};