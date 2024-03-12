// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EveOfTheStorm : ModuleRules
{
	public EveOfTheStorm(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput", "ModularCardSystem" });
        
        PrivateDependencyModuleNames.AddRange(new string[] { });
	}
}
