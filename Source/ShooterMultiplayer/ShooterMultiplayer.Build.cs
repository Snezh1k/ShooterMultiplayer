// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ShooterMultiplayer : ModuleRules
{
	public ShooterMultiplayer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
