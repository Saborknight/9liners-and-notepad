
class Man;
class CAManBase : Man
{
	class ACE_SelfActions
	{
		class nln_sheets
		{
			class fire_for_effect
			{
				displayName = "$STR_nln_Interaction_selfActionFireForEffect";
				condition = "nln_fire_for_effect_enable";
				statement = "";

				class edit
				{
					displayName = "$STR_nln_Interaction_selfActionEdit";
					condition = "nln_fire_for_effect_enable";
					statement = "call nln_fire_for_effect_fnc_openMenu;";
				};

				class show
				{
					displayName = "$STR_nln_Interaction_selfActionShow";
					condition = "nln_fire_for_effect_enable && (isNull (uiNamespace getVariable ['nln_fire_for_effect', displayNull]))";
					statement = "call nln_fire_for_effect_fnc_openBackground;";
				};

				class hide
				{
					displayName = "$STR_nln_Interaction_selfActionHide";
					condition = "nln_fire_for_effect_enable && !(isNull (uiNamespace getVariable ['nln_fire_for_effect', displayNull]))";
					statement = "call nln_fire_for_effect_fnc_closeBackground;";
				};
			};
		};
	};
};
