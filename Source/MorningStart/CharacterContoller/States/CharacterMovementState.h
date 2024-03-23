// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacterState.h"
#include "CharacterMovementState.generated.h"

/**
 * 
 */
UCLASS()
class MORNINGSTART_API UCharacterMovementState : public UBaseCharacterState {
	GENERATED_BODY()
	virtual void Start(UObject* Controller) override;
	virtual void Update(float DeltaTime) override;
	virtual void End() override;
};
