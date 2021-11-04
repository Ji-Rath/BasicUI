using UnrealBuildTool;
 
public class BasicUI : ModuleRules
{
	public BasicUI(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "UMG", "SlateCore", "Slate", "InputCore" });
 
		PublicIncludePaths.AddRange(new string[] {"BasicUI/Public"});
		PrivateIncludePaths.AddRange(new string[] {"BasicUI/Private"});
	}
}