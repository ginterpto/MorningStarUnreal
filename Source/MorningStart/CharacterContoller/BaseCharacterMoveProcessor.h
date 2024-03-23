// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacterController.h"
#include "UObject/Object.h"
#include "BaseCharacterMoveProcessor.generated.h"


/**
 * 
 */
UCLASS()
class MORNINGSTART_API UBaseCharacterMoveProcessor : public UObject {
	GENERATED_BODY()

public:
	virtual void Move(ABaseCharacterController* Controller, FVector2D Value);
};
