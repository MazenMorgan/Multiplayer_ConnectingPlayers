// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()
	


public:
	AMovingPlatform();

	virtual void Tick(float DeltaSeconds) override;
	
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere, Category = "Moving Platforms")
	float Speed;
	
	UPROPERTY(EditAnywhere, Category = "Moving Platforms", Meta = (MakeEditWidget = "true"))
	FVector TargetLocation;

	UPROPERTY(EditAnywhere, Category = "Moving Platforms")
	TArray < class ATargetPoint* > TargetPoints;
private:
	FVector GlobalTargetLocation;
	FVector GlobalStartLocation;

};
