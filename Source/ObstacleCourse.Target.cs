

using UnrealBuildTool;
using System.Collections.Generic;

public class ObstacleCourseTarget : TargetRules
{
	public ObstacleCourseTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "ObstacleCourse" } );
	}
}
