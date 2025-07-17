// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5_GraduationWork : ModuleRules
{
	public UE5_GraduationWork(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
            "GameplayTags",
            "GameplayTasks"
        });

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"UE5_GraduationWork",
			"UE5_GraduationWork/Variant_Horror",
			"UE5_GraduationWork/Variant_Shooter",
			"UE5_GraduationWork/Variant_Shooter/AI",
            "GameplayAbilities"
        });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
