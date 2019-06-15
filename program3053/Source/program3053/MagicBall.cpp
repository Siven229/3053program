// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicBall.h"

void AMagicBall::NotifyActorBeginOverlap(AActor * OtherActor)
{
	Destroy();
}