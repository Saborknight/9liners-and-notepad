
class Man;
class CAManBase : Man
{
	class ACE_SelfActions
	{
		class nln_sheets
		{
			class marking_mission
			{
				displayName = "$STR_nln_Interaction_selfActionMarkingMission";
				condition = "nln_marking_mission_enable";
				statement = "";

				class edit
				{
					displayName = "$STR_nln_Interaction_selfActionEdit";
					condition = "nln_marking_mission_enable";
					statement = "call nln_marking_mission_fnc_openMenu;";
				};

				class show
				{
					displayName = "$STR_nln_Interaction_selfActionShow";
					condition = "nln_marking_mission_enable && (isNull (uiNamespace getVariable ['nln_marking_mission', displayNull]))";
					statement = "call nln_marking_mission_fnc_openBackground;";
				};

				class hide
				{
					displayName = "$STR_nln_Interaction_selfActionHide";
					condition = "nln_marking_mission_enable && !(isNull (uiNamespace getVariable ['nln_marking_mission', displayNull]))";
					statement = "call nln_marking_mission_fnc_closeBackground;";
				};
			};
		};
	};
};
