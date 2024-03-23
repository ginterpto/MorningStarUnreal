// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterJumpState.h"

#include "CharacterMovementState.h"
#include "GameFramework/PawnMovementComponent.h"

void UCharacterJumpState::Start(UObject* NewController) {
	Super::Start(NewController);
	Controller->Jump();
}

void UCharacterJumpState::Update(float DeltaTime) {
	if(!Controller->GetMovementComponent()->IsFalling()) {
		Controller->StateMachine->ChangeState(NewObject<UCharacterMovementState>());
		Controller->StopJumping();
	}
}

void UCharacterJumpState::End() {
}
