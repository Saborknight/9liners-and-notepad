
class Man;
class CAManBase : Man
{
	class ACE_SelfActions
	{
		class nln_sheets
		{
			class cas_nineliner
			{
				displayName = "$STR_nln_Interactions_selfActionCASNineliner";
				condition = "nln_cas_nineliner_enable";
				statement = "";

				class edit
				{
					displayName = "$STR_nln_Interactions_selfActionEdit";
					condition = "nln_cas_nineliner_enable";
					statement = "call nln_cas_nineliner_fnc_openMenu;";
				};

				class show
				{
					displayName = "$STR_nln_Interactions_selfActionShow";
					condition = "nln_cas_nineliner_enable && (isNull (uiNamespace getVariable ['nln_cas_nineliner', displayNull]))";
					statement = "call nln_cas_nineliner_fnc_openBackground;";
				};

				class hide
				{
					displayName = "$STR_nln_Interactions_selfActionHide";
					condition = "nln_cas_nineliner_enable && !(isNull (uiNamespace getVariable ['nln_cas_nineliner', displayNull]))";
					statement = "call nln_cas_nineliner_fnc_closeBackground;";
				};
			};
		};
	};
};
