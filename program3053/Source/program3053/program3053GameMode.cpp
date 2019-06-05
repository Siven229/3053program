// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "program3053GameMode.h"
#include "program3053Pawn.h"
#include "program3053Controller.h"

Aprogram3053GameMode::Aprogram3053GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = Aprogram3053Pawn::StaticClass();
	PlayerControllerClass = Aprogram3053Controller::StaticClass();
}

