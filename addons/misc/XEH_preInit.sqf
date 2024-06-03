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


ADDON = true;


