// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterMovementState.h"

void UCharacterMovementState::Start(UObject* Controller) {
	Super::Start(Controller);
	UE_LOG(LogTemp, Log, TEXT("Started movement state"));
}

void UCharacterMovementState::Update(float DeltaTime) {
	UE_LOG(LogTemp, Log, TEXT("Updating character movement state"));
}

void UCharacterMovementState::End() {
	UE_LOG(LogTemp, Log, TEXT("Ended character movement state"));
}


