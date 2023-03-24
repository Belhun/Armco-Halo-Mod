class CfgPatches { 
	class CA_ARMCO_WARTHOG { 
		units[] = {
			"ARMCO_M12_LRV",
			"ARMCO_M12G1_LRV",
			"ARMCO_M12A1_LRV",
			"ARMCO_M12R_AA",
			"ARMCO_M914_RV",
			"ARMCO_M12_FAV",
			"ARMCO_M12_FAV_APC",
			"ARMCO_M12_FAV_APC_MED",
			"ARMCO_M813_TT"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"OPTRE_UNSC_Units", "ace_main","A3_Characters_F_BLUFOR"};
	};
};
class CfgEditorSubcategories {
	class armco_units_cars // Category class, you point to it in editorSubcategory property
	{
		displayName = "ARMCO Warthogs"; // Name visible in the list
	};
	class gh_units_cars // Category class, you point to it in editorSubcategory property
	{
		displayName = "Warthogs"; // Name visible in the list
	};
};