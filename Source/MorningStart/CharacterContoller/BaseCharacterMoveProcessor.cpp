// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacterMoveProcessor.h"
void UBaseCharacterMoveProcessor::Move(ABaseCharacterController* Controller, FVector2D MovementVector) {
	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);
	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	Controller->AddMovementInput(ForwardDirection, MovementVector.Y);
	Controller->AddMovementInput(RightDirection, MovementVector.X);
}
