// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacterMoveProcessor.h"
#include "CharacterEmptyMoveProcessor.generated.h"

/**
 * 
 */
UCLASS()
class MORNINGSTART_API UCharacterEmptyMoveProcessor : public UBaseCharacterMoveProcessor {
	GENERATED_BODY()
	virtual void Move(ABaseCharacterController* Controller, FVector2D Value) override;
};
