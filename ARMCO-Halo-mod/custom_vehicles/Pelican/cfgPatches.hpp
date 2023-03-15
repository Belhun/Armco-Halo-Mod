class CfgPatches { 
class CA_ARMCO_PELICANS { 
units[] = 
{
	"ARMCO_Pelican_Transport",
	"ARMCO_Pelican_Gunship",
	"ARMCO_Pelican_Medevac",
	"GH_Pelican_Transport",
	"GH_Pelican_Gunship",
	"GH_Pelican_Medevac",
}; 
weapons[] = {}; 
requiredVersion = 0.1; 
requiredAddons[] = {"OPTRE_UNSC_Units", "ace_main", "A3_Characters_F_BLUFOR"}; 
 }; 
};
class CfgEditorCategories {
	/*class armco_units // Category class, you point to it in editorCategory property
	{
		displayName = "ARMCO"; // Name visible in the list
	};*/
};
class CfgEditorSubcategories {
class armco_units_pelicans // Category class, you point to it in editorSubcategory property
	{
		displayName = "ARMCO Pelicans"; // Name visible in the list
	};
	class gh_units_pelicans // Category class, you point to it in editorSubcategory property
	{
		displayName = "Aircraft"; // Name visible in the list
	};
};
class CfgFactionClasses //This configures the in-game factions
{
	/*class ARMCO_UNSC
	{
		dlc = "OPTRE";
		displayName 																			= "ARMCO";
		author																					= "Frosty & Mac";
		priority 																				= 1;
		side 																					= 1;
		icon 																					= "\OPTRE_Core\data\icon_UNSC_ca.paa";
		flag 																					= "\OPTRE_Core\Data\flag_UNSC_ca.paa";
		primaryLanguage 																		= "EN";
		backpack_tf_faction_radio_api 															= "OPTRE_Como_pack_2";
	};*/
};