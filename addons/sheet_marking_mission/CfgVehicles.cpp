
class Man;
class CAManBase : Man
{
    class ACE_SelfActions
    {
        class nln_sheets
        {
            class marking_mission
            {
                displayName = "$STR_nln_marking_mission_interactions_selfAction";
                condition = "!nln_marking_mission_disable";
                statement = "call nln_marking_mission_fnc_openMenu;";

                class edit
                {
                    displayName = "$STR_nln_main_interactions_selfActionEdit";
                    condition = "!nln_marking_mission_disable";
                    statement = "call nln_marking_mission_fnc_openMenu;";
                };

                class show
                {
                    displayName = "$STR_nln_main_interactions_selfActionShow";
                    condition = "!nln_marking_mission_disable && (isNull (uiNamespace getVariable ['nln_marking_mission', displayNull]))";
                    statement = "call nln_marking_mission_fnc_openBackground;";
                };

                class hide
                {
                    displayName = "$STR_nln_main_interactions_selfActionHide";
                    condition = "!nln_marking_mission_disable && !(isNull (uiNamespace getVariable ['nln_marking_mission', displayNull]))";
                    statement = "call nln_marking_mission_fnc_closeBackground;";
                };
            };
        };
    };
};
