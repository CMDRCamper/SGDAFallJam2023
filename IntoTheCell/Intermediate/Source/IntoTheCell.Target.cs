using UnrealBuildTool;

public class IntoTheCellTarget : TargetRules
{
	public IntoTheCellTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V2;
		Type = TargetType.Game;
		ExtraModuleNames.Add("IntoTheCell");
	}
}
