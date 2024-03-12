// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Definition/ESCardFragment_Policy.h"

bool UESCardFragment_Policy::CheckRequirement(APlayerController* PC)
{
	bool Result;
	K2_CheckRequirement(PC, Result);
	return Result;
}
