#include "script_component.hpp"
class CfgPatches {
	class 4thot_Vehicles
	{
		weapons[] = {};
		units[] =
		{
			"ARMCO_Pelican_Transport",
			"ARMCO_Pelican_Gunship",
			"ARMCO_Pelican_Medevac",
			"GH_Pelican_Transport",
			"GH_Pelican_Gunship",
			"GH_Pelican_Medevac",
			"ARMCO_Static_FG75",
			"ARMCO_M12_LRV",
			"ARMCO_M12G1_LRV",
			"ARMCO_M12A1_LRV",
			"ARMCO_M12R_AA",
			"ARMCO_M914_RV",
			"ARMCO_M12_FAV",
			"ARMCO_M12_FAV_APC",
			"ARMCO_M12_FAV_APC_MED",
			"ARMCO_M813_TT",
			"ARMCO_M12_TD"
		};
		magazines[] =
		{};
		requiredAddons[] =
		{
			"OPTRE_UNSC_Units",
			"ace_main",
			"A3_Characters_F_BLUFOR",
			"OPTRE_Weapons"
		};
		authors[] = {
			"Belhun", "Darknessvoid99"
		};
		url = ECSTRING(main, URL);
		VERSION_CONFIG;
	};
};
class CfgEditorCategories {
	class ARMCO_Armco_Faction {
		displayName = "Armco Faction";
	};
	class ARMCO_Green_Horns_Cat
	{
		displayName = "Green Horns";
	};
};
class CfgEditorSubcategories {
	class ARMCO_Factions_static {
		displayName = "Statics";
	};
	class armco_units_pelicans {
		displayName = "Pelicans";
	};
	class ARMCO_Factions_cars {
		displayName = "Warthogs";
	};
};
class cfgFactionClasses {
	class ARMCO_Armco_Faction {
		icon = "";
		displayName = "Armco Faction";
		side = 1;
		priority = 1;
	};
	class ARMCO_Green_Horns {
		icon = "";
		displayName = "Insurrectionist (Green Horns)";
		side = 0;
		priority = 1;
	};
};

class CfgFunctions
{
	class armco
	{
		class PelicanMagLiftSystem
		{
			file = QPATHTOF(functions);
			class PelicanLoadValidate{};
			class PelicanUnLoadValidate{};
		};
	};
};

class CfgVehicles
{
#include "CfgWarhogs.hpp"
#include "CfgStatics.hpp"
#include "CfgPelican.hpp"
};