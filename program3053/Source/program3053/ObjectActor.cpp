// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AObjectActor::AObjectActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = MeshComp;

	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> EXPAudio(TEXT("/Game/TwinStickCPP/Audio/EXP1_Cue"));
	EXPSound = EXPAudio.Object;

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);//设置为仅查询
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);//将碰撞设置为响应所有通道，并选择忽略
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);//玩家人物通道，设为发生重叠 ,穿过物体
	SphereComp->SetupAttachment(MeshComp);


}

// Called when the game starts or when spawned
void AObjectActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AObjectActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AObjectActor::NotifyActorBeginOverlap(AActor * OtherActor)//检测是否重叠
{
	Super::NotifyActorBeginOverlap(OtherActor);	
	// try and play the sound if specified
	if (EXPSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, EXPSound, GetActorLocation());
	}
	Destroy();
}

