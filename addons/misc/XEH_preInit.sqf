#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_SETTINGS_AHR "4thot - ARMCO Halo Retexture: misc"

// ["All" , "Init", LINKFUNC(SetInventoryBase)] call CBA_fnc_addClassEventHandler;
// ["All" , "Init", LINKFUNC(SetInventoryBase)] call CBA_fnc_addClassEventHandler;

// ["All" , "ContainerClosed", LINKFUNC(InventoryManagement)] call CBA_fnc_addClassEventHandler;
// ["All" , "ContainerClosed", LINKFUNC(InventoryManagement)] call CBA_fnc_addClassEventHandler;

[
    "4thot_misc_handleDestroyed", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Disable Overwrite", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    CBA_SETTINGS_AHR, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    true, // data for this setting: [min, max, default, number of shown trailing decimals]
    true, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {

    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

ADDON = true;


