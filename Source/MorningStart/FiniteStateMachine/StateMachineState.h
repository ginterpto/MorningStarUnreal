// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StateMachineState.generated.h"

/**
 * 
 */
UCLASS()
class MORNINGSTART_API UStateMachineState : public UObject {
	GENERATED_BODY()
public:
	UFUNCTION()
	virtual void Start(UObject* Controller);
	UFUNCTION()
	virtual void Update(float DeltaTime);
	UFUNCTION()
	virtual void End();
};
