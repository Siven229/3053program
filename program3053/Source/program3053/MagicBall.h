// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "program3053Projectile.h"
#include "MagicBall.generated.h"

/**
 * 
 */
UCLASS()
class PROGRAM3053_API AMagicBall : public Aprogram3053Projectile
{
	GENERATED_BODY()
	
	virtual void NotifyActorBeginOverlap(AActor * OtherActor) override;
};