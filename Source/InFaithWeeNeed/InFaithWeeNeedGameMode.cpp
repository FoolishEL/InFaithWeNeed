// Copyright Epic Games, Inc. All Rights Reserved.

#include "InFaithWeeNeedGameMode.h"
#include "InFaithWeeNeedCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInFaithWeeNeedGameMode::AInFaithWeeNeedGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
