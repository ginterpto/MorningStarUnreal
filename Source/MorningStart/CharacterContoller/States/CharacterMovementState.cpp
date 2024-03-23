// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterMovementState.h"

void UCharacterMovementState::Start(UObject* NewController) {
	Super::Start(NewController);
	Controller->BindNormalMove();
	Controller->BindNormalLook();
}

void UCharacterMovementState::Update(float DeltaTime) { }

void UCharacterMovementState::End() { }
