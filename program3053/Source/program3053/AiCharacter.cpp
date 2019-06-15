// Fill out your copyright notice in the Description page of Project Settings.


#include "AiCharacter.h"
#include "program3053Projectile.h"
#include "MyArrow.h"
#include "TimerManager.h"
#include "Components/StaticMeshComponent.h"
#include "ctime"
#include "cstdlib"
#define random(a,b) (rand()%(b-a+1)+a)

// Sets default values
AAiCharacter::AAiCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bCanFire = true;
	FireRate = 0.1f;
}

// Called when the game starts or when spawned
void AAiCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAiCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//以下功能未实现
void AAiCharacter::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction

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
		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AAiCharacter::ShotTimerExpired, FireRate);
		bCanFire = false;
	}
}
void AAiCharacter::ShotTimerExpired()
{
	bCanFire = true;
}

void AAiCharacter::IsDead()
{
	Destroy();
}

void AAiCharacter::CalculateHealth()
{
	if (AIHP > 100.0f)
	{
		AIHP = 100.0f;
		return;
	}
	else if (AIHP < 0.f || AIHP == 0.f)
	{
		IsDead();
		return;
	}
	else
		AIHP = AIHP;
	return;
}

float AAiCharacter::DoubleDamageProbability()
{
	int RandNumber = 0;
	srand(time(0));
	RandNumber = random(1, 100);
	if (RandNumber >= 1 && RandNumber <= ProbabilitySimulation * 10)
	{
		return 1.4;
	}
	else return 1;
}

void AAiCharacter::IncreaseDoubleDamageProbability()
{
	ProbabilitySimulation += 1.0f;
}

void AAiCharacter::NotifyActorBeginOverlap(AActor * OtherActor)
{
	if (OtherActor->IsA(AMyArrow::StaticClass()))
	{
		AIHP -= ArrowInjury * DoubleDamageProbability();
		CalculateHealth();
	}

}
