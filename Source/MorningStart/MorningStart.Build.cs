// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MorningStart : ModuleRules
{
	public MorningStart(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
