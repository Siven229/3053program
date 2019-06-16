// Fill out your copyright notice in the Description page of Project Settings.


#include "AiCharacter.h"
#include "program3053Projectile.h"
#include "MyArrow.h"
#include "MagicBall.h"
#include "BladeLight.h"
#include "TimerManager.h"
#include "Components/StaticMeshComponent.h"
#include "ctime"
#include "cstdlib"
#include "UObject/ConstructorHelpers.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"
#define random(a,b) (rand()%(b-a+1)+a)

// Sets default values
AAiCharacter::AAiCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> BowHitAudio(TEXT("/Game/TwinStickCPP/Audio/BowHit_Cue"));
	BowHitSound = BowHitAudio.Object;

	static ConstructorHelpers::FObjectFinder<USoundBase> BladeHitAudio(TEXT("/Game/TwinStickCPP/Audio/BladeAttack_Cue"));
	BladeHitSound = BladeHitAudio.Object;

	static ConstructorHelpers::FObjectFinder<USoundBase> HitAudio(TEXT("/Game/TwinStickCPP/Audio/EnemyGetHit_Cue"));
	HitSound = HitAudio.Object;

	static ConstructorHelpers::FObjectFinder<USoundBase> MagicHitAudio(TEXT("/Game/TwinStickCPP/Audio/MagicDamaged_Cue"));
	MagicHitSound = MagicHitAudio.Object;

	static ConstructorHelpers::FObjectFinder<USoundBase> DoubleHitAudio(TEXT("/Game/TwinStickCPP/Audio/BladeDoubleDamaged_Cue"));
	DoubleDamagedSound = DoubleHitAudio.Object;

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
		// try and play the sound if specified
		if (DoubleDamagedSound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(this, DoubleDamagedSound, GetActorLocation());
		}
		return 1.4;
	}
	else return 1;
}

void AAiCharacter::IncreaseDoubleDamageProbability()
{
	ProbabilitySimulation += 2.5f;
}

/*受伤后的反应*/
void AAiCharacter::NotifyActorBeginOverlap(AActor * OtherActor)
{
	if (OtherActor->IsA(AMyArrow::StaticClass()))
	{

		// try and play the sound if specified
		if (HitSound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(this, HitSound, GetActorLocation());
		}
		if (BowHitSound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(this, BowHitSound, GetActorLocation());
		}
		AIHP -= ArrowInjury ;
		CalculateHealth();
	}

	if (OtherActor->IsA(AMagicBall::StaticClass()))
	{

		// try and play the sound if specified
		if (HitSound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(this, HitSound, GetActorLocation());
		}
		if (MagicHitSound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(this, MagicHitSound, GetActorLocation());
		}
		AIHP -= MagicInjury ;
		CalculateHealth();
	}

	if (OtherActor->IsA(ABladeLight::StaticClass()))
	{

		// try and play the sound if specified
		if (BladeHitSound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(this, BladeHitSound, GetActorLocation());
		}
		if (HitSound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(this, HitSound, GetActorLocation());
		}

		AIHP -= BladeInjury ;
		CalculateHealth();
	}


}
