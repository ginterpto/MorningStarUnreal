// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacterState.h"
#include "CharacterRollState.generated.h"

/**
 * 
 */
UCLASS()
class MORNINGSTART_API UCharacterRollState : public UBaseCharacterState {
	GENERATED_BODY()

	float RollTime;
	float StartTime;
	
	virtual void Start(UObject* NewController) override;
	virtual void Update(float DeltaTime) override;
	virtual void End() override;
};
