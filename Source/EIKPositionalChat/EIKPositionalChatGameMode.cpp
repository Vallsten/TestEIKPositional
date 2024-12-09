// Copyright Epic Games, Inc. All Rights Reserved.

#include "EIKPositionalChatGameMode.h"
#include "EIKPositionalChatCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEIKPositionalChatGameMode::AEIKPositionalChatGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
