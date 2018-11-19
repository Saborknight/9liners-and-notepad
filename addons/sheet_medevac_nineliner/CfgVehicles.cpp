
class Man;
class CAManBase : Man
{
    class ACE_SelfActions
    {
        class nln_sheets
        {
            class medevac_nineliner
            {
                displayName = "$STR_nln_medevac_nineliner_interactions_selfAction";
                condition = "!nln_medevac_nineliner_disable";
                statement = "call nln_medevac_nineliner_fnc_openMenu;";

                class edit
                {
                    displayName = "$STR_nln_main_interactions_selfActionEdit";
                    condition = "!nln_medevac_nineliner_disable";
                    statement = "call nln_medevac_nineliner_fnc_openMenu;";
                };

                class show
                {
                    displayName = "$STR_nln_main_interactions_selfActionShow";
                    condition = "!nln_medevac_nineliner_disable && (isNull (uiNamespace getVariable ['nln_medevac_nineliner', displayNull]))";
                    statement = "call nln_medevac_nineliner_fnc_openBackground;";
                };

                class hide
                {
                    displayName = "$STR_nln_main_interactions_selfActionHide";
                    condition = "!nln_medevac_nineliner_disable && !(isNull (uiNamespace getVariable ['nln_medevac_nineliner', displayNull]))";
                    statement = "call nln_medevac_nineliner_fnc_closeBackground;";
                };
            };
        };
    };
};
