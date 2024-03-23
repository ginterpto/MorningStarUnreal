// Copyright Epic Games, Inc. All Rights Reserved.

#include "MorningStartGameMode.h"
#include "MorningStartCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMorningStartGameMode::AMorningStartGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPerson_BaseCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
