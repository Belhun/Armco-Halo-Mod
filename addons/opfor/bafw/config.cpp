#include "../script_component.hpp"
class CfgPatches
{
    class 4thot_opfor_bafw
	{
        addonRootClass="4thot_opfor";
        weapons[] = {};
        units[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "4thot_opfor"
        };
        authors[] = {"Belhun", "Darknessvoid99"};
        //url = ECSTRING(main,URL);
        //VERSION_CONFIG;
    };
};

class CfgMagazines
{
    class OPTRE_M2_Smoke;

    class 4thot_g_smk_urf_w : OPTRE_M2_Smoke
    {
        scope = 1;
        displayName = "DGS-9 Smoke Grenade (White)";
		ammo = "UK3CB_BAF_SmokeShell";
    };
};