
class Man;
class CAManBase : Man
{
	class ACE_SelfActions
	{
		class nln_sheets
		{
			class cas_checkin
			{
				displayName = "$STR_nln_Interactions_selfActionCASCheckIn";
				condition = "nln_cas_checkin_enable";
				statement = "";

				class edit
				{
					displayName = "$STR_nln_Interactions_selfActionEdit";
					condition = "nln_cas_checkin_enable";
					statement = "call nln_cas_checkin_fnc_openMenu;";
				};

				class show
				{
					displayName = "$STR_nln_Interactions_selfActionShow";
					condition = "nln_cas_checkin_enable && (isNull (uiNamespace getVariable ['nln_cas_checkin', displayNull]))";
					statement = "call nln_cas_checkin_fnc_openBackground;";
				};

				class hide
				{
					displayName = "$STR_nln_Interactions_selfActionHide";
					condition = "nln_cas_checkin_enable && !(isNull (uiNamespace getVariable ['nln_cas_checkin', displayNull]))";
					statement = "call nln_cas_checkin_fnc_closeBackground;";
				};
			};
		};
	};
};
