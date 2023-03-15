class CfgPatches { 
	class CA_ARMCO_WARTHOG { 
		units[] = {
			"ARMCO_M12_LRV",
			"ARMCO_M914_RV",
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
