#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_SETTINGS_AHR "4thot - ARMCO Halo Retexture: misc"



["Car" , "InventoryOpened", LINKFUNC(InventoryManagement)] call CBA_fnc_addClassEventHandler;
["Tank" , "InventoryOpened", LINKFUNC(InventoryManagement)] call CBA_fnc_addClassEventHandler;

ADDON = true;


