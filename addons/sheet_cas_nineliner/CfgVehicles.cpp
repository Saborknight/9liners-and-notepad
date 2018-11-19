
class Man;
class CAManBase : Man
{
    class ACE_SelfActions
    {
        class nln_sheets
        {
            class cas_nineliner
            {
                displayName = "$STR_nln_cas_nineliner_interactions_selfAction";
                condition = "!nln_cas_nineliner_disable";
                statement = "call nln_cas_nineliner_fnc_openMenu;";

                class edit
                {
                    displayName = "$STR_nln_main_interactions_selfActionEdit";
                    condition = "!nln_cas_nineliner_disable";
                    statement = "call nln_cas_nineliner_fnc_openMenu;";
                };

                class show
                {
                    displayName = "$STR_nln_main_interactions_selfActionShow";
                    condition = "!nln_cas_nineliner_disable && (isNull (uiNamespace getVariable ['nln_cas_nineliner', displayNull]))";
                    statement = "call nln_cas_nineliner_fnc_openBackground;";
                };

                class hide
                {
                    displayName = "$STR_nln_main_interactions_selfActionHide";
                    condition = "!nln_cas_nineliner_disable && !(isNull (uiNamespace getVariable ['nln_cas_nineliner', displayNull]))";
                    statement = "call nln_cas_nineliner_fnc_closeBackground;";
                };
            };
        };
    };
};
