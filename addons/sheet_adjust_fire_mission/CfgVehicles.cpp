
class Man;
class CAManBase : Man
{
    class ACE_SelfActions
    {
        class nln_sheets
        {
            class adjust_fire_mission
            {
                displayName = "$STR_nln_adjust_fire_mission_interactions_selfAction";
                condition = "!nln_adjust_fire_mission_disable";
                statement = "call nln_adjust_fire_mission_fnc_openMenu;";

                class edit
                {
                    displayName = "$STR_nln_main_interactions_selfActionEdit";
                    condition = "!nln_adjust_fire_mission_disable";
                    statement = "call nln_adjust_fire_mission_fnc_openMenu;";
                };

                class show
                {
                    displayName = "$STR_nln_main_interactions_selfActionShow";
                    condition = "!nln_adjust_fire_mission_disable && (isNull (uiNamespace getVariable ['nln_adjust_fire_mission', displayNull]))";
                    statement = "call nln_adjust_fire_mission_fnc_openBackground;";
                };

                class hide
                {
                    displayName = "$STR_nln_main_interactions_selfActionHide";
                    condition = "!nln_adjust_fire_mission_disable && !(isNull (uiNamespace getVariable ['nln_adjust_fire_mission', displayNull]))";
                    statement = "call nln_adjust_fire_mission_fnc_closeBackground;";
                };
            };
        };
    };
};
