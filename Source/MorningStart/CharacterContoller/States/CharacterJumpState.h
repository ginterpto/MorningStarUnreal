// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacterState.h"
#include "CharacterJumpState.generated.h"

/**
 * 
 */
UCLASS()
class MORNINGSTART_API UCharacterJumpState : public UBaseCharacterState {
	GENERATED_BODY()
	virtual void Start(UObject* NewController) override;
	virtual void Update(float DeltaTime) override;
	virtual void End() override;

};
