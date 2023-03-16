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
				"\custom_vehicles\Warthog\data\M12HogMaav_extupper_armco2_co.paa",
				"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
				"\custom_vehicles\Warthog\data\m12_turret_armco_co.paa",
				"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
				"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa",
				"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
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
					"ARMCO_PMC"
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
					"ARMCO_PMC"
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
					"ARMCO_PMC"
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
					"ARMCO_PMC"
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
					"ARMCO_PMC"
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
					"\custom_vehicles\Warthog\data\m12_turret_armco_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
				};
			};
			class colorarmcot
			{
				displayName="Armco T";
				author="Belhun";
				textures[]=
				{
					"\custom_vehicles\Warthog\data\M12HogMaav_extupper_armco2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\custom_vehicles\Warthog\data\m12_turret_armco_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
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
			2,
			"colornight",
			3,
			"colorsand",
			3,
			"colorsnow",
			3,
			"colorwood",
			3,
			"colorarmco",
			1,
			"colorarmcot",
			1
		};
		tf_encryptionCode 	= "tf_west_radio_code";
		tf_dialog 			= "rt1523g_radio_dialog";
		tf_subtype 			= "digital_lr";
		tf_range 			= 25000;
		tf_dialogUpdate 	= "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio	 	= 1;
		
	};
	class ARMCO_M12G1_LRV: OPTRE_M12G1_LRV
	{
		displayName="[ARMCO] M12G1 Warthog LRV (Gauss)";
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
			"Camo3",
			"Camo4",
			"camo_details",
			"camo_interior"
		};
		hiddenSelectionsTextures[]=
		{
			"\custom_vehicles\Warthog\data\M12HogMaav_extupper_armco2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\turrets\m68_turret_co.paa",
			"\custom_vehicles\Warthog\data\m12_turret_armco_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa",
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
					"\OPTRE_Vehicles\Warthog\data\turrets\m68_turret_co.paa",
					"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
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
					"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
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
					"\OPTRE_Vehicles\Warthog\data\woodland\m68_turret_woodland_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\m12_turret_woodland_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
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
					"\OPTRE_Vehicles\Warthog\data\snow\m68_turret_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
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
					"\OPTRE_Vehicles\Warthog\data\sand\m68_turret_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\m12_turret_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
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
					"\OPTRE_Vehicles\Warthog\data\turrets\m68_turret_co.paa",
					"\custom_vehicles\Warthog\data\m12_turret_armco_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa",
				};
				factions[]=
				{
					"ARMCO_PMC"
				};
			};
			class colorarmcot
			{
				displayName="Armco T";
				author="Belhun";
				textures[]=
				{
					"\custom_vehicles\Warthog\data\M12HogMaav_extupper_armco2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\turrets\m68_turret_co.paa",
					"\custom_vehicles\Warthog\data\m12_turret_armco_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa",
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
			2,
			"colornight",
			3,
			"colorsand",
			3,
			"colorsnow",
			3,
			"colorwood",
			3,
			"colorarmco",
			1,
			"colorarmcot",
			1
		};
		tf_encryptionCode 	= "tf_west_radio_code";
		tf_dialog 			= "rt1523g_radio_dialog";
		tf_subtype 			= "digital_lr";
		tf_range 			= 25000;
		tf_dialogUpdate 	= "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio	 	= 1;
		
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
			"\custom_vehicles\Warthog\data\M12HogMaav_extupper_armco2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa",
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
					"ARMCO_PMC"
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
					"ARMCO_PMC"
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
					"ARMCO_PMC"
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
					"ARMCO_PMC"
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
					"ARMCO_PMC"
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
					"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
				};
			};
			class colorarmcot
			{
				displayName="Armco T";
				author="Belhun";
				textures[]=
				{
					"\custom_vehicles\Warthog\data\M12HogMaav_extupper_armco2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa",
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
				1,
				"colorarmcot",
				1
			};
		tf_encryptionCode 	= "tf_west_radio_code";
		tf_dialog 			= "rt1523g_radio_dialog";
		tf_subtype 			= "digital_lr";
		tf_range 			= 25000;
		tf_dialogUpdate 	= "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio	 	= 1;
	};
	
	class ARMCO_M12_FAV: OPTRE_M12_FAV
	{
		displayName="[ARMCO] M12-FAV";
		author="Belhun";
		side=1;
		scope=2;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		editorCategory = "armco_units";
		editorSubcategory = "armco_units_cars";
		hiddenSelectionsTextures[]=
		{
			"\custom_vehicles\Warthog\data\M12HogMaav_extupper_armco2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
			"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa"
			
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
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
					
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
				};
			};
			class colorarmcot
			{
				displayName="Armco T";
				author="Belhun";
				textures[]=
				{
					"\custom_vehicles\Warthog\data\M12HogMaav_extupper_armco2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
					"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa"
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
			1,
			"colorarmcot",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"camo_details",
			"camo_interior"
		};
		tf_encryptionCode 	= "tf_west_radio_code";
		tf_dialog 			= "rt1523g_radio_dialog";
		tf_subtype 			= "digital_lr";
		tf_range 			= 25000;
		tf_dialogUpdate 	= "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio	 	= 1;
	};
	class ARMCO_M12_FAV_APC: OPTRE_M12_FAV_APC
	{
		displayName="[ARMCO] M12-FAV APC";
		author="Belhun";
		side=1;
		scope=2;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		editorCategory = "armco_units";
		editorSubcategory = "armco_units_cars";
		hiddenSelectionsTextures[]=
		{		
			"\custom_vehicles\Warthog\data\M12HogMaav_extupper_armco2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
			"\OPTRE_Vehicles\Warthog\data\apc_lopo_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
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
					"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
					"\OPTRE_Vehicles\Warthog\data\apc_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
					
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\woodland\transp_lopo_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\hog_apc_wood_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\snow\transp_lopo_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\sand\transp_lopo_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\hog_apc_desert_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
					"\OPTRE_Vehicles\Warthog\data\apc_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
				};
			};
			class colorarmcot
			{
				displayName="Armco T";
				author="Belhun";
				textures[]=
				{
					"\custom_vehicles\Warthog\data\M12HogMaav_extupper_armco2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
					"\OPTRE_Vehicles\Warthog\data\apc_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
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
			1,
			"colorarmcot",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"camo_details",
			"camo_interior",
			"camo_transport_details",
			"camo_net"
		};
		tf_encryptionCode 	= "tf_west_radio_code";
		tf_dialog 			= "rt1523g_radio_dialog";
		tf_subtype 			= "digital_lr";
		tf_range 			= 25000;
		tf_dialogUpdate 	= "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio	 	= 1;
	};
	class ARMCO_M12_FAV_APC_MED: OPTRE_M12_FAV_APC_MED
	{
		displayName="[ARMCO] M12-FAV Medical APC";
		author="Belhun";
		side=1;
		scope=2;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		editorCategory = "armco_units";
		editorSubcategory = "armco_units_cars";
		hiddenSelectionsTextures[]=
		{
			"\custom_vehicles\Warthog\data\M12HogMaav_extupper_armco2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
			"\OPTRE_Vehicles\Warthog\data\apc_lopo_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
			"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa"
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
					"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
					"\OPTRE_Vehicles\Warthog\data\apc_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\woodland\transp_lopo_wood_co.paa",
					"\OPTRE_Vehicles\Warthog\data\woodland\hog_apc_wood_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\snow\transp_lopo_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\sand\transp_lopo_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\hog_apc_desert_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
					"\OPTRE_Vehicles\Warthog\data\apc_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
				};
			};
			class colorarmcot
			{
				displayName="Armco T";
				author="Belhun";
				textures[]=
				{
					"\custom_vehicles\Warthog\data\M12HogMaav_extupper_armco2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
					"\OPTRE_Vehicles\Warthog\data\apc_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa"
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
			1,
			"colorarmcot",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"camo_details",
			"camo_interior",
			"camo_transport_details",
			"camo_net",
			"camo_medical"
		};
		tf_encryptionCode 	= "tf_west_radio_code";
		tf_dialog 			= "rt1523g_radio_dialog";
		tf_subtype 			= "digital_lr";
		tf_range 			= 25000;
		tf_dialogUpdate 	= "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio	 	= 1;
	};
	class ARMCO_M813_TT: OPTRE_M813_TT
	{
		displayName="[ARMCO] M813 Troop Transport";
		author="Belhun";
		side=1;
		scope=2;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		editorCategory = "armco_units";
		editorSubcategory = "armco_units_cars";
		hiddenSelectionsTextures[]=
		{		
			"\custom_vehicles\Warthog\data\M12HogMaav_extupper_armco2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa"
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
					"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa"
					
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\woodland\transp_lopo_wood_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\snow\transp_lopo_snow_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\sand\transp_lopo_sand_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
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
					"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa"
				};
				factions[]=
				{
					"ARMCO_PMC"
				};
			};
			class colorarmcot
			{
				displayName="Armco T";
				author="Belhun";
				textures[]=
				{
					"\custom_vehicles\Warthog\data\M12HogMaav_extupper_armco2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa"
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
			1,
			"colorarmcot",
			1
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"camo_details",
			"camo_interior",
			"camo_net",
			"camo_transport_decal"
		};
		tf_encryptionCode 	= "tf_west_radio_code";
		tf_dialog 			= "rt1523g_radio_dialog";
		tf_subtype 			= "digital_lr";
		tf_range 			= 25000;
		tf_dialogUpdate 	= "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio	 	= 1;
	};
};
