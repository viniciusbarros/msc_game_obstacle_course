

using UnrealBuildTool;
using System.Collections.Generic;

public class ObstacleCourseEditorTarget : TargetRules
{
	public ObstacleCourseEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "ObstacleCourse" } );
	}
}
