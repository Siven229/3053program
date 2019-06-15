// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "program3053Pawn.h"
#include "program3053Projectile.h"
#include "MyArrow.h"
#include "EArrow.h"
#include "ObjectActorLittle.h"
#include "ObjectActorMiddle.h"
#include "ObjectActorLarge.h"
#include "ActorHPLittle.h"
#include "EnemyArrow.h"
#include "ActorHPMiddle.h"
#include "ActorHPLarge.h"
#include "ActorTrap.h"
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

Aprogram3053Pawn::Aprogram3053Pawn()
{
	static ConstructorHelpers::FClassFinder<AMyArrow> BP_Arrow(TEXT("Blueprint'/Game/TwinStickCPP/BlueprintClass/projectile/Arrow.Arrow_C'"));
	if (BP_Arrow.Succeeded())
	{
		BPMyActorClass = BP_Arrow.Class;

	}


	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	
	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStickCPP/Audio/BowShoot_Cue"));
	FireSound = FireAudio.Object;

	static ConstructorHelpers::FObjectFinder<USoundBase> HurtAudio(TEXT("/Game/TwinStickCPP/Audio/Hurt_Cue"));
	HurtSound = HurtAudio.Object;

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
	//MoveSpeed = 600.0f + AddMoveSpeed;
	// Weapon
	GunOffset = FVector(180.f, 0.f, 0.f);
	FireRate = 1.0f;
	bCanFire = false;

}

void Aprogram3053Pawn::CanShoot()
{
	bCanFire = true;
	FireShot(FireDirection);
}

void Aprogram3053Pawn::CanNotShoot()
{
	bCanFire = false;
}

void Aprogram3053Pawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);
	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAction("FISD", EInputEvent::IE_Pressed, this, &Aprogram3053Pawn::CanShoot);
	PlayerInputComponent->BindAction("FISD", EInputEvent::IE_Released, this, &Aprogram3053Pawn::CanNotShoot);
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

	FireDirection = GetActorForwardVector();
	FireDirection.Z = 0;
	// Try and fire a shot
	//FireShot(FireDirection);
}


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
				FActorSpawnParameters SpawnInfo;
				// spawn the projectile
				if (ArrowNumber == 1) 
				{
					World->SpawnActor<AMyArrow>(BPMyActorClass, SpawnLocation, FireRotation, SpawnInfo);
				}
				if (ArrowNumber == 2)
				{
					World->SpawnActor<AMyArrow>(BPMyActorClass, SpawnLocation, FireRotation, SpawnInfo);
					World->SpawnActor<AMyArrow>(BPMyActorClass, SpawnLocation, FireRotation, SpawnInfo);
				}
				if (ArrowNumber == 3)
				{
					World->SpawnActor<AMyArrow>(BPMyActorClass, SpawnLocation, FireRotation, SpawnInfo);
					World->SpawnActor<AMyArrow>(BPMyActorClass, SpawnLocation, FireRotation, SpawnInfo);
					World->SpawnActor<AMyArrow>(BPMyActorClass, SpawnLocation, FireRotation, SpawnInfo);
				}
			}

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
void Aprogram3053Pawn::ShotTimerExpired() {
	bCanFire = true;
}

void Aprogram3053Pawn::IncreaseMoveSpeed()
{
	MoveSpeed += 300.0f;
}

void Aprogram3053Pawn::IncreaseHPMax()
{
	HPMax += 40.0f;
	HP += 40.0f;
}

void Aprogram3053Pawn::IncreaseAcquiredEXP()
{
	EXPImproveLittle += 10.0f;
	EXPImproveMiddle += 10.0f;
	EXPImproveLarge += 10.0f;
}

void Aprogram3053Pawn::IncreaseAcquiredHP()
{
	HPRecoveryLittle += 10.0f;
	HPRecoveryMiddle += 10.0f;
	HPRecoveryLarge += 10.0f;
}

void Aprogram3053Pawn::IncreaseDefensivePower()
{
	DefensivePower += 10.0f;
}

void Aprogram3053Pawn::IncreaeeDefendArrowPower()
{
	DefendArrowPower += 3.0f;
}

void Aprogram3053Pawn::IncreaseSkillPoint()
{
	if (SkillPoint > 0)
	{
		SkillPoint = 0;
	}
	SkillPoint = SkillPoint + 1;
}

void Aprogram3053Pawn::DecreaseSkillPoint()
{
	SkillPoint = SkillPoint - 1;
}

/*......*/

void Aprogram3053Pawn::LevelUp()
{
	EXP = EXP - EXPMax;
	EXPMax = EXPMax + 50.0f;
	Level = Level + 1;
	IncreaseSkillPoint();
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

void Aprogram3053Pawn::CalculateHealth()
{
	if (HP > HPMax)
	{
		HP = HPMax;
		return;
	}
	else if (HP < 0.f || HP == 0.f)
	{
		HP = HP;
		return;
	}
	else
		HP = HP;
	    return;
}

void  Aprogram3053Pawn::IncreaseArrowNumber()
{
	ArrowNumber += 1;
}

void Aprogram3053Pawn::NotifyActorBeginOverlap(AActor * OtherActor)
{
	if (OtherActor->IsA(AObjectActorLittle::StaticClass()))
	{
		EXP = EXP + EXPImproveLittle;
		CalculateExperience();
	}

	else if (OtherActor->IsA(AObjectActorMiddle::StaticClass()))
	{
		EXP = EXP + EXPImproveMiddle;
		CalculateExperience();
	}
	
	else if (OtherActor->IsA(AObjectActorLarge::StaticClass()))
	{
		EXP = EXP + EXPImproveLarge;
		CalculateExperience();
	}
	else if (OtherActor->IsA(AActorHPLittle::StaticClass()))
	{
		HP = HP + HPRecoveryLittle;
		CalculateHealth();
	}

	else if (OtherActor->IsA(AActorHPMiddle::StaticClass()))
	{
		HP = HP + HPRecoveryMiddle;
		CalculateHealth();
	}

	else if (OtherActor->IsA(AActorHPLarge::StaticClass()))
	{
		HP = HP + HPRecoveryLarge;
		CalculateHealth();
	}

	else if (OtherActor->IsA(AActorTrap::StaticClass()))
	{
		// try and play the sound if specified
		if (HurtSound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(this, HurtSound, GetActorLocation());
		}
		HP = HP - Damage + DefensivePower;
		CalculateHealth();
	}

	else if (OtherActor->IsA(AEArrow::StaticClass()))
	{
		HP = HP - 10 + DefendArrowPower;
		CalculateHealth();
	}
}

