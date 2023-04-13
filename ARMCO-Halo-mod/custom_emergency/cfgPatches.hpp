// class CfgPatches {
// class CA_ARMCO_ADMIN {
// units[] = {
// 	//Police Units//
// 	"ARMCO_Police_Officer",
// 	"ARMCO_Police_Officer_tl",
// 	"C_P_M12_FAV",

// 	//Rescue Units//
// 	"ARMCO_Rescue_Officer",
// 	"ARMCO_Rescue_Officer_tl",
// 	"C_P_M12_LRV",
// 	"C_R_M12_FAV",
// 	"C_R_M914_RV",
// 	"C_R_M12_Medical",

	//Firefighter Units//
	"ARMCO_Firefighter_Officer",
	"ARMCO_Firefighter_Officer_tl",
	"C_F_M12_RRV",

// 	//Hazmat Units//
// 	};

// weapons[] = {};
// requiredVersion = 0.1;
// requiredAddons[] = {"OPTRE_UNSC_Units", "ace_main","A3_Characters_F_BLUFOR"};
//  };
// 	};
// class CfgEditorCategories {
// 	/*class armco_units // Category class, you point to it in editorCategory
// property
// 	{
// 		displayName = "ARMCO"; // Name visible in the list
// 	};
// 	class armco_units_green_horns // Category class, you point to it in
// editorCategory property
// 	{
// 		displayName = "Insurrectionist (Green Horns)"; // Name visible
// in the list
// 	};*/
// 	class colonial_administration // Category class, you point to it in
// editorCategory property
// 	{
// 		displayName = "Colonial Administration"; // Name visible in the
// list
// 	};
// 	}
// class CfgEditorSubcategories {
// 	/*class armco_units_fancy // Category class, you point to it in
// editorSubcategory property
// 	{
// 		displayName = "Infantry (Ceremony)"; // Name visible in the list
// 	};
// 	class armco_units_infantry // Category class, you point to it in
// editorSubcategory property
// 	{
// 		displayName = "Infantry (Woodland)"; // Name visible in the list
// 	};
// 	class armco_units_training // Category class, you point to it in
// editorSubcategory property
// 	{
// 		displayName = "Infantry (Urban)"; // Name visible in the list
// 	};
// 	class armco_units_camo // Category class, you point to it in
// editorSubcategory property
// 	{
// 		displayName = "Infantry (Camo)"; // Name visible in the list
// 	};
// 	class armco_units_hidden // Category class, you point to it in
// editorSubcategory property
// 	{
// 		displayName = "Infantry (Hidden)"; // Name visible in the list
// 	};
// 	class armco_units_green_horns // Category class, you point to it in
// editorSubcategory property
// 	{
// 		displayName = "Infantry"; // Name visible in the list
// 	};
// 	*/
// 	class c_police
// 	{
// 		displayName = "Colonial Police"; // Name visible in the list
// 	};
// 	class c_rescue
// 	{
// 		displayName = "Colonial Rescue/Medical"; // Name visible in the
// list
// 	};
// 	class c_hazmat
// 	{
// 		displayName = "Colonial Hazmat"; // Name visible in the list
// 	};
// 	class c_firefighter
// 	{
// 		displayName = "Colonial Firefighters"; // Name visible in the
// list
// 	};
// 	class c_police_v
// 	{
// 		displayName = "Colonial Police Vehicles"; // Name visible in the
// list
// 	};
// 	class c_rescue_v
// 	{
// 		displayName = "Colonial Rescue/Medical Vehicles"; // Name
// visible in the list
// 	};
// 	class c_hazmat_v
// 	{
// 		displayName = "Colonial Hazmat Vehicles"; // Name visible in the
// list
// 	};
// 	class c_firefighter_v
// 	{
// 		displayName = "Colonial Firefighters Vehicles"; // Name visible
// in the list
// 	};
// 	};
// class CfgFactionClasses{ //This configures the in-game factions

// 	/*class ARMCO_UNSC
// 	{
// 		dlc = "ARMCO OPTRE Reskins";
// 		displayName
// = "ARMCO";
// 		author
// = "Frosty & Mac"; 		priority
// = 1; 		side
// = 1; 		icon
// = "\OPTRE_Core\data\icon_UNSC_ca.paa"; 		flag
// = "\OPTRE_Core\Data\flag_UNSC_ca.paa"; 		primaryLanguage
// = "EN"; 		backpack_tf_faction_radio_api
// = "OPTRE_Como_pack_2";

// 	};
// 	class ARMCO_Hidden
// 	{
// 		dlc = "ARMCO OPTRE Reskins";
// 		displayName
// = "ARMCO";
// 		author
// = "Frosty & Mac"; 		priority
// = 2; 		side
// = 2; 		icon
// = "\OPTRE_Core\data\icon_UNSC_ca.paa"; 		flag
// = "\OPTRE_Core\Data\flag_UNSC_ca.paa"; 		primaryLanguage
// = "EN"; 		backpack_tf_faction_radio_api
// = "OPTRE_Como_pack_2";

// 	};
// 	class ARMCO_Green_Horns
// 	{
// 		dlc = "ARMCO OPTRE Reskins";
// 		displayName
// = "Insurrectionist (Green Horns)"; 		author
// = "Frosty & Mac"; 		priority
// = 3; 		side
// = 0; 		icon
// = "\OPTRE_Core\data\icon_UNSC_ca.paa"; 		flag
// = "\OPTRE_Core\Data\flag_UNSC_ca.paa"; 		primaryLanguage
// = "EN"; 		backpack_tf_faction_radio_api
// = "OPTRE_Como_pack_2";
// 	};*/
// 	class ARMCO_C_Admin
// 	{
// 		dlc = "ARMCO OPTRE Reskins";
// 		displayName
// = "Colonial Administration"; 		author
// = "Frosty & Mac"; 		priority
// = 4; 		side
// = 2; 		icon
// = "\OPTRE_Core\data\icon_UNSC_ca.paa"; 		flag
// = "\OPTRE_Core\Data\flag_UNSC_ca.paa"; 		primaryLanguage
// = "EN"; 		backpack_tf_faction_radio_api
// = "OPTRE_Como_pack_2";
//         /*personal_tf_faction_radio_api = "some_personal_radio_class";
//         rifleman_tf_faction_radio_api = "some_rifleman_radio_class";
//         airborne_tf_faction_radio_api = "some_airborne_radio_class";*/
// 	};
// 	};
// /*class CfgVehicleClasses{ //This configures vehicle classes such as "Men",
// "Armor", etc.

// 	class ARMCO_Faction
// 	{
// 		dlc ="ARMCO OPTRE Reskins";
// 		displayName
// = "Men"; 		author
// = "Frosty & Mac"; 		scope
// = 2; 		scopeArsenal
// = 2; 		scopeCurator
// = 2;
// 	};

// 	};*/
