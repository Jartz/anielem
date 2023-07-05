// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Aniels_mobile : ModuleRules
{
	public Aniels_mobile(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput","UMG" });
	}
}
