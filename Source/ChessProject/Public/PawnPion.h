// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ChessPawn.h"
#include "PawnPion.generated.h"

/**
 * 
 */
UCLASS()
class CHESSPROJECT_API APawnPion : public AChessPawn
{
	GENERATED_BODY()

public:
	bool DeplacerPiece(int, int);
	
};
