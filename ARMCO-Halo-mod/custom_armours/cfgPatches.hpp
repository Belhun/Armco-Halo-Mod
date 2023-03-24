class CfgPatches {
	class CA_ARMCO_INFANTRY { 
		units[] = {
			//Marine Units//
			"ARMCO_Soldier_O_Alpha",
			"ARMCO_Soldier_O_Alpha_TL",
			"ARMCO_Soldier_O_Alpha_Medic",
			"ARMCO_Soldier_O_Alpha_Corpsman",
			"ARMCO_Soldier_O_Alpha_EOD",
			"ARMCO_Soldier_O_Echo",
			"ARMCO_Soldier_O_Echo_TL",
			"ARMCO_Soldier_O_Echo_Medic",
			"ARMCO_Soldier_O_Echo_Corpsman",
			"ARMCO_Soldier_O_Echo_EOD",
			"ARMCO_Soldier_O_zulu",
			"ARMCO_Soldier_O_Zulu_TL",
			"ARMCO_Soldier_O_zulu_Medic",
			"ARMCO_Soldier_O_Zulu_Corpsman",
			"ARMCO_Soldier_O_Zulu_EOD",
			"ARMCO_Soldier_Camo_zulu",
			"ARMCO_Soldier_Camo_Zulu_TL",
			"ARMCO_Soldier_Camo_Zulu_Medic",
			"ARMCO_Soldier_Camo_Zulu_Corpsman",
			"ARMCO_Soldier_Camo_Zulu_EOD",
			"ARMCO_Soldier_O_Phoenix",
			"ARMCO_Soldier_O_Phoenix_TL",
			"ARMCO_Soldier_Phoenix_Medic",
			"ARMCO_Soldier_Phoenix_Corpsman",
			"ARMCO_Soldier_Phoenix_EOD",
			//Misc Units//
			
			//Security//
			"ARMCO_Soldier_ODST_Security_Medic",
			"ARMCO_Soldier_ODST_Security_RM",
			"ARMCO_Soldier_ODST_Security_TL",
			"ARMCO_Security_Bureau_Officer",
	
			//Green Horns Units//
			"ARMCO_Soldier_ODST_Jackson",
			"ARMCO_Soldier_ODST_Girlie",
			"ARMCO_Soldier_ODST_Sharkface",
			"ARMCO_Soldier_ODST_Jaymes",
			"ARMCO_Soldier_GH",
			"ARMCO_Soldier_GH_TL",
			"ARMCO_Soldier_GH_Medic",
			"ARMCO_Soldier_GH_Corpsman",
			"ARMCO_Soldier_GH_EOD",
	
			//Gear//
			"ARMCO_Kitbag_Black",
			"ARMCO_Kitbag_Alpha",
			"ARMCO_Kitbag_Echo",
			"ARMCO_Kitbag_Zulu",
			"ARMCO_Kitbag_Zulu_Camo",
			"ARMCO_Kitbag_Phoenix",
			"ARMCO_Kitbag_Corpsman",
			"ARMCO_Kitbag_Corpsman_Camo",
			"ARMCO_Kitbag_Medic",
			"ARMCO_Kitbag_Medic_Camo",
			"ARMCO_LR_Bag_BLK",
			"ARMCO_LR_Bag_Alpha",
			"ARMCO_LR_Bag_Echo",
			"ARMCO_LR_Bag_Zulu",
			"ARMCO_LR_Bag_Zulu_Camo",
			"ARMCO_LR_Bag_Phoenix",
			"ARMCO_Rucksack_Soft_Alpha",
			"ARMCO_Rucksack_Soft_Echo",
			"ARMCO_Rucksack_Soft_Zulu",
			"ARMCO_Rucksack_Soft_Phoenix",
			"ARMCO_Rucksack_Soft_Medical",
	
			//Security Gear//
			"ARMCO_ANPRC_515_Security",
			"ARMCO_LR_Bag_Security",
	
			//Custom Backpacks//
			"ARMCO_ANPRC_515_Alpha",
			"ARMCO_ANPRC_515_Echo",
			"ARMCO_ANPRC_515_Zulu",
			"ARMCO_ANPRC_515_Phoenix",
			"ARMCO_ANPRC_515_BLK_Medic",
			"ARMCO_Rucksack_Soft_Boone",
			"ARMCO_ANPRC_515_Frosty",
			"ARMCO_ANPRC_515_Spooks",
			"ARMCO_ANPRC_515_Nutters",
			"ARMCO_ANPRC_515_Shaw",
			"ARMCO_ANPRC_515_Defender",
			"ARMCO_ANPRC_515_Ciro",
			"ARMCO_ANPRC_515_Darman",
			"ARMCO_ANPRC_515_Red",
			"ARMCO_ANPRC_515_Symbol",
			"ARMCO_ANPRC_515_Mini",
			"ARMCO_ANPRC_515_Garf",
			"ARMCO_ANPRC_515_Apples",
			"ARMCO_ANPRC_515_Calamity",
			"ARMCO_ANPRC_515_Cheese",
			"ARMCO_ANPRC_515_Darkness",
			"ARMCO_ANPRC_515_Acanite",
			"ARMCO_ANPRC_515_Raziel",
			"ARMCO_ANPRC_515_Valk",
			"ARMCO_ANPRC_515_Mac",
			"ARMCO_ANPRC_515_Runic",
			"ARMCO_ANPRC_515_Wolffe",
			"ARMCO_ANPRC_515_Addy",
			"ARMCO_ANPRC_515_Merek",
			"ARMCO_ANPRC_515_Belhun",
			"ARMCO_ANPRC_515_Reaper",
	
			//Secrets
	
		};
		weapons[] = 
		{
			"ARMCO_DMR_SR_01X",
		}; 
		requiredVersion = 0.1; 
		requiredAddons[] = {"OPTRE_UNSC_Units","ace_main","A3_Characters_F_BLUFOR"}; 
	}; 
};
class CfgEditorCategories {
	class armco_units // Category class, you point to it in editorCategory property
	{
		displayName = "ARMCO"; // Name visible in the list
	};
	class armco_units_green_horns // Category class, you point to it in editorCategory property
	{
		displayName = "Insurrectionists (Green Horns)"; // Name visible in the list
	};
}
class CfgEditorSubcategories {
	/*
	class armco_units_fancy // Category class, you point to it in editorSubcategory property
	{
		displayName = "Infantry (Ceremony)"; // Name visible in the list
	};
	*/
	class armco_units_infantry // Category class, you point to it in editorSubcategory property
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
	class armco_units_green_horns_s // Category class, you point to it in editorSubcategory property
	{
		displayName = "Special"; // Name visible in the list
	};
	class armco_units_security // Category class, you point to it in editorSubcategory property
	{
		displayName = "Security Troopers"; // Name visible in the list
	};
};
class CfgFactionClasses //This configures the in-game factions
{
	class ARMCO_PMC
	{
		dlc = "ARMCO OPTRE Reskins";
		displayName 																			= "ARMCO";
		author																					= "Frosty & Mac";
		priority 																				= 1;
		side 																					= 1;
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
		icon 																					= "\OPTRE_Core\data\icon_UNSC_ca.paa";
		flag 																					= "\OPTRE_Core\Data\flag_UNSC_ca.paa";
		primaryLanguage 																		= "EN";
		backpack_tf_faction_radio_api 															= "OPTRE_Como_pack_2";
	};
	/*class ARMCO_Hidden
	{
		dlc = "ARMCO OPTRE Reskins";
		displayName 																			= "ARMCO Hidden";
		author																					= "Frosty & Mac";
		priority 																				= 3;
		side 																					= 2;
		icon 																					= "\OPTRE_Core\data\icon_UNSC_ca.paa";
		flag 																					= "\OPTRE_Core\Data\flag_UNSC_ca.paa";
		primaryLanguage 																		= "EN";
		backpack_tf_faction_radio_api 															= "OPTRE_Como_pack_2";
	};*/
	class ARMCO_Green_Horns
	{
		dlc = "ARMCO OPTRE Reskins";
		displayName 																			= "Insurrectionist (Green Horns)";
		author																					= "Frosty & Mac";
		priority 																				= 2;
		side 																					= 0;
		icon 																					= "\OPTRE_Core\data\icon_UNSC_ca.paa";
		flag 																					= "\OPTRE_Core\Data\flag_UNSC_ca.paa";
		primaryLanguage 																		= "EN";
		backpack_tf_faction_radio_api 															= "OPTRE_Como_pack_2";
	};
};
/*
class CfgVehicleClasses //This configures vehicle classes such as "Men", "Armor", etc.
{
	class ARMCO_Faction
	{
		dlc ="ARMCO OPTRE Reskins";
		displayName 																			= "Men";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	
};*/
