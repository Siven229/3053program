// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "finalproCGameMode.h"
#include "finalproCPawn.h"

AfinalproCGameMode::AfinalproCGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AfinalproCPawn::StaticClass();
}

