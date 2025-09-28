// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChessPawn.generated.h"

UENUM(BlueprintType)
enum class ECouleurPawn : uint8
{
	Noir    UMETA(DisplayName = "Noir"),
	Blanc UMETA(DisplayName = "Blanc")
};

UCLASS()
class CHESSPROJECT_API AChessPawn : public AActor
{
	GENERATED_BODY()

public:
	AChessPawn();
	int32 posX, posY;

	ECouleurPawn Couleur;
	

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
