
class Man;
class CAManBase : Man
{
	class ACE_SelfActions
	{
		class nln_sheets
		{
			class medevac_nineliner
			{
				displayName = ["STR_nln_Interaction_selfActionMedevacNineliner"] call BIS_fnc_localize;
				condition = "nln_medevac_nineliner_enable";
				statement = "";

				class edit
				{
					displayName = ["STR_nln_Interaction_selfActionEdit"] call BIS_fnc_localize;
					condition = "nln_medevac_nineliner_enable";
					statement = "call nln_medevac_nineliner_fnc_openMenu;";
				};

				class show
				{
					displayName = ["STR_nln_Interaction_selfActionShow"] call BIS_fnc_localize;
					condition = "nln_medevac_nineliner_enable && (isNull (uiNamespace getVariable ['nln_medevac_nineliner', displayNull]))";
					statement = "call nln_medevac_nineliner_fnc_openBackground;";
				};

				class hide
				{
					displayName = ["STR_nln_Interaction_selfActionHide"] call BIS_fnc_localize;
					condition = "nln_medevac_nineliner_enable && !(isNull (uiNamespace getVariable ['nln_medevac_nineliner', displayNull]))";
					statement = "call nln_medevac_nineliner_fnc_closeBackground;";
				};
			};
		};
	};
};
