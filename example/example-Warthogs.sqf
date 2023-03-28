//start 
class CfgPatches { 
	class CA_ARMCO_WARTHOG { 
		units[] = {
			"ARMCO_M12_LRV",
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"OPTRE_UNSC_Units", "ace_main","A3_Characters_F_BLUFOR"};
	};
};
class CfgEditorSubcategories { // these categories under
	class armco_units_cars // Category class, you point to it in editorSubcategory property
	{
		displayName = "ARMCO Warthogs"; // Name visible in the list
	};
	class gh_units_cars // Category class, you point to it in editorSubcategory property
	{
		displayName = "Warthogs"; // Name visible in the list
	};
};
class CfgVehicles
{
	//imports the OPTRE_M12_LRV from OPTREmod(this is going to be used as a refrence for our new vehical(anything we dont add useing this will be inherited from this vehicals includeing all the things that the))
	class OPTRE_M12_LRV; 

	class ARMCO_M12_LRV: OPTRE_M12_LRV
	{
		displayName="[ARMCO] M12 Warthog LRV (MG)"; // What is shown in zues menue
		author="Belhun"; //Who it will say its 
		side=1; // = BLUFOR/west
		scope=2; //Scope is used to limit access to the class in the Mission Editor(2 = public)
		crew="ARMCO_Soldier_O_Phoenix"; // the unit that will acupy the vehicalslot
		faction="ARMCO_PMC"; // the faction its apart of
		editorCategory = "armco_units"; //these 2 are what category it goes into
		editorSubcategory = "armco_units_cars"; //what the Category this goes in the editorCategory
		hiddenSelectionsTextures[]= // These textures are what will allways be used as the basis 
		{// the order of witch these textures are placed i 
		 //belive are based off "hiddenSelections[]"(in the same order)
			"\custom_vehicles\Warthog\data\M12HogMaav_extupper_armco2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\custom_vehicles\Warthog\data\m12_turret_armco_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\custom_vehicles\Warthog\data\M12HogMaav_interior_armco_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
		};
		class textureSources // These are defined texture grouped by class
		{
			class colorstand //This is the class name
			{	// (when adding a new one it can be changed)
				// [has to palced with in textureSources]
				displayName="Standard";//The name thats displayed in garage
				author="Article 2 Studios";// author name
				textures[]=
				{  //This is simular working too "hiddenSelectionsTextures[]"
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa",
					"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
					"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
				};
				factions[]=//dont know what this is for but has to be ARMCO_PMC
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
		//Takes the class textureSources
		textureList[]=
		{
			"colorstand",//Class name
			2,//Priority fir the order to be sown(lower number higher in list)
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
		//TFar Related stuff id just copy all of this as is and not change it unless you understand whats happening
		tf_encryptionCode 	= "tf_west_radio_code";
		tf_dialog 			= "rt1523g_radio_dialog";
		tf_subtype 			= "digital_lr";
		tf_range 			= 25000;
		tf_dialogUpdate 	= "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio	 	= 1;
	};
};
