// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterRollState.h"

#include "CharacterMovementState.h"
#include "MorningStart/CharacterContoller/BaseCharacterMoveProcessor.h"
#include "MorningStart/CharacterContoller/CharacterEmptyMoveProcessor.h"

void UCharacterRollState::Start(UObject* NewController) {
	Super::Start(NewController);
	StartTime = GetWorld()->TimeSeconds;
	Controller->MoveProcessor = NewObject<UCharacterEmptyMoveProcessor>();
	RollTime = Controller->PlayAnimMontage(Controller->RollAnimationMontage) - 0.5f;
}

void UCharacterRollState::Update(float DeltaTime) {
	if (GetWorld()->TimeSeconds - StartTime > RollTime) {
		Controller->StateMachine->ChangeState(NewObject<UCharacterMovementState>());
	} else {
		const FVector Forward = Controller->GetActorForwardVector();
		Controller->AddMovementInput(Forward);
	}
}

void UCharacterRollState::End() {
	Controller->MoveProcessor = NewObject<UBaseCharacterMoveProcessor>();
}
