// Fill out your copyright notice in the Description page of Project Settings.


#include "ChessProject/Public/ChessPawn.h"


// Sets default values
AChessPawn::AChessPawn()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AChessPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChessPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

