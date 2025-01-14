// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CurrentPosition = FVector(0.0f, 0.0f, 0.0f);

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	Move();
	
}
void AMyActor::Move()
{
    for (int32 i = 0; i < 10; i++)
    {
        // Generate random steps for x and y
        int32 StepX = Step();
        int32 StepY = Step();

        // Update the current position
        CurrentPosition.X += StepX;
        CurrentPosition.Y += StepY;

        // Log the current position
        LogPosition();
    }
}

// Generates a random step (0 or 1)
int32 AMyActor::Step() const
{
    return FMath::RandRange(0, 1); // Generates either 0 or 1
}

// Logs the current position
void AMyActor::LogPosition() const
{
    UE_LOG(LogTemp, Log, TEXT("Current Position: (X: %d, Y: %d)"),
        static_cast<int32>(CurrentPosition.X),
        static_cast<int32>(CurrentPosition.Y));
}
// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

