// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "program3053Controller.generated.h"

/**
 * 
 */
UCLASS()
class PROGRAM3053_API Aprogram3053Controller : public APlayerController
{
	GENERATED_BODY()
public:
	bool whether;
	void BeginChangeRotation();
	void StopChangeRotation();
	virtual void SetupInputComponent() override;
	virtual void Tick(float DeltaSeconds) override;
};
