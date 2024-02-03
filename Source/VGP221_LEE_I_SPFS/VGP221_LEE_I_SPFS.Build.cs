// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class VGP221_LEE_I_SPFS : ModuleRules
{
	public VGP221_LEE_I_SPFS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"EnhancedInput",
			"Niagara",
			"AIModule",
			"NavigationSystem",
			"GameplayTasks",
			"UMG",
		});
	}
}
