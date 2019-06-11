// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorTrap.h"
#include "program3053Pawn.h"
#include "TimerManager.h"
#include "Engine/StaticMesh.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
AActorTrap::AActorTrap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = MeshComp;



	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);//设置为仅查询
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);//将碰撞设置为响应所有通道，并选择忽略
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);//玩家人物通道，设为发生重叠 ,穿过物体
	SphereComp->SetupAttachment(MeshComp);
}

// Called when the game starts or when spawned
void AActorTrap::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorTrap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
