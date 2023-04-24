// class CfgPatches {
//   class CA_ARMCO_Vehicles {
//     units[] = {
//         "ARMCO_Puma_LRV",
//         "ARMCO_Puma_FAV",
//         "ARMCO_Puma_AT",
//         "ARMCO_Cougar_UA",
//         "ARMCO_Cougar_HMG",
//         "ARMCO_Cougar_GMG",
//         "ARMCO_Panther_MRAP_UR",
//         "ARMCO_Panther_MRAP_GMG",
//         "ARMCO_Panther_MRAP_HMG",
//         "ARMCO_M12_LRV",
//         "ARMCO_M12G1_LRV",
//         "ARMCO_M12A1_LRV",
//         "ARMCO_M12R_AA",
//         "ARMCO_M914_RV",
//         "ARMCO_M12_FAV",
//         "ARMCO_M12_FAV_APC",
//         "ARMCO_M12_FAV_APC_MED",
//         "ARMCO_M813_TT",
//         "GH_M12_FAV",
//         "GH_M12R_AA",
//         "GH_M12_LRV",
//         "ARMCO_Training_Plane",
//         "ARMCO_Pandur4_WD",
//         "ARMCO_Pandur4_medical_WD",
//         "ARMCO_Pandur4_medical_2_WD",
//         "ARMCO_Pelican_Transport",
//         "ARMCO_Pelican_Gunship",
//         "ARMCO_Pelican_Medevac",
//         "GH_Pelican_Transport",
//         "GH_Pelican_Gunship",
//         "GH_Pelican_Medevac",
//         "ARMCO_Mustang_MGS_GRN",
//         "ARMCO_Liger_UGV",
//         "ARMCO_Paladin_Arty",
//         "ARMCO_Archer_Arty",
//         "ARMCO_Griffin_up_Tank",
//         "ARMCO_Griffin_Tank",
//         "ARMCO_Centaur_Tank",
//         "ARMCO_Chimera_ifv",
//         "ARMCO_Kelpie_AA",
//         "ARMCO_Minotaur_APC",
//         "ARMCO_Manticore",

//     };
//     weapons[] = {};
//     requiredVersion = 0.1;
//     requiredAddons[] = {"OPTRE_UNSC_Units", "ace_main",
//                         "A3_Characters_F_BLUFOR"};
//   };
// };
// class CfgEditorCategories {
//   class armco_units // Category class, you point to it in editorCategory
//                     // property
//   {
//     displayName = "ARMCO"; // Name visible in the list
//   };
//   class ARMCO_Armco_Faction {
//     icon = "";
//     displayName = "Armco Faction";
//     side = 1;
//     priority = 1;
//   };
// } class CfgEditorSubcategories {
//   class armco_units_cars // Category class, you point to it in editorSubcategory
//                          // property
//   {
//     displayName = "ARMCO Cars"; // Name visible in the list
//   };
//   class armco_units_cars2 // Category class, you point to it in
//                           // editorSubcategory property
//   {
//     displayName = "ARMCO Armoured Cars"; // Name visible in the list
//   };
//   class armco_units_APCs // Category class, you point to it in editorSubcategory
//                          // property
//   {
//     displayName = "ARMCO APCs"; // Name visible in the list
//   };
//   class armco_units_pelicans // Category class, you point to it in
//                              // editorSubcategory property
//   {
//     displayName = "ARMCO Pelicans"; // Name visible in the list
//   };
//   class gh_units_pelicans // Category class, you point to it in
//                           // editorSubcategory property
//   {
//     displayName = "Aircraft"; // Name visible in the list
//   };
//   class armco_units_tanks // Category class, you point to it in
//                           // editorSubcategory property
//   {
//     displayName = "ARMCO Tanks"; // Name visible in the list
//   };
//   class armco_units_drones // Category class, you point to it in
//                            // editorSubcategory property
//   {
//     displayName = "ARMCO Drones"; // Name visible in the list
//   };
//   class armco_units_arty // Category class, you point to it in editorSubcategory
//                          // property
//   {
//     displayName = "ARMCO Artillery"; // Name visible in the list
//   };
//   class armco_units_ifv // Category class, you point to it in editorSubcategory
//                         // property
//   {
//     displayName = "ARMCO IFVs"; // Name visible in the list
//   };
//   class armco_units_AA // Category class, you point to it in editorSubcategory
//                        // property
//   {
//     displayName = "ARMCO Anti-air"; // Name visible in the list
//   };
//   class armco_units_support // Category class, you point to it in
//                             // editorSubcategory property
//   {
//     displayName = "ARMCO Support Vehicles"; // Name visible in the list
//   };
// };
// class CfgFactionClasses { // This configures the in-game factions
//   class ARMCO_UNSC {
//     dlc = "OPTRE";
//     displayName = "ARMCO";
//     author = "Article 2 Studios";
//     priority = 1;
//     side = 1;
//     icon = "\OPTRE_Core\data\icon_UNSC_ca.paa";
//     flag = "\OPTRE_Core\Data\flag_UNSC_ca.paa";
//     primaryLanguage = "EN";
//     backpack_tf_faction_radio_api = "OPTRE_Como_pack_2";
//     /*personal_tf_faction_radio_api = "some_personal_radio_class";
//     rifleman_tf_faction_radio_api = "some_rifleman_radio_class";
//     airborne_tf_faction_radio_api = "some_airborne_radio_class";*/
//   };
// };