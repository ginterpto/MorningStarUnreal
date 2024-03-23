// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MorningStart/CharacterContoller/BaseCharacterController.h"
#include "MorningStart/FiniteStateMachine/StateMachineState.h"
#include "BaseCharacterState.generated.h"

/**
 * 
 */
UCLASS()
class MORNINGSTART_API UBaseCharacterState : public UStateMachineState {
	GENERATED_BODY()
public:
	UPROPERTY()
	ABaseCharacterController* Controller;
	virtual void Start(UObject* Controller) override;
};
