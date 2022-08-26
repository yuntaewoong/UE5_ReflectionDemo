// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_ReflectionDemoGameMode.h"
#include "UE5_ReflectionDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_ReflectionDemoGameMode::AUE5_ReflectionDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
