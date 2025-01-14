// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class HELLO_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	// Current position of the actor
	FVector CurrentPosition;

	// Moves the actor randomly 10 times
	void Move();

	// Generates a random step (0 or 1)
	int32 Step() const;

	// Logs the current position
	void LogPosition() const;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};
