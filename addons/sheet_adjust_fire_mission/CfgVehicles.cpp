
class Man;
class CAManBase : Man
{
	class ACE_SelfActions
	{
		class nln_sheets
		{
			class adjust_fire_mission
			{
				displayName = "$STR_nln_Interactions_selfActionAdjustFireMission";
				condition = "nln_adjust_fire_mission_enable";
				statement = "";

				class edit
				{
					displayName = "$STR_nln_Interactions_selfActionEdit";
					condition = "nln_adjust_fire_mission_enable";
					statement = "call nln_adjust_fire_mission_fnc_openMenu;";
				};

				class show
				{
					displayName = "$STR_nln_Interactions_selfActionShow";
					condition = "nln_adjust_fire_mission_enable && (isNull (uiNamespace getVariable ['nln_adjust_fire_mission', displayNull]))";
					statement = "call nln_adjust_fire_mission_fnc_openBackground;";
				};

				class hide
				{
					displayName = "$STR_nln_Interactions_selfActionHide";
					condition = "nln_adjust_fire_mission_enable && !(isNull (uiNamespace getVariable ['nln_adjust_fire_mission', displayNull]))";
					statement = "call nln_adjust_fire_mission_fnc_closeBackground;";
				};
			};
		};
	};
};
