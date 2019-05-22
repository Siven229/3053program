// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS(Blueprintable)
class FINALPRO_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()
public:
	//Make a health property
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MyCharacter")
		float Health = 100;
	//Make an isDead property
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "MyCharacter")
		bool isDead = false;

	//Calculate death function(helper)
	virtual void CalculateDead();

	//Calculate health function
	UFUNCTION(BlueprintCallable, Category = "MyCharacter")
		virtual void CalculateHealth(float delta);
#if WITH_EDITOR
	//Editor-centric code for changing properties
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
