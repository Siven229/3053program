// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ActorHP.h"
#include "ObjectActor.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Saber.generated.h"


UCLASS(Blueprintable)
class ASaber : public APawn
{
	GENERATED_BODY()


	/* The mesh component */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* MeshComponent;

	/** The camera */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* CameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

public:
	ASaber();

	FVector FireDirection;

	TSubclassOf<AActor> BPMyActorClass;

	UClass* bpClass;

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		FVector GunOffset;

	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		float FireRate;

	/* The speed our ship moves around the level */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		float MoveSpeed = 600.0f;

	/** Sound to play each time we fire */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
		class USoundBase* FireSound;

	/** Sound to play each time we hurt */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
		class USoundBase* HurtSound;

	// Begin Actor Interface
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End Actor Interface

	/* Fire a shot in the specified direction */
	UFUNCTION(BluePrintCallable, Category = "Function")
		void FireShot(FVector FireDirection);

	/* Handler for the fire timer expiry */
	void ShotTimerExpired();

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		float HPMax = 120.0f;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		float HP = 120.0f;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		float HPRecoveryLittle = 10.0f;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		float HPRecoveryMiddle = 20.0f;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		float HPRecoveryLarge = 40.0f;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		float Damage = 40.0f;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		float EXP = 0.f;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		float EXPMax = 100.0f;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		float EXPImproveLittle = 10.0f;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		float EXPImproveMiddle = 20.0f;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		float EXPImproveLarge = 40.0f;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		float DefensivePower = 0.f;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		float DefendArrowPower = 0.f;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		bool IfIncreaseHP = false;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		int32 LevelInitialization = 1;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		int32 LevelMax = 10;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		int32 Level = 1;

	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		int32 SkillPoint = 0;


	UPROPERTY(Category = property, EditAnywhere, BlueprintReadWrite)
		int32 ArrowNumber = 1;
	// Static names for axis bindings
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	static const FName FireForwardBinding;
	static const FName FireRightBinding;


private:

	/* Flag to control firing  */
	uint32 bCanFire : 1;


	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

public:
	/** Returns ShipMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return MeshComponent; }
	/** Returns CameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }


	virtual void NotifyActorBeginOverlap(AActor * OtherActor) override;

	void CanShoot();

	void CanNotShoot();

	void IsDead();

	void CalculateHealth();

	void LevelUp();

	void CalculateExperience();

	void CalculateLevel();

	void IncreaseSkillPoint();

	UFUNCTION(BlueprintCallable, Category = property)
		void IncreaseArrowNumber();

	UFUNCTION(BlueprintCallable, Category = property)
		void DecreaseSkillPoint();

	UFUNCTION(BlueprintCallable, Category = property)
		void IncreaseMoveSpeed();

	UFUNCTION(BlueprintCallable, Category = property)
		void IncreaseHPMax();

	UFUNCTION(BlueprintCallable, Category = property)
		void IncreaseAcquiredEXP();

	UFUNCTION(BlueprintCallable, Category = property)
		void IncreaseAcquiredHP();

	UFUNCTION(BlueprintCallable, Category = property)
		void IncreaseDefensivePower();

	UFUNCTION(BlueprintCallable, Category = property)
		void IncreaeeDefendArrowPower();

	UFUNCTION(BlueprintCallable, Category = property)
		void IncreaseAllAbilities();

	UFUNCTION(BlueprintCallable, Category = property)
		void IncreaseHPBySecond();

	/*UNCTION(BlueprintCallable, Category = property)
	void IncreaseDefensivePower();

	UFUNCTION(BlueprintCallable, Category = property)
	void IncreaseDoubleDamagePossibility();*/
};