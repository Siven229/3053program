// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "program3053Pawn.h"
#include "program3053Projectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "iostream"




const FName Aprogram3053Pawn::MoveForwardBinding("MoveForward");
const FName Aprogram3053Pawn::MoveRightBinding("MoveRight");
const FName Aprogram3053Pawn::FireForwardBinding("FireForward");
const FName Aprogram3053Pawn::FireRightBinding("FireRight");

Aprogram3053Pawn::Aprogram3053Pawn()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	
	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->bAbsoluteRotation = true; // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->RelativeRotation = FRotator(-80.f, 0.f, 0.f);
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm

	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;
}


void Aprogram3053Pawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	//PlayerInputComponent->BindAxis(FireForwardBinding);
	//PlayerInputComponent->BindAxis(FireRightBinding);
}

void Aprogram3053Pawn::Tick(float DeltaSeconds)
{
	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = GetActorRotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		
		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}
	
	// Create fire direction vector
	/*
	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	// Try and fire a shot
	FireShot(FireDirection);
	*/
}
/*
void Aprogram3053Pawn::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != NULL)
			{
				// spawn the projectile
				World->SpawnActor<Aprogram3053Projectile>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &Aprogram3053Pawn::ShotTimerExpired, FireRate);

			// try and play the sound if specified
			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			bCanFire = false;
		}
	}
}
void Aprogram3053Pawn::ShotTimerExpired()
{
	bCanFire = true;
}
*/

void Aprogram3053Pawn::LevelUp()
{
	EXP = EXP - EXPMax;
	EXPMax = EXPMax + 50;
	Level = Level + 1;
}

void Aprogram3053Pawn::CalculateLevel()
{
	if (Level == LevelMax)
		return;
	else if (Level < LevelMax)
	{
		LevelUp();
	}
}

void Aprogram3053Pawn::CalculateExperience()
{
	if (EXP < EXPMax) 
	{
		return;
	}
	if (EXP == EXPMax || EXP > EXPMax)
	{
		CalculateLevel();
	}
}

void Aprogram3053Pawn::IsDead()
{
	Destroy();
}

void Aprogram3053Pawn::CalculateHealth()
{
	if (HP > 100)
	{
		HP = 100;
		return;
	}
	else if (HP < 0 || HP == 0)
	{
		IsDead();
		return;
	}
	else
		HP = HP;
	    return;
}

/* void Aprogram3053Pawn::CollisionHP(AActor * OtherActor)
{ 
	//Super::NotifyActorBeginOverlap(OtherActor);
	Destroy();
}*/
void Aprogram3053Pawn::NotifyActorBeginOverlap(AActor * OtherActor)
{
	//Super::NotifyActorBeginOverlap(OtherActor);
	if (OtherActor->IsA(AObjectActor::StaticClass()))
	{
		EXP = EXP + 80;
		CalculateExperience();
		if (Level == 3)
		{
			//UE_LOG(LogTemp, Warning, TEXT("you are dead,your level :%d"), &Level);
		}
	}
	
	else if (OtherActor->IsA(AActorHP::StaticClass()))
	{
		HP = HP - 40;
		CalculateHealth();
	}
}
