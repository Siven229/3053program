// Fill out your copyright notice in the Description page of Project Settings.


#include "program3053Controller.h"
#include "program3053Pawn.h"

void Aprogram3053Controller::BeginChangeRotation()
{
	whether = true;
}
void Aprogram3053Controller::StopChangeRotation()
{
	whether = false;
}
void Aprogram3053Controller::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAction("ChangeRotation", EInputEvent::IE_Pressed, this, &Aprogram3053Controller::BeginChangeRotation);
	InputComponent->BindAction("ChangeRotation", EInputEvent::IE_Released, this, &Aprogram3053Controller::StopChangeRotation);

}
void Aprogram3053Controller::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (whether == true)
	{
		FHitResult Hit = FHitResult();
		FVector location = GetPawn()->GetActorLocation();
		GetHitResultUnderCursor(ECollisionChannel::ECC_WorldStatic, false, Hit);
		FVector Direction = Hit.Location - location;
		Direction.Z = 0;
		GetPawn()->SetActorRotation(Direction.Rotation());
	}
}

