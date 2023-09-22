// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "GridManager.generated.h"
#include "BasicUnit.h"

/**
 * 
 */
UCLASS()
class INTOTHECELL_API AGridManager : public AGameStateBase
{
	GENERATED_BODY()
	
public:

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Game State")
	BasicUnit[][] ;
};
