// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateMachineState.h"
#include "UObject/Object.h"
#include "FiniteStateMachine.generated.h"

/**
 * 
 */
UCLASS()
class MORNINGSTART_API UFiniteStateMachine : public UObject {
	GENERATED_BODY()

public:

	UPROPERTY()
	UObject* Controller;
	
	UPROPERTY()
	UStateMachineState* CurrentState;
	
	void Update(float DeltaTime) const;

	bool ChangeState(UStateMachineState* NextState);

	bool CanChangeState(UStateMachineState* TestState);
	
};
