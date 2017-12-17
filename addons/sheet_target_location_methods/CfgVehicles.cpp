
class Man;
class CAManBase : Man
{
	class ACE_SelfActions
	{
		class nln_sheets
		{
			class target_location_methods
			{
				displayName = ["STR_nln_Interaction_selfActionTargetLocationMethods"] call BIS_fnc_localize;
				condition = "nln_target_location_methods_enable";
				statement = "";

				class edit
				{
					displayName = ["STR_nln_Interaction_selfActionEdit"] call BIS_fnc_localize;
					condition = "nln_target_location_methods_enable";
					statement = "call nln_target_location_methods_fnc_openMenu;";
				};

				class show
				{
					displayName = ["STR_nln_Interaction_selfActionShow"] call BIS_fnc_localize;
					condition = "nln_target_location_methods_enable && (isNull (uiNamespace getVariable ['nln_target_location_methods', displayNull]))";
					statement = "call nln_target_location_methods_fnc_openBackground;";
				};

				class hide
				{
					displayName = ["STR_nln_Interaction_selfActionHide"] call BIS_fnc_localize;
					condition = "nln_target_location_methods_enable && !(isNull (uiNamespace getVariable ['nln_target_location_methods', displayNull]))";
					statement = "call nln_target_location_methods_fnc_closeBackground;";
				};
			};
		};
	};
};
