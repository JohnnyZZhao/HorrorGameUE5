// Copyright Epic Games, Inc. All Rights Reserved.

#include "HorrorGameUE5GameMode.h"
#include "HorrorGameUE5Character.h"
#include "UObject/ConstructorHelpers.h"

AHorrorGameUE5GameMode::AHorrorGameUE5GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
