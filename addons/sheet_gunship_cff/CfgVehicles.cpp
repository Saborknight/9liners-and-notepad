
class Man;
class CAManBase : Man
{
	class ACE_SelfActions
	{
		class nln_sheets
		{
			class gunship_cff
			{
				displayName = "$STR_nln_Interaction_selfActionGunshipCallForFire";
				condition = "nln_gunship_cff_enable";
				statement = "";

				class edit
				{
					displayName = "$STR_nln_Interaction_selfActionEdit";
					condition = "nln_gunship_cff_enable";
					statement = "call nln_gunship_cff_fnc_openMenu;";
				};

				class show
				{
					displayName = "$STR_nln_Interaction_selfActionShow";
					condition = "nln_gunship_cff_enable && (isNull (uiNamespace getVariable ['nln_gunship_cff', displayNull]))";
					statement = "call nln_gunship_cff_fnc_openBackground;";
				};

				class hide
				{
					displayName = "$STR_nln_Interaction_selfActionHide";
					condition = "nln_gunship_cff_enable && !(isNull (uiNamespace getVariable ['nln_gunship_cff', displayNull]))";
					statement = "call nln_gunship_cff_fnc_closeBackground;";
				};
			};
		};
	};
};
