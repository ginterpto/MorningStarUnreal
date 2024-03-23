// Fill out your copyright notice in the Description page of Project Settings.


#include "FiniteStateMachine.h"
void UFiniteStateMachine::Update(const float DeltaTime) const {
	if (CurrentState) {
		CurrentState->Update(DeltaTime);
	}
}

bool UFiniteStateMachine::ChangeState(UStateMachineState* NextState) {
	if (CurrentState) {
		CurrentState->End();
		auto Name = CurrentState->GetClass()->GetName();
		FString Message = "Changing from state ";
		Message.Append(Name);
		Message.Append("To state ");
		Message.Append(NextState->GetClass()->GetName());
		UE_LOG(LogTemp, Log, TEXT(""), *Message);
	}
	CurrentState = NextState;
	CurrentState->Start(Controller);
	return true;
}



