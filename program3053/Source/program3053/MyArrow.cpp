// Fill out your copyright notice in the Description page of Project Settings.


#include "MyArrow.h"

void AMyArrow::NotifyActorBeginOverlap(AActor * OtherActor)
{
	Destroy();
}