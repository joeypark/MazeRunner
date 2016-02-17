// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "MazeRunner.h"
#include "MazeRunnerGameMode.h"
#include "MazeRunnerPlayerController.h"
#include "MazeRunnerCharacter.h"

AMazeRunnerGameMode::AMazeRunnerGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMazeRunnerPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}