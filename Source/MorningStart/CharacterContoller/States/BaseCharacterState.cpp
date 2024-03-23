// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacterState.h"

void UBaseCharacterState::Start(UObject* TheController) {
	Super::Start(TheController);
	this->Controller = Cast<ABaseCharacterController>(TheController);
}