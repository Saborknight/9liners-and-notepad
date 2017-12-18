
class Man;
class CAManBase : Man
{
	class ACE_SelfActions
	{
		class nln_sheets
		{
			class medevac_nineliner
			{
				displayName = "$STR_nln_Interaction_selfActionMedevacNineliner";
				condition = "nln_medevac_nineliner_enable";
				statement = "";

				class edit
				{
					displayName = "$STR_nln_Interaction_selfActionEdit";
					condition = "nln_medevac_nineliner_enable";
					statement = "call nln_medevac_nineliner_fnc_openMenu;";
				};

				class show
				{
					displayName = "$STR_nln_Interaction_selfActionShow";
					condition = "nln_medevac_nineliner_enable && (isNull (uiNamespace getVariable ['nln_medevac_nineliner', displayNull]))";
					statement = "call nln_medevac_nineliner_fnc_openBackground;";
				};

				class hide
				{
					displayName = "$STR_nln_Interaction_selfActionHide";
					condition = "nln_medevac_nineliner_enable && !(isNull (uiNamespace getVariable ['nln_medevac_nineliner', displayNull]))";
					statement = "call nln_medevac_nineliner_fnc_closeBackground;";
				};
			};
		};
	};
};
