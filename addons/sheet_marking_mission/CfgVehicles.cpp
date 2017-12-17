
class Man;
class CAManBase : Man
{
	class ACE_SelfActions
	{
		class nln_sheets
		{
			class marking_mission
			{
				displayName = ["STR_nln_Interaction_selfActionMarkingMission"] call BIS_fnc_localize;
				condition = "nln_marking_mission_enable";
				statement = "";

				class edit
				{
					displayName = ["STR_nln_Interaction_selfActionEdit"] call BIS_fnc_localize;
					condition = "nln_marking_mission_enable";
					statement = "call nln_marking_mission_fnc_openMenu;";
				};

				class show
				{
					displayName = ["STR_nln_Interaction_selfActionShow"] call BIS_fnc_localize;
					condition = "nln_marking_mission_enable && (isNull (uiNamespace getVariable ['nln_marking_mission', displayNull]))";
					statement = "call nln_marking_mission_fnc_openBackground;";
				};

				class hide
				{
					displayName = ["STR_nln_Interaction_selfActionHide"] call BIS_fnc_localize;
					condition = "nln_marking_mission_enable && !(isNull (uiNamespace getVariable ['nln_marking_mission', displayNull]))";
					statement = "call nln_marking_mission_fnc_closeBackground;";
				};
			};
		};
	};
};
