// Fill out your copyright notice in the Description page of Project Settings.

#include "ActorHP.h"
#include "program3053Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AActorHP::AActorHP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = MeshComp;

	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> HPAudio(TEXT("/Game/TwinStickCPP/Audio/HP1_Cue"));
	HPSound = HPAudio.Object;

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);//����Ϊ����ѯ
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);//����ײ����Ϊ��Ӧ����ͨ������ѡ�����
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);//�������ͨ������Ϊ�����ص� ,��������
	SphereComp->SetupAttachment(MeshComp);

}

// Called when the game starts or when spawned
void AActorHP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorHP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AActorHP::NotifyActorBeginOverlap(AActor * OtherActor)//����Ƿ��ص�
{
	// try and play the sound if specified
	if (HPSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, HPSound, GetActorLocation());
	}
	Destroy();
}