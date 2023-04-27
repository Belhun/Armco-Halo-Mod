class CfgPatches {
  class CA_ARMCO_PELICANS {
    units[] = {
        "ARMCO_Pelican_Transport", "ARMCO_Pelican_Gunship",
        "ARMCO_Pelican_Medevac",   "GH_Pelican_Transport",
        "GH_Pelican_Gunship",      "GH_Pelican_Medevac",
    };
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"OPTRE_UNSC_Units", "ace_main",
                        "A3_Characters_F_BLUFOR"};
  };
};
class CfgEditorCategories
{
	class ARMCO_Green_Horns_Cat // Category class, you point to it in editorCategory property
	{
		displayName = "Green Horns"; // Name visible in the list
	};
};
class CfgEditorSubcategories {
  class armco_units_pelicans {
    displayName = "Pelicans";
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