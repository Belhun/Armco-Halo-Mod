class CfgPatches { 
class CA_ARMCO_DRESS { 
units[] = {
//Marine Units//

//Dress Uniform Units//
"ARMCO_Dress_Soldier_Frosty",
"ARMCO_Dress_Soldier_Mac",
"ARMCO_Dress_Soldier_Boone",
"ARMCO_Dress_Soldier_Nutters",
"ARMCO_Dress_Soldier_Defender",
"ARMCO_Dress_Soldier_Shaw",
"ARMCO_Dress_Soldier_Valkyrie",
"ARMCO_Dress_Soldier_Ciro",
"ARMCO_Dress_Soldier_Spooks",
"ARMCO_Dress_Soldier_Super",
"ARMCO_Dress_Soldier_VJ",
//"ARMCO_Dress_Soldier_French",
"ARMCO_Dress_Soldier_Symbol",
"ARMCO_Dress_Soldier_Red",
"ARMCO_Dress_Soldier_Mini",
"ARMCO_Dress_Soldier_Cheese",
"ARMCO_Dress_Soldier_Darman",

"ARMCO_Dress_Soldier_Red",
"ARMCO_Dress_Soldier_TK",
"ARMCO_Dress_Soldier_Raziel",
"ARMCO_Dress_Soldier_Tom",
"ARMCO_Dress_Soldier_Wolffe",
"ARMCO_Dress_Soldier_Gunner",
"ARMCO_Dress_Soldier_Darkness",
"ARMCO_Dress_Soldier_Belhun",
"ARMCO_Dress_Soldier_Raven",
"ARMCO_Dress_Soldier_Acanite",
"ARMCO_Dress_Soldier_Cybran",
"ARMCO_Dress_Soldier_Extortionist",
"ARMCO_Dress_Soldier_Ivan",
"ARMCO_Dress_Soldier_Kellboy",
"ARMCO_Dress_Soldier_Apples",
"ARMCO_Dress_Soldier_Runic",
"ARMCO_Dress_Soldier_Sam",
"ARMCO_Dress_Soldier_Viking",
"ARMCO_Dress_Soldier_Garfield",

"ARMCO_Dress_Soldier_Alpha_One",
"ARMCO_Dress_Soldier_Alpha_Two",
"ARMCO_Dress_Soldier_Alpha_Three",
"ARMCO_Dress_Soldier_Alpha_Four",
"ARMCO_Dress_Soldier_Alpha_Five",
"ARMCO_Dress_Soldier_Six",

"ARMCO_Dress_Soldier_Echo_One",
"ARMCO_Dress_Soldier_Echo_Two",
"ARMCO_Dress_Soldier_Echo_Three",


"ARMCO_Dress_Soldier_Zulu_One",
"ARMCO_Dress_Soldier_Zulu_Two",
"ARMCO_Dress_Soldier_Zulu_Three",

"ARMCO_Dress_Soldier_Phoenix_One",
"ARMCO_Dress_Soldier_Phoenix_Two",
"ARMCO_Dress_Soldier_Phoenix_Three",
//Misc Units//


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
	};
	class armco_units_green_horns // Category class, you point to it in editorCategory property
	{
		displayName = "Insurrectionists (Green Horns)"; // Name visible in the list
	};*/
}
class CfgEditorSubcategories {
	class armco_units_fancy // Category class, you point to it in editorSubcategory property
	{
		displayName = "Infantry (Ceremony)"; // Name visible in the list
	};
	/*class armco_units_infantry // Category class, you point to it in editorSubcategory property
	{
		displayName = "Infantry (Woodland)"; // Name visible in the list
	};
	class armco_units_training // Category class, you point to it in editorSubcategory property
	{
		displayName = "Infantry (Urban)"; // Name visible in the list
	};
	class armco_units_camo // Category class, you point to it in editorSubcategory property
	{
		displayName = "Infantry (Camo)"; // Name visible in the list
	};
	class armco_units_hidden // Category class, you point to it in editorSubcategory property
	{
		displayName = "Infantry (Hidden)"; // Name visible in the list
	};
	class armco_units_green_horns // Category class, you point to it in editorSubcategory property
	{
		displayName = "Infantry"; // Name visible in the list
	};
	class armco_units_security // Category class, you point to it in editorSubcategory property
	{
		displayName = "Security Troopers"; // Name visible in the list
	};*/
};
class CfgFactionClasses //This configures the in-game factions
{
	/*class ARMCO_UNSC
	{
		dlc = "ARMCO OPTRE Reskins";
		displayName 																			= "ARMCO";
		author																					= "Frosty & Mac";
		priority 																				= 1;
		side 																					= 1;
		icon 																					= "\OPTRE_Core\data\icon_UNSC_ca.paa";
		flag 																					= "\OPTRE_Core\Data\flag_UNSC_ca.paa";
		primaryLanguage 																		= "EN";
		backpack_tf_faction_radio_api 															= "OPTRE_Como_pack_2";
	};
	class ARMCO_Hidden
	{
		dlc = "ARMCO OPTRE Reskins";
		displayName 																			= "ARMCO";
		author																					= "Frosty & Mac";
		priority 																				= 1;
		side 																					= 2;
		icon 																					= "\OPTRE_Core\data\icon_UNSC_ca.paa";
		flag 																					= "\OPTRE_Core\Data\flag_UNSC_ca.paa";
		primaryLanguage 																		= "EN";
		backpack_tf_faction_radio_api 															= "OPTRE_Como_pack_2";
	};
	class ARMCO_Green_Horns
	{
		dlc = "ARMCO OPTRE Reskins";
		displayName 																			= "Insurrectionist (Green Horns)";
		author																					= "Frosty & Mac";
		priority 																				= 1;
		side 																					= 0;
		icon 																					= "\OPTRE_Core\data\icon_UNSC_ca.paa";
		flag 																					= "\OPTRE_Core\Data\flag_UNSC_ca.paa";
		primaryLanguage 																		= "EN";
		backpack_tf_faction_radio_api 															= "OPTRE_Como_pack_2";
	};*/
};

class CfgVehicleClasses //This configures vehicle classes such as "Men", "Armor", etc.
{
	/*class ARMCO_Faction
	{
		dlc ="ARMCO OPTRE Reskins";
		displayName 																			= "Men";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	*/
};