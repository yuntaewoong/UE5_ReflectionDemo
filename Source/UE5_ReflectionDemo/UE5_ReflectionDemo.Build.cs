// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5_ReflectionDemo : ModuleRules
{
	public UE5_ReflectionDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
