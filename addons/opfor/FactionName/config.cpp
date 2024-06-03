#include "../script_component.hpp"
class CfgPatches {
    class 4thot_opfor_FactionName
	{
        addonRootClass="4thot_opfor";

        units[] = {};
        weapons[] =
        {
            "4thot_domsetggage"
        };
        requiredVersion = 0.1;
        requiredAddons[] = {};
    };
};

class CfgWeapons {
    class 4thot_w_a_hmg48h;
    class 4thot_domsetggage : 4thot_w_a_hmg48h
    {
        scope = 2;
        scopeArsenal = 2;
        baseweapon = "4thot_domsetggage";
        displayName = "DOES THIS WORK?";
    };
};