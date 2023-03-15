#include "CfgPatches.hpp"
class CfgVehicles
{
	class OPTRE_M12_FAV;
	class OPTRE_M12_FAV_APC;
	class OPTRE_M813_TT;
	class OPTRE_M12_LRV;
	class OPTRE_M12G1_LRV;
	class OPTRE_M12A1_LRV;
	class OPTRE_M12R_AA;
	class OPTRE_M914_RV;

	class ARMCO_M12_LRV: OPTRE_M12_LRV
	{
		displayName="[ARMCO] M12 Warthog LRV (MG)";
		author="Belhun";
		side=1;
		scope=2;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		editorCategory = "armco_units";
		editorSubcategory = "armco_units_cars";
		hiddenSelectionsTextures[]=
			{
				"\custom_vehicles\Warthog\data\M12HogMaav_extupper_armco_co.paa",
				"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
				"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa",
				"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
				"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
				"\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa",
				"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
			};
		class textureSources
		{
			class colorstand
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colornight
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorwood
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extupper_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extunder_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\m12_turret_woodland_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsnow
			{
				displayName="White";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsand
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extupper_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\m12_turret_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorarmco
			{
				displayName="Armco";
				author="Belhun";
				textures[]=
				{
					"\custom_vehicles\Warthog\data\M12HogMaav_extupper_armco_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			textureList[]=
			{
				"colorstand",
				1,
				"colornight",
				1,
				"colorsand",
				1,
				"colorsnow",
				1,
				"colorwood",
				1,
				"colorarmco",
				1
			};
			tf_encryptionCode 	= "tf_west_radio_code";
			tf_dialog 			= "rt1523g_radio_dialog";
			tf_subtype 			= "digital_lr";
			tf_range 			= 25000;
			tf_dialogUpdate 	= "call TFAR_fnc_updateLRDialogToChannel;";
			tf_hasLRradio	 	= 1;
		};
		
	};
	class ARMCO_M914_RV: OPTRE_M914_RV
	{
		displayName="[ARMCO] M914 Repair Hog";
		author="Belhun";
		side=1;
		scope=2;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		editorCategory = "armco_units";
		editorSubcategory = "armco_units_cars";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"camo_details",
			"camo_interior",
			"camo_net"
		};
		hiddenSelectionsTextures[]=
		{
			"\custom_vehicles\Warthog\data\M12HogMaav_extupper_armco_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\net_ca.paa"
		};
		class textureSources
		{
			class colorstand
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colornight
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorwood
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extupper_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extunder_wood_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsnow
			{
				displayName="White";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsand
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extupper_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorarmco
			{
				displayName="Armco";
				author="Belhun";
				textures[]=
				{
					"\custom_vehicles\Warthog\data\M12HogMaav_extupper_armco_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
				};
			};
		};
		textureList[]=
		{
			"colorstand",
			1,
			"colornight",
			1,
			"colorsand",
			1,
			"colorsnow",
			1,
			"colorwood",
			1,
			"colorarmco",
			1
		};
		tf_encryptionCode 	= "tf_west_radio_code";
		tf_dialog 			= "rt1523g_radio_dialog";
		tf_subtype 			= "digital_lr";
		tf_range 			= 25000;
		tf_dialogUpdate 	= "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio	 	= 1;
	};
};


/*
class ARMCO_M914_RV: OPTRE_M914_RV
	{
		features="Randomization: No									<br />Camo selections: 3 - top of hull, bottom of hull, turret									<br />Script door sources: None									<br />Script animations: HideTurret									<br />Executed scripts: None 									<br />Firing from vehicles: No									<br />Slingload: Yes									<br />Cargo proxy indexes: 1 to 8";
		side=1;
		scope=2;
		scopeCurator = 2;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		displayName="[ARMCO] M12 Warthog Recovery";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"clan",
			"clan_text",
			"insignia",
			"attach_apc",
			"attach_mg",
			"attach_troop"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_vehicles\Warthog\data\warthog_armco_black_CO.paa"
		};
		class TextureSources
		{
		class clean 
		{
			displayName="Factory New";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\Warthog_armco_black_clean_CO.paa",
			};
		};
		factions[]=
		{
			"BLU_F",
			"BLU_T_F",
			"ARMCO_UNSC"
		};
		class dirty
		{
			displayName="Battle Tested";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\warthog_armco_black_CO.paa",
			};
		};
		
		};
		textureList[]=
		{	
			"clean",
			0,
			"dirty",
			1,
		};
	editorCategory = "armco_units";
	editorSubcategory = "armco_units_cars";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;	
	};
class ARMCO_M12_LRV: OPTRE_M12_LRV
	{
		features="Randomization: No									<br />Camo selections: 3 - top of hull, bottom of hull, turret									<br />Script door sources: None									<br />Script animations: HideTurret									<br />Executed scripts: None 									<br />Firing from vehicles: No									<br />Slingload: Yes									<br />Cargo proxy indexes: 1 to 8";
		side=1;
		scope=2;
		scopeCurator = 2;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		displayName="[ARMCO] M12 Warthog LRV (MG)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_vehicles\Warthog\data\warthog_armco_black_CO.paa",
			"custom_vehicles\Warthog\data\warthog_addons_armco_black_CO.paa"
		};
		class TextureSources
		{
		class clean 
		{
			displayName="Factory New";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\Warthog_armco_black_clean_CO.paa",
			"custom_vehicles\Warthog\data\warthog_addons_armco_black_CO.paa"
			};
		};
		factions[]=
		{
			"BLU_F",
			"BLU_T_F",
			"ARMCO_UNSC"
		};
		class dirty
		{
			displayName="Battle tested";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\warthog_armco_black_CO.paa",
			"custom_vehicles\Warthog\data\warthog_addons_armco_black_CO.paa"
			};
		};
		
		};
		textureList[]=
		{	
			"clean",
			0,
			"dirty",
			1,
		};
	editorCategory = "armco_units";
	editorSubcategory = "armco_units_cars";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;	
	};
class ARMCO_M12_Medical: OPTRE_M12_FAV_APC
	{
		features="Randomization: No									<br />Camo selections: 3 - top of hull, bottom of hull, turret									<br />Script door sources: None									<br />Script animations: HideTurret									<br />Executed scripts: None 									<br />Firing from vehicles: No									<br />Slingload: Yes									<br />Cargo proxy indexes: 1 to 8";
		side=1;
		scope=2;
		scopeCurator = 2;
		attendant = 1;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		displayName="[ARMCO] M12 Warthog Medical";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_vehicles\Warthog\data\warthog_armco_black_CO.paa",
			"custom_vehicles\Warthog\data\warthog_armco_apc.paa"
		};
		class TextureSources
		{
		class clean 
		{
			displayName="Factory New";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\Warthog_armco_black_clean_CO.paa",
			"custom_vehicles\Warthog\data\warthog_armco_apc.paa"
			};
		};
		factions[]=
		{
			"BLU_F",
			"BLU_T_F",
			"ARMCO_UNSC"
		};
		class dirty
		{
			displayName="Battle Tested";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\warthog_armco_black_CO.paa",
			"custom_vehicles\Warthog\data\warthog_armco_apc.paa"
			};
		};
		
		};
		textureList[]=
		{	
			"clean",
			0,
			"dirty",
			1,
		};
	editorCategory = "armco_units";
	editorSubcategory = "armco_units_cars";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;	
	};

class ARMCO_M12_Transport: OPTRE_M813_TT
	{
		features="Randomization: No									<br />Camo selections: 3 - top of hull, bottom of hull, turret									<br />Script door sources: None									<br />Script animations: HideTurret									<br />Executed scripts: None 									<br />Firing from vehicles: No									<br />Slingload: Yes									<br />Cargo proxy indexes: 1 to 8";
		side=1;
		scope=2;
		scopeCurator = 2;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		displayName="[ARMCO] M831 Warthog Troop Transport";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_vehicles\Warthog\data\M12HogMaav_extupper_co.paa"
		};
		class TextureSources
		{
		class clean 
			{
				displayName="Factory New";
				author = "Frosty & Mac";
				textures[]=
				{
				"custom_vehicles\Warthog\data\Warthog_armco_black_clean_CO.paa",
				};
			};
			factions[]=
			{
				"BLU_F",
				"BLU_T_F",
				"ARMCO_UNSC"
			};
			class dirty
			{
				displayName="Battle Tested";
				author = "Frosty & Mac";
				textures[]=
				{
				"custom_vehicles\Warthog\data\warthog_armco_black_CO.paa",
				};
			};

		};
		textureList[]=
		{	
			"clean",
			0,
			"dirty",
			1,
		};
	editorCategory = "armco_units";
	editorSubcategory = "armco_units_cars";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;
	};
class ARMCO_M12R_AA: OPTRE_M12R_AA
	{
		features="Randomization: No									<br />Camo selections: 3 - top of hull, bottom of hull, turret									<br />Script door sources: None									<br />Script animations: HideTurret									<br />Executed scripts: None 									<br />Firing from vehicles: No									<br />Slingload: Yes									<br />Cargo proxy indexes: 1 to 8";
		side=1;
		scope=2;
		scopeCurator = 2;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		displayName="[ARMCO] M12R LAAV Warthog (Anti Air Launcher)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_vehicles\Warthog\data\warthog_armco_black_CO.paa",
			"custom_vehicles\Warthog\data\warthog_aa_armco_black_co.paa"
		};
		class TextureSources
		{
		class clean 
		{
			displayName="Factory New";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\Warthog_armco_black_clean_CO.paa",
			"custom_vehicles\Warthog\data\warthog_aa_armco_black_co.paa"
			};
		};
		factions[]=
		{
			"BLU_F",
			"BLU_T_F",
			"ARMCO_UNSC"
		};
		class dirty
		{
			displayName="Battle Tested";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\warthog_armco_black_CO.paa",
			"custom_vehicles\Warthog\data\warthog_aa_armco_black_co.paa"
			};
		};
		
		};
		textureList[]=
		{	
			"clean",
			0,
			"dirty",
			1,
		};
	editorCategory = "armco_units";
	editorSubcategory = "armco_units_cars";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;	
	};
class ARMCO_M12A1_Rocket: OPTRE_M12A1_LRV
	{
		features="Randomization: No									<br />Camo selections: 3 - top of hull, bottom of hull, turret									<br />Script door sources: None									<br />Script animations: HideTurret									<br />Executed scripts: None 									<br />Firing from vehicles: No									<br />Slingload: Yes									<br />Cargo proxy indexes: 1 to 8";
		side=1;
		scope=2;
		scopeCurator = 2;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		displayName="[ARMCO] M12A1 Warthog (Rocket Launcher)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_vehicles\Warthog\data\warthog_armco_black_CO.paa",
			"custom_vehicles\Warthog\data\warthog_addons_armco_black_CO.paa"
		};
		class TextureSources
		{
		class clean 
		{
			displayName="Factory New";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\Warthog_armco_black_clean_CO.paa",
			"custom_vehicles\Warthog\data\warthog_addons_armco_black_CO.paa"
			};
		};
		factions[]=
		{
			"BLU_F",
			"BLU_T_F",
			"ARMCO_UNSC"
		};
		class dirty
		{
			displayName="Battle Tested";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\warthog_armco_black_CO.paa",
			"custom_vehicles\Warthog\data\warthog_addons_armco_black_CO.paa"
			};
		};
		
		};
		textureList[]=
		{	
			"clean",
			0,
			"dirty",
			1,
		};
	editorCategory = "armco_units";
	editorSubcategory = "armco_units_cars";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;	
	};
//---Clean Versions---//
class ARMCO_M914_RV_C: OPTRE_M914_RV
	{
		features="Randomization: No									<br />Camo selections: 3 - top of hull, bottom of hull, turret									<br />Script door sources: None									<br />Script animations: HideTurret									<br />Executed scripts: None 									<br />Firing from vehicles: No									<br />Slingload: Yes									<br />Cargo proxy indexes: 1 to 8";
		side=1;
		scope=2;
		scopeCurator = 2;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		displayName="[ARMCO] Clean M12 Warthog Recovery";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"clan",
			"clan_text",
			"insignia",
			"attach_apc",
			"attach_mg",
			"attach_troop"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_vehicles\Warthog\data\Warthog_armco_black_clean_CO.paa",
		};
		class TextureSources
		{
		class clean 
		{
			displayName="Factory New";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\Warthog_armco_black_clean_CO.paa",
			"custom_vehicles\Warthog\data\warthog_addons_armco_black_CO.paa"
			};
		};
		factions[]=
		{
			"BLU_F",
			"BLU_T_F",
			"ARMCO_UNSC"
		};
		class dirty
		{
			displayName="Battle Tested";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\warthog_armco_black_CO.paa",
			"custom_vehicles\Warthog\data\warthog_addons_armco_black_CO.paa"
			};
		};
		
		};
		textureList[]=
		{	
			"clean",
			1,
			"dirty",
			0,
		};
	editorCategory = "armco_units";
	editorSubcategory = "armco_units_cars";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;	
	};
class ARMCO_M12_LRV_C: OPTRE_M12_LRV
	{
		features="Randomization: No									<br />Camo selections: 3 - top of hull, bottom of hull, turret									<br />Script door sources: None									<br />Script animations: HideTurret									<br />Executed scripts: None 									<br />Firing from vehicles: No									<br />Slingload: Yes									<br />Cargo proxy indexes: 1 to 8";
		side=1;
		scope=2;
		scopeCurator = 2;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		displayName="[ARMCO] Clean M12 Warthog LRV (MG)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_vehicles\Warthog\data\Warthog_armco_black_clean_CO.paa",
			"custom_vehicles\Warthog\data\warthog_addons_armco_black_CO.paa"
		};
		class TextureSources
		{
		class clean 
		{
			displayName="Factory New";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\Warthog_armco_black_clean_CO.paa",
			"custom_vehicles\Warthog\data\warthog_addons_armco_black_CO.paa"
			};
		};
		factions[]=
		{
			"BLU_F",
			"BLU_T_F",
			"ARMCO_UNSC"
		};
		class dirty
		{
			displayName="Battle Tested";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\warthog_armco_black_CO.paa",
			"custom_vehicles\Warthog\data\warthog_addons_armco_black_CO.paa"
			};
		};
		
		};
		textureList[]=
		{	
			"clean",
			1,
			"dirty",
			0,
		};
	editorCategory = "armco_units";
	editorSubcategory = "armco_units_cars";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;	
	};
class ARMCO_M12_Medical_C: OPTRE_M12_FAV_APC
	{
		features="Randomization: No									<br />Camo selections: 3 - top of hull, bottom of hull, turret									<br />Script door sources: None									<br />Script animations: HideTurret									<br />Executed scripts: None 									<br />Firing from vehicles: No									<br />Slingload: Yes									<br />Cargo proxy indexes: 1 to 8";
		side=1;
		scope=2;
		scopeCurator = 2;
		attendant = 1;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		displayName="[ARMCO] Clean M12 Warthog Medical";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_vehicles\Warthog\data\Warthog_armco_black_clean_CO.paa",
			"custom_vehicles\Warthog\data\warthog_armco_apc.paa"
		};
		class TextureSources
		{
		class clean 
		{
			displayName="Factory New";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\Warthog_armco_black_clean_CO.paa",
			"custom_vehicles\Warthog\data\warthog_armco_apc.paa"
			};
		};
		factions[]=
		{
			"BLU_F",
			"BLU_T_F",
			"ARMCO_UNSC"
		};
		class dirty
		{
			displayName="Battle Tested";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\warthog_armco_black_CO.paa",
			"custom_vehicles\Warthog\data\warthog_armco_apc.paa"
			};
		};
		
		};
		textureList[]=
		{	
			"clean",
			1,
			"dirty",
			0,
		};
	editorCategory = "armco_units";
	editorSubcategory = "armco_units_cars";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;	
	};
class ARMCO_M12_Transport_C: OPTRE_M813_TT
	{
		features="Randomization: No									<br />Camo selections: 3 - top of hull, bottom of hull, turret									<br />Script door sources: None									<br />Script animations: HideTurret									<br />Executed scripts: None 									<br />Firing from vehicles: No									<br />Slingload: Yes									<br />Cargo proxy indexes: 1 to 8";
		side=1;
		scope=2;
		scopeCurator = 2;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		displayName="[ARMCO] Clean M831 Warthog Troop Transport";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_vehicles\Warthog\data\M12HogMaav_extupper_co.paa"
		};
		class TextureSources
		{
		class clean 
		{
			displayName="Factory New";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\Warthog_armco_black_clean_CO.paa",
			"custom_vehicles\Warthog\data\warthog_addons_armco_black_CO.paa"
			};
		};
		factions[]=
		{
			"BLU_F",
			"BLU_T_F",
			"ARMCO_UNSC"
		};
		class dirty
		{
			displayName="Battle Tested";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\warthog_armco_black_CO.paa",
			"custom_vehicles\Warthog\data\warthog_addons_armco_black_CO.paa"
			};
		};
		
		};
		textureList[]=
		{	
			"clean",
			1,
			"dirty",
			0,
		};
	editorCategory = "armco_units";
	editorSubcategory = "armco_units_cars";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;
	};
class ARMCO_M12R_AA_C: OPTRE_M12R_AA
	{
		features="Randomization: No									<br />Camo selections: 3 - top of hull, bottom of hull, turret									<br />Script door sources: None									<br />Script animations: HideTurret									<br />Executed scripts: None 									<br />Firing from vehicles: No									<br />Slingload: Yes									<br />Cargo proxy indexes: 1 to 8";
		side=1;
		scope=2;
		scopeCurator = 2;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		displayName="[ARMCO] Clean M12R LAAV Warthog (Anti Air Launcher)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_vehicles\Warthog\data\Warthog_armco_black_clean_CO.paa",
			"custom_vehicles\Warthog\data\warthog_aa_armco_black_co.paa"
		};
		class TextureSources
		{
		class clean 
		{
			displayName="Factory New";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\Warthog_armco_black_clean_CO.paa",
			"custom_vehicles\Warthog\data\warthog_aa_armco_black_co.paa"
			};
		};
		factions[]=
		{
			"BLU_F",
			"BLU_T_F",
			"ARMCO_UNSC"
		};
		class dirty
		{
			displayName="Battle Tested";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\warthog_armco_black_CO.paa",
			"custom_vehicles\Warthog\data\warthog_aa_armco_black_co.paa"
			};
		};
		
		};
		textureList[]=
		{	
			"clean",
			1,
			"dirty",
			0,
		};
	editorCategory = "armco_units";
	editorSubcategory = "armco_units_cars";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;	
	};
class ARMCO_M12A1_Rocket_C: OPTRE_M12A1_LRV
	{
		features="Randomization: No									<br />Camo selections: 3 - top of hull, bottom of hull, turret									<br />Script door sources: None									<br />Script animations: HideTurret									<br />Executed scripts: None 									<br />Firing from vehicles: No									<br />Slingload: Yes									<br />Cargo proxy indexes: 1 to 8";
		side=1;
		scope=2;
		scopeCurator = 2;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		displayName="[ARMCO] Clean M12A1 Warthog (Rocket Launcher)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_vehicles\Warthog\data\Warthog_armco_black_clean_CO.paa",
			"custom_vehicles\Warthog\data\warthog_addons_armco_black_CO.paa"
		};
		class TextureSources
		{
		class clean 
		{
			displayName="Factory New";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\Warthog_armco_black_clean_CO.paa",
			"custom_vehicles\Warthog\data\warthog_addons_armco_black_CO.paa"
			};
		};
		factions[]=
		{
			"BLU_F",
			"BLU_T_F",
			"ARMCO_UNSC"
		};
		class dirty
		{
			displayName="Battle Tested";
			author = "Frosty & Mac";
			textures[]=
			{
			"custom_vehicles\Warthog\data\warthog_armco_black_CO.paa",
			"custom_vehicles\Warthog\data\warthog_addons_armco_black_CO.paa"
			};
		};
		
		};
		textureList[]=
		{	
			"clean",
			1,
			"dirty",
			0,
		};
	editorCategory = "armco_units";
	editorSubcategory = "armco_units_cars";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;	
	};	



//---URF Warthogs---//
class GH_M12R_AA: OPTRE_M12R_AA
	{
		side=0;
		scope=2;
		scopeCurator = 2;
		crew="ARMCO_Soldier_GH";
		faction="ARMCO_Green_Horns";
		displayName="[GH] M12R LAAV Warthog (Anti Air Launcher)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_vehicles\Warthog\data\Warthog_URF_co.paa",
			"custom_vehicles\Warthog\data\warthog_aa_URF_co.paa"
		};
	editorCategory = "armco_units_green_horns";
	editorSubcategory = "gh_units_cars";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;	
	};	
class GH_M12_LRV: OPTRE_M12_LRV
	{
		side=0;
		scope=2;
		scopeCurator = 2;
		crew="ARMCO_Soldier_GH";
		faction="ARMCO_Green_Horns";
		displayName="[GH] M12 Warthog LRV (MG)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_vehicles\Warthog\data\Warthog_URF_co.paa",
			"custom_vehicles\Warthog\data\warthog_addons_URF_co.paa"
		};
	editorCategory = "armco_units_green_horns";
	editorSubcategory = "gh_units_cars";
	// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1;	
	};

	

*/