
class Man;
class CAManBase : Man
{
    class ACE_SelfActions
    {
        class nln_sheets
        {
            class fire_for_effect
            {
                displayName = "$STR_nln_fire_for_effect_interactions_selfAction";
                condition = "!nln_fire_for_effect_disable";
                statement = "call nln_fire_for_effect_fnc_openMenu;";

                class edit
                {
                    displayName = "$STR_nln_main_interactions_selfActionEdit";
                    condition = "!nln_fire_for_effect_disable";
                    statement = "call nln_fire_for_effect_fnc_openMenu;";
                };

                class show
                {
                    displayName = "$STR_nln_main_interactions_selfActionShow";
                    condition = "!nln_fire_for_effect_disable && (isNull (uiNamespace getVariable ['nln_fire_for_effect', displayNull]))";
                    statement = "call nln_fire_for_effect_fnc_openBackground;";
                };

                class hide
                {
                    displayName = "$STR_nln_main_interactions_selfActionHide";
                    condition = "!nln_fire_for_effect_disable && !(isNull (uiNamespace getVariable ['nln_fire_for_effect', displayNull]))";
                    statement = "call nln_fire_for_effect_fnc_closeBackground;";
                };
            };
        };
    };
};
