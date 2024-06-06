#include "script_component.hpp"
class CfgPatches {
	class Armco_4th_misc
	{
		units[] = {};
		misc[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		authors[] = {
			"Belhun", "Darknessvoid99"
		};
		url = ECSTRING(main, URL);
		VERSION_CONFIG;
	};
};

class CfgFunctions {
	class 4thot_Cargo_Setting
	{
		tag = "4thot_Cargo_Setting";
		class Category
		{
			file = QPATHTOF(XEH_preInit.sqf);
		};
	};
	class overwrite_cargo {
		tag = "ace_cargo";
		class ace_cargo {
			class handleDestroyed {
				file = QPATHTOF(functions\fnc_handleDestroyed.sqf);
			};
		};
	};
	class 4thot
	{
		tag = "4thot_Inventory";
		class Category
		{
			file = QPATHTOF(functions\fnc_InventoryMangement.sqf);
		};
	};
	class 4thot_setBase
	{
		tag = "4thot_setBase";
		class Category
		{
			file = QPATHTOF(functions\fnc_SetInventoryBase.sqf);
		};
	};
};