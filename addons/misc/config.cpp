#include "script_component.hpp"
class CfgPatches {
    class Armco_4th_misc
	{
        units[] = {};
        misc[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {};
        authors[] = {"Belhun", "Darknessvoid99"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CfgFunctions {
    class overwrite_cargo {
        tag = "ace_cargo";
        class ace_cargo {
            class handleDestroyed {
                file = QPATHTOF(functions\fnc_handleDestroyed.sqf);
            };
        };
    };
};