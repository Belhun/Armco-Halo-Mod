/*
    class B_SCBA_01_F;
    class B_ViperHarness_blk_F;
    class OPTRE_ANPRC_521_Black;
    class B_ViperLightHarness_blk_F;
    class 4thot_u_opfor;
    class O_soldier_Melee_RUSH : O_Soldier_base_F
    {
        class EventHandlers;
    };
*/

    class 4thot_e_B_SCBA_01_F : B_SCBA_01_F
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
    };

    class 4thot_e_B_ViperHarness_blk_F_std : B_ViperHarness_blk_F
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        class TransportMagazines
        {
            MACRO_ADDMAGAZINE(OPTRE_40Rnd_30x06_Mag,10);
            MACRO_ADDMAGAZINE(OPTRE_1Rnd_MasterKey_Slugs,3);
        };
    };

    class 4thot_e_B_ViperHarness_blk_F_med : B_ViperHarness_blk_F
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;

        class TransportItems
        {
            MACRO_ADDITEM(ACE_elasticBandage,10);
            MACRO_ADDITEM(kat_ketamine,4);
            MACRO_ADDITEM(OPTRE_Biofoam,2);
            MACRO_ADDITEM(kat_IO_FAST,2);
            MACRO_ADDITEM(ACE_epinephrine,4);
            MACRO_ADDITEM(ACE_tourniquet,2);
            MACRO_ADDITEM(kat_IV_16,4);
            MACRO_ADDITEM(ACE_salineIV_250,2);
            MACRO_ADDITEM(kat_bloodIV_O_N_250,1);
            MACRO_ADDITEM(kat_bloodIV_A_250,1);
            MACRO_ADDITEM(kat_bloodIV_B_250,1);
            MACRO_ADDITEM(kat_bloodIV_O_500,1);
            MACRO_ADDITEM(kat_bloodIV_A_N_500,1);
            MACRO_ADDITEM(kat_chestSeal,2);
            MACRO_ADDITEM(kat_aatKit,1);
            MACRO_ADDITEM(kat_naloxone,1);
            MACRO_ADDITEM(kat_Pulseoximeter,1);
            MACRO_ADDITEM(kat_crossPanel,1);
            MACRO_ADDITEM(kat_etomidate,3);
            MACRO_ADDITEM(kat_scalpel,2);
            MACRO_ADDITEM(kat_plate,2);
        };
        class TransportMagazines
        {
            MACRO_ADDMAGAZINE(OPTRE_40Rnd_30x06_Mag,4);
        };
    };

    class 4thot_e_B_ViperHarness_blk_F_auto : B_ViperHarness_blk_F
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        class TransportMagazines
        {
            MACRO_ADDMAGAZINE(OPTRE_100Rnd_30x06_Mag_Tracer,6);
        };
    };

    class 4thot_e_B_ViperHarness_blk_F_mmg : B_ViperHarness_blk_F
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        class TransportMagazines
        {
            MACRO_ADDMAGAZINE(4thot_b_86070_100_ap,5);
        };
    };

    class 4thot_e_B_ViperHarness_blk_F_ats : B_ViperHarness_blk_F
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        class TransportMagazines
        {
            MACRO_ADDMAGAZINE(OPTRE_M41_Twin_HEAT_SACLOS,2);
            MACRO_ADDMAGAZINE(OPTRE_M41_Twin_HEAP,1);
            MACRO_ADDMAGAZINE(OPTRE_M41_Twin_Smoke_W,1);
        };
    };

    class 4thot_e_OPTRE_ANPRC_521_Black_sl : OPTRE_ANPRC_521_Black
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        class TransportMagazines
        {
            MACRO_ADDMAGAZINE(OPTRE_40Rnd_30x06_Mag,6);
        };
    };

    class 4thot_e_B_ViperLightHarness_blk_F_mark : B_ViperLightHarness_blk_F
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        class TransportItems
        {
            MACRO_ADDITEM(ACE_Tripod,1);
        };
        class TransportMagazines
        {
            MACRO_ADDMAGAZINE(OPTRE_10RND_338_AP,11);
        };
    };

//Security
    class 4thot_u_mrm_sec_rifleman : 4thot_u_opfor
    {
        scope = 2;

		displayName = "Rifleman (AR)";
		faction = "4thot_u_mrm";
		editorSubcategory = "4thot_men_sec";

        uniformClass = "OPTRE_Ins_URF_Combat_Uniform";
        linkedItems[] = {"OPTRE_Ins_URF_Helmet1_White","VES_HUD_APR_03","OPTRE_Ins_URF_Snow_Armor1_Flat","ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar"};
		respawnLinkedItems[] = {"OPTRE_Ins_URF_Helmet1_White","VES_HUD_APR_03","OPTRE_Ins_URF_Snow_Armor1_Flat","ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar"};
        backpack = "4thot_e_B_SCBA_01_F";
        weapons[] = {"4thot_a_OPTRE_MA5A_aco","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_MA5A_aco","Throw","Put"};
        Items[] = {stditem};
		RespawnItems[] = {stditem};
        magazines[] = {"kat_Painkiller",tx_10("OPTRE_32Rnd_762x51_Mag_Tracer"),"OPTRE_32Rnd_762x51_Mag_Tracer"};
		respawnMagazines[] = {"kat_Painkiller",tx_10("OPTRE_32Rnd_762x51_Mag_Tracer"),"OPTRE_32Rnd_762x51_Mag_Tracer"};

        class EventHandlers
        {
            class norand
            {
                init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];";
            }; 
        };
        //headgearList[] = {"OPTRE_Ins_URF_Helmet1_White",1};
    };

    class 4thot_u_mrm_sec_rifleman_a : 4thot_u_mrm_sec_rifleman
    {
        scope = 1;

        weapons[] = {"4thot_a_OPTRE_MA5A_mrco","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_MA5A_mrco","Throw","Put"};
    };

    class 4thot_u_mrm_sec_rifleman_br : 4thot_u_mrm_sec_rifleman
    {
        displayName = "Rifleman (BR)";

        weapons[] = {"4thot_a_OPTRE_Commando_Snow_ch","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_Commando_Snow_ch","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("Command_20Rnd_65_TracerR_Mag"),tx_3("Command_20Rnd_65_TracerR_Mag"),"Command_20Rnd_65_TracerR_Mag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"kat_Painkiller",tx_5("Command_20Rnd_65_TracerR_Mag"),tx_3("Command_20Rnd_65_TracerR_Mag"),"Command_20Rnd_65_TracerR_Mag","OPTRE_M9_Frag"};
    };

    class 4thot_u_mrm_sec_rifleman_k : 4thot_u_mrm_sec_rifleman
    {
        displayName = "Rifleman (CB)";

        weapons[] = {"OPTRE_MA5K","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5K","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_10("OPTRE_32Rnd_762x51_Mag"),"OPTRE_32Rnd_762x51_Mag"};
		respawnMagazines[] = {"kat_Painkiller",tx_10("OPTRE_32Rnd_762x51_Mag"),"OPTRE_32Rnd_762x51_Mag"};
    };

    class 4thot_u_mrm_sec_cqbs_sg : 4thot_u_mrm_sec_rifleman
    {
        displayName = "CQB Specialist (SG)";

        weapons[] = {"4thot_a_OPTRE_CQS48_Bulldog_Automatic_Snow_acos","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_CQS48_Bulldog_Automatic_Snow_acos","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("OPTRE_12Rnd_12Gauge_Pellets_Tracer"),tx_2("OPTRE_12Rnd_12Gauge_Pellets_Tracer"),"OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"kat_Painkiller",tx_5("OPTRE_12Rnd_12Gauge_Pellets_Tracer"),tx_2("OPTRE_12Rnd_12Gauge_Pellets_Tracer"),"OPTRE_M9_Frag","OPTRE_M9_Frag"};
    };

    class 4thot_u_mrm_sec_cqbs_shd : 4thot_u_mrm_sec_cqbs_sg
    {
        displayName = "CQB Specialist (SHD)";

        weapons[] = {"4thot_a_OPTRE_Bulldog_Riot_Shield_Snow_acos","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_Bulldog_Riot_Shield_Snow_acos","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("OPTRE_12Rnd_12Gauge_Pellets_Tracer"),tx_3("OPTRE_12Rnd_12Gauge_Pellets_Tracer")};
		respawnMagazines[] = {"kat_Painkiller",tx_5("OPTRE_12Rnd_12Gauge_Pellets_Tracer"),tx_3("OPTRE_12Rnd_12Gauge_Pellets_Tracer")};
    };

    class 4thot_u_mrm_sec_cqbs_smg : 4thot_u_mrm_sec_rifleman
    {
        displayName = "CQB Specialist (SMG)";

        weapons[] = {"4thot_a_OPTRE_SAS10_Riot_Shield_Snow_lsr","4thot_a_optre_hgun_sas10_F_lsr","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_SAS10_Riot_Shield_Snow_lsr","4thot_a_optre_hgun_sas10_F_lsr","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("32Rnd_10mm_Ball"),tx_10("32Rnd_10mm_Ball"),"OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"kat_Painkiller",tx_5("32Rnd_10mm_Ball"),tx_10("32Rnd_10mm_Ball"),"OPTRE_M9_Frag","OPTRE_M9_Frag"};
    };

    class 4thot_u_mrm_sec_medic : 4thot_u_mrm_sec_rifleman_k
    {
        displayName = "Combat Medic";
        icon = "iconManMedic";
        Attendant = 1;

        linkedItems[] = {"OPTRE_FC_CH255_Helmet_SNO_Medic","VES_HUD_APR_03","OPTRE_Ins_URF_Snow_Armor1_Flat","ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar"};
		respawnLinkedItems[] = {"OPTRE_FC_CH255_Helmet_SNO_Medic","VES_HUD_APR_03","OPTRE_Ins_URF_Snow_Armor1_Flat","ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar"};
        Items[] = {stditem,meditem};
		RespawnItems[] = {stditem,meditem};
        magazines[] = {tx_5("kat_Painkiller"),tx_10("OPTRE_32Rnd_762x51_Mag")};
		respawnMagazines[] = {tx_5("kat_Painkiller"),tx_10("OPTRE_32Rnd_762x51_Mag")};
    };

    class 4thot_u_mrm_sec_sleader : 4thot_u_mrm_sec_rifleman
    {
        displayName = "Squad Leader";
        icon = "iconManLeader";

        linkedItems[] = {"OPTRE_CPD_CH251_DME","VES_HUD_APR_03","OPTRE_Ins_URF_Snow_Armor1_Flat","ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar"};
		respawnLinkedItems[] = {"OPTRE_CPD_CH251_DME","VES_HUD_APR_03","OPTRE_Ins_URF_Snow_Armor1_Flat","ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar"};
        weapons[] = {"4thot_a_OPTRE_MA5A_mrco","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_MA5A_mrco","Throw","Put"};
        Items[] = {stditem,meditem};
		RespawnItems[] = {stditem,meditem};
        magazines[] = {"kat_Painkiller",tx_5("OPTRE_32Rnd_762x51_Mag_Tracer"),tx_3("1Rnd_HE_Grenade_shell"),tx_3("OPTRE_1Rnd_MasterKey_Pellets")};
		respawnMagazines[] = {"kat_Painkiller",tx_5("OPTRE_32Rnd_762x51_Mag_Tracer"),tx_3("1Rnd_HE_Grenade_shell"),tx_3("OPTRE_1Rnd_MasterKey_Pellets")};
    };
//Militia
    class 4thot_u_mrm_sec_soldier : 4thot_u_mrm_sec_rifleman
    {
		displayName = "Soldier (SG)";
		icon = "iconManVirtual";
		editorSubcategory = "4thot_men_mil";

        backpack = "";
        uniformClass = "OPTRE_UNSC_Army_Uniform_T_BLK";
        linkedItems[] = {"OPTRE_ONI_Researcher_Headgear","V_BandollierB_blk","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_ONI_Researcher_Headgear","V_BandollierB_blk","ItemRadio"};
        weapons[] = {"4thot_a_OPTRE_CQS48_Bulldog_Automatic_Snow_acos","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_CQS48_Bulldog_Automatic_Snow_acos","Throw","Put"};
        Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet"};
        magazines[] = {"kat_Painkiller",tx_5("OPTRE_12Rnd_12Gauge_Pellets_Tracer")};
		respawnMagazines[] = {"kat_Painkiller",tx_5("OPTRE_12Rnd_12Gauge_Pellets_Tracer")};

        class EventHandlers
        {
            class norand
            {
                init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];";
            };
        };
        //facewear = "";
        //allowedfacewear[] = {"",1};
        //headgearList[] = {"OPTRE_ONI_Researcher_Headgear",1};
    };

    class 4thot_u_mrm_sec_soldier_k : 4thot_u_mrm_sec_soldier
    {
		displayName = "Soldier (CB)";

        uniformClass = "OPTRE_Ins_URF_Combat_Uniform";
        linkedItems[] = {"OPTRE_ONI_Researcher_Headgear","OPTRE_FW_None","V_LegStrapBag_black_F","ItemRadio","VES_NVG_Collar"};
		respawnLinkedItems[] = {"OPTRE_ONI_Researcher_Headgear","OPTRE_FW_None","V_LegStrapBag_black_F","ItemRadio","VES_NVG_Collar"};
        weapons[] = {"OPTRE_MA5K","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5K","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("OPTRE_32Rnd_762x51_Mag")};
		respawnMagazines[] = {"kat_Painkiller",tx_5("OPTRE_32Rnd_762x51_Mag")};
    };

    class 4thot_u_mrm_sec_soldier_h : 4thot_u_mrm_sec_soldier_k
    {
		displayName = "Soldier (SMG)";

        linkedItems[] = {"OPTRE_ONI_Researcher_Headgear","OPTRE_FW_None","VES_Holster_CPD","ItemRadio","VES_NVG_Collar"};
		respawnLinkedItems[] = {"OPTRE_ONI_Researcher_Headgear","OPTRE_FW_None","VES_Holster_CPD","ItemRadio","VES_NVG_Collar"};
        weapons[] = {"4thot_a_optre_hgun_sas10_F_lsr","Throw","Put"};
		respawnWeapons[] = {"4thot_a_optre_hgun_sas10_F_lsr","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("32Rnd_10mm_Ball")};
		respawnMagazines[] = {"kat_Painkiller",tx_5("32Rnd_10mm_Ball")};
    };

    class 4thot_u_mrm_sec_militia : 4thot_u_mrm_sec_soldier
    {
		displayName = "Militiaman";

        uniformClass = "OPTRE_Ins_ER_rolled_jean_orca";
        linkedItems[] = {"OPTRE_ONI_Researcher_Headgear","OPTRE_FW_None","V_LegStrapBag_black_F","ItemRadio","VES_NVG_Collar"};
		respawnLinkedItems[] = {"OPTRE_ONI_Researcher_Headgear","OPTRE_FW_None","V_LegStrapBag_black_F","ItemRadio","VES_NVG_Collar"};
        weapons[] = {"optre_hgun_comet_F","Throw","Put"};
		respawnWeapons[] = {"optre_hgun_comet_F","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("4Rnd_454Casull")};
		respawnMagazines[] = {"kat_Painkiller",tx_5("4Rnd_454Casull")};
    };

    class 4thot_u_mrm_sec_militia_s10 : 4thot_u_mrm_sec_soldier
    {
		displayName = "Militiaman (SAS10)";

        uniformClass = "U_I_G_resistanceLeader_F_fmm";
        linkedItems[] = {"OPTRE_ONI_Researcher_Headgear","OPTRE_FW_None","VES_Holster_CPD","ItemRadio","VES_NVG_Collar"};
		respawnLinkedItems[] = {"OPTRE_ONI_Researcher_Headgear","OPTRE_FW_None","VES_Holster_CPD","ItemRadio","VES_NVG_Collar"};
        weapons[] = {"optre_hgun_sas10_F","Throw","Put"};
		respawnWeapons[] = {"optre_hgun_sas10_F","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("16Rnd_10mm_Ball")};
		respawnMagazines[] = {"kat_Painkiller",tx_5("16Rnd_10mm_Ball")};
    };

    class 4thot_u_mrm_sec_militia_a : 4thot_u_mrm_sec_soldier
    {
		displayName = "Militiaman Alt";

        uniformClass = "OPTRE_Ins_ER_rolled_surplus_crimson";
        linkedItems[] = {"OPTRE_ONI_Researcher_Headgear","OPTRE_FW_None","V_LegStrapBag_black_F","ItemRadio","VES_NVG_Collar"};
		respawnLinkedItems[] = {"OPTRE_ONI_Researcher_Headgear","OPTRE_FW_None","V_LegStrapBag_black_F","ItemRadio","VES_NVG_Collar"};
        weapons[] = {"optre_hgun_comet_F","Throw","Put"};
		respawnWeapons[] = {"optre_hgun_comet_F","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("4Rnd_454Casull")};
		respawnMagazines[] = {"kat_Painkiller",tx_5("4Rnd_454Casull")};
    };

    class 4thot_u_mrm_sec_militia_s10_a : 4thot_u_mrm_sec_soldier
    {
		displayName = "Militiaman (SAS10) Alt";

        uniformClass = "OPTRE_Ins_ER_rolled_OD_blknred";
        linkedItems[] = {"OPTRE_ONI_Researcher_Headgear","OPTRE_FW_None","VES_Holster_CPD","ItemRadio","VES_NVG_Collar"};
		respawnLinkedItems[] = {"OPTRE_ONI_Researcher_Headgear","OPTRE_FW_None","VES_Holster_CPD","ItemRadio","VES_NVG_Collar"};
        weapons[] = {"optre_hgun_sas10_F","Throw","Put"};
		respawnWeapons[] = {"optre_hgun_sas10_F","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("16Rnd_10mm_Ball")};
		respawnMagazines[] = {"kat_Painkiller",tx_5("16Rnd_10mm_Ball")};
    };

    class 4thot_u_mrm_sec_soldier_mle : O_soldier_Melee_RUSH
    {
        scope = 2;
        side = 0;
        author = "Darknessvoid99";
        displayName = "Soldier (Melee)";
		icon = "iconManVirtual";
        faction = "4thot_u_mrm";
		editorSubcategory = "4thot_men_mil";

        uniformClass = "OPTRE_UNSC_Army_Uniform_T_BLK";
        linkedItems[] = {"OPTRE_ONI_Researcher_Headgear","OPTRE_FW_None","ItemWatch"};
		respawnLinkedItems[] = {"OPTRE_ONI_Researcher_Headgear","OPTRE_FW_None","ItemWatch"};
        backpack = "";
        weapons[] = {"Knife_kukri","Throw","Put"};
		respawnWeapons[] = {"Knife_kukri","Throw","Put"};
        Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet"};
        magazines[] = {"kat_Painkiller"};
		respawnMagazines[] = {"kat_Painkiller"};

        class EventHandlers : EventHandlers
        {
            class norand
            {
                init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];";
            };
        };

        //facewear = "";
        //allowedfacewear[] = {"",1};
        //headgearList[] = {"",1};
    };

    class 4thot_u_mrm_sec_militia_mle : 4thot_u_mrm_sec_soldier_mle
    {
        displayName = "Militia (Hammer)";

        uniformClass = "U_C_Uniform_Farmer_01_F_fmm";
        weapons[] = {"WBK_survival_weapon_2","Throw","Put"};
		respawnWeapons[] = {"WBK_survival_weapon_2","Throw","Put"};
    };

    class 4thot_u_mrm_sec_militia_mle_a : 4thot_u_mrm_sec_soldier_mle
    {
        displayName = "Militia (Pipe)";

        uniformClass = "U_C_ArtTShirt_01_v5_F";
        weapons[] = {"Pipe_aluminium","Throw","Put"};
		respawnWeapons[] = {"Pipe_aluminium","Throw","Put"};
    };

    class 4thot_u_mrm_sec_militia_mle_b : 4thot_u_mrm_sec_soldier_mle
    {
        displayName = "Militia (Crowbar)";

        uniformClass = "U_C_ArtTShirt_01_v6_F";
        weapons[] = {"Crowbar","Throw","Put"};
		respawnWeapons[] = {"Crowbar","Throw","Put"};
    };

    class 4thot_u_mrm_sec_militia_mle_c : 4thot_u_mrm_sec_soldier_mle
    {
        displayName = "Militia (Knife)";

        uniformClass = "U_I_C_Soldier_Bandit_3_F";
        weapons[] = {"Knife_m3","Throw","Put"};
		respawnWeapons[] = {"Knife_m3","Throw","Put"};
    };

    class 4thot_u_mrm_sec_militia_mle_d : 4thot_u_mrm_sec_soldier_mle
    {
        displayName = "Militia (Shovel)";

        uniformClass = "U_I_C_Soldier_Bandit_5_F";
        weapons[] = {"Shovel_Russian","Throw","Put"};
		respawnWeapons[] = {"Shovel_Russian","Throw","Put"};
    };

    class 4thot_u_mrm_sec_militia_mle_e : 4thot_u_mrm_sec_militia_mle_a
    {
        scope = 2;
        uniformClass = "OPTRE_Ins_ER_rolled_OD_crimson";
    };

    class 4thot_u_mrm_sec_militia_mle_f : 4thot_u_mrm_sec_militia_mle_b
    {
        scope = 2;
        uniformClass = "OPTRE_Ins_ER_rolled_surplus_black";
    };

    class 4thot_u_mrm_sec_militia_mle_g : 4thot_u_mrm_sec_militia_mle_c
    {
        scope = 2;
        uniformClass = "OPTRE_Ins_ER_rolled_surplus_crimson";
    };

    class 4thot_u_mrm_sec_militia_mle_h : 4thot_u_mrm_sec_militia_mle_d
    {
        uniformClass = "U_I_G_resistanceLeader_F";
    };
//Marines
    class 4thot_u_mrm_rifleman : 4thot_u_mrm_sec_rifleman
    {
        side = 0;
		displayName = "Rifleman";
		faction = "4thot_u_mrm";
		editorSubcategory = "4thot_men_mar";

        uniformClass = "OPTRE_Ins_BJ_Undersuit";
        linkedItems[] = {"OPTRE_Ins_BJ_Helmet","G_Balaclava_TI_blk_F","OPTRE_Ins_BJ_Armor","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] = {"OPTRE_Ins_BJ_Helmet","G_Balaclava_TI_blk_F","OPTRE_Ins_BJ_Armor","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
        backpack = "4thot_e_B_ViperHarness_blk_F_std";
        weapons[] = {"4thot_a_OPTRE_HMG38_std","Knife_kukri","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_HMG38_std","Knife_kukri","Throw","Put"};
        Items[] = {stditem};
		RespawnItems[] = {stditem};
        magazines[] = {"kat_Painkiller",tx_3("OPTRE_1Rnd_MasterKey_Pellets"),tx_2("UK3CB_BAF_SmokeShell"),tx_2("OPTRE_M9_Frag"),tx_5("OPTRE_40Rnd_30x06_Mag"),"OPTRE_40Rnd_30x06_Mag"};
		respawnMagazines[] = {"kat_Painkiller",tx_3("OPTRE_1Rnd_MasterKey_Pellets"),tx_2("UK3CB_BAF_SmokeShell"),tx_2("OPTRE_M9_Frag"),tx_5("OPTRE_40Rnd_30x06_Mag"),"OPTRE_40Rnd_30x06_Mag"};

        class EventHandlers
        {
            class norand
            {
                init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];";
            }; 
        };
        //headgearList[] = {"OPTRE_Ins_BJ_Helmet",1};
    };

    class 4thot_u_mrm_medic : 4thot_u_mrm_rifleman
    {
		displayName = "Combat Medic";
        icon = "iconManMedic";
        Attendant = 1;

        backpack = "4thot_e_B_ViperHarness_blk_F_med";
        magazines[] = {"kat_Painkiller","OPTRE_1Rnd_MasterKey_Pellets",tx_3("OPTRE_40Rnd_30x06_Mag"),tx_2("UK3CB_BAF_SmokeShell"),tx_5("OPTRE_40Rnd_30x06_Mag")};
		respawnMagazines[] = {"kat_Painkiller","OPTRE_1Rnd_MasterKey_Pellets",tx_3("OPTRE_40Rnd_30x06_Mag"),tx_2("UK3CB_BAF_SmokeShell"),tx_5("OPTRE_40Rnd_30x06_Mag")};
    };

    class 4thot_u_mrm_tleader : 4thot_u_mrm_rifleman
    {
		displayName = "Team Leader";
        icon = "iconManLeader";

        linkedItems[] = {"OPTRE_Ins_BJ_Helmet","G_Balaclava_TI_blk_F","OPTRE_Ins_BJ_Armor","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_UL"};
		respawnLinkedItems[] = {"OPTRE_Ins_BJ_Helmet","G_Balaclava_TI_blk_F","OPTRE_Ins_BJ_Armor","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_UL"};
        magazines[] = {"kat_Painkiller",tx_3("OPTRE_1Rnd_MasterKey_Pellets"),tx_2("UK3CB_BAF_SmokeShell"),tx_3("OPTRE_40Rnd_30x06_Mag"),"OPTRE_40Rnd_30x06_Mag",tx_10("1Rnd_HE_Grenade_shell"),tx_2("1Rnd_HE_Grenade_shell"),tx_3("OPTRE_1Rnd_Smoke_Grenade_shell"),"OPTRE_1Rnd_Smoke_Grenade_shell"};
		respawnMagazines[] = {"kat_Painkiller",tx_3("OPTRE_1Rnd_MasterKey_Pellets"),tx_2("UK3CB_BAF_SmokeShell"),tx_3("OPTRE_40Rnd_30x06_Mag"),"OPTRE_40Rnd_30x06_Mag",tx_10("1Rnd_HE_Grenade_shell"),tx_2("1Rnd_HE_Grenade_shell"),tx_3("OPTRE_1Rnd_Smoke_Grenade_shell"),"OPTRE_1Rnd_Smoke_Grenade_shell"};
    };

    class 4thot_u_mrm_sleader : 4thot_u_mrm_rifleman
    {
		displayName = "Squad leader";
        icon = "iconManMedic";

        linkedItems[] = {"OPTRE_Ins_BJ_Helmet","G_Balaclava_TI_blk_F","OPTRE_Ins_BJ_Armor","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_UL_CNM"};
		respawnLinkedItems[] = {"OPTRE_Ins_BJ_Helmet","G_Balaclava_TI_blk_F","OPTRE_Ins_BJ_Armor","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_UL_CNM"};
        backpack = "4thot_e_OPTRE_ANPRC_521_Black_sl";
        magazines[] = {"kat_Painkiller","OPTRE_1Rnd_MasterKey_Pellets",tx_2("UK3CB_BAF_SmokeShell"),tx_5("OPTRE_40Rnd_30x06_Mag"),tx_10("1Rnd_HE_Grenade_shell"),tx_2("1Rnd_HE_Grenade_shell"),tx_3("OPTRE_1Rnd_Smoke_Grenade_shell"),"OPTRE_1Rnd_Smoke_Grenade_shell"};
		respawnMagazines[] = {"kat_Painkiller","OPTRE_1Rnd_MasterKey_Pellets",tx_2("UK3CB_BAF_SmokeShell"),tx_5("OPTRE_40Rnd_30x06_Mag"),tx_10("1Rnd_HE_Grenade_shell"),tx_2("1Rnd_HE_Grenade_shell"),tx_3("OPTRE_1Rnd_Smoke_Grenade_shell"),"OPTRE_1Rnd_Smoke_Grenade_shell"};
    };

    class 4thot_u_mrm_lmg : 4thot_u_mrm_rifleman
    {
		displayName = "Autorifleman";
        icon = "iconManMG";

        backpack = "4thot_e_B_ViperHarness_blk_F_auto";
        weapons[] = {"4thot_a_OPTRE_HMG38_auto","Knife_kukri","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_HMG38_auto","Knife_kukri","Throw","Put"};
        magazines[] = {"kat_Painkiller","OPTRE_1Rnd_MasterKey_Pellets",tx_2("UK3CB_BAF_SmokeShell"),tx_2("OPTRE_M9_Frag"),tx_3("OPTRE_100Rnd_30x06_Mag_Tracer")};
		respawnMagazines[] = {"kat_Painkiller","OPTRE_1Rnd_MasterKey_Pellets",tx_2("UK3CB_BAF_SmokeShell"),tx_2("OPTRE_M9_Frag"),tx_3("OPTRE_100Rnd_30x06_Mag_Tracer")};
    };

    class 4thot_u_mrm_marks : 4thot_u_mrm_rifleman
    {
		displayName = "Marksman";

        backpack = "4thot_e_B_ViperLightHarness_blk_F_mark";
        linkedItems[] = {"OPTRE_Ins_BJ_Helmet","G_Balaclava_TI_blk_F","OPTRE_Ins_BJ_Armor","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_MVI"};
		respawnLinkedItems[] = {"OPTRE_Ins_BJ_Helmet","G_Balaclava_TI_blk_F","OPTRE_Ins_BJ_Armor","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_MVI"};
        weapons[] = {"4thot_a_OPTRE_BR37_srm","4thot_a_optre_hgun_sas10_F_lsr","Rangefinder","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_BR37_srm","4thot_a_optre_hgun_sas10_F_lsr","Rangefinder","Throw","Put"};
        Items[] = {stditem,"ACE_RangeCard"};
		RespawnItems[] = {stditem,"ACE_RangeCard"};
        magazines[] = {"kat_Painkiller",tx_2("UK3CB_BAF_SmokeShell"),"OPTRE_M9_Frag",tx_5("OPTRE_10RND_338_AP"),tx_3("OPTRE_10RND_338_AP"),"OPTRE_10RND_338_AP",tx_2("16Rnd_10mm_Ball")};
		respawnMagazines[] = {"kat_Painkiller",tx_2("UK3CB_BAF_SmokeShell"),"OPTRE_M9_Frag",tx_5("OPTRE_10RND_338_AP"),tx_3("OPTRE_10RND_338_AP"),"OPTRE_10RND_338_AP",tx_2("16Rnd_10mm_Ball")};
    };

    class 4thot_u_mrm_mmg : 4thot_u_mrm_lmg
    {
		displayName = "Machinegunner";

        backpack = "4thot_e_B_ViperHarness_blk_F_mmg";
        weapons[] = {"4thot_w_a_hmg48h_a_srm","4thot_a_optre_hgun_sas10_F_lsr","Throw","Put"};
		respawnWeapons[] = {"4thot_w_a_hmg48h_a_srm","4thot_a_optre_hgun_sas10_F_lsr","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_2("UK3CB_BAF_SmokeShell"),tx_2("OPTRE_M9_Frag"),tx_2("4thot_b_86070_100_ap")};
		respawnMagazines[] = {"kat_Painkiller",tx_2("UK3CB_BAF_SmokeShell"),tx_2("OPTRE_M9_Frag"),tx_2("4thot_b_86070_100_ap")};
    };

    class 4thot_u_mrm_sgr : 4thot_u_mrm_rifleman
    {
		displayName = "Breacher";

        backpack = "";
        weapons[] = {"4thot_a_OPTRE_M90A_lsr","Knife_kukri","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_M90A_lsr","Knife_kukri","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_2("OPTRE_M9_Frag"),tx_5("OPTRE_12Rnd_8Gauge_Pellets"),"OPTRE_12Rnd_8Gauge_Pellets",tx_3("OPTRE_12Rnd_8Gauge_Slugs"),"OPTRE_12Rnd_8Gauge_Slugs"};
		respawnMagazines[] = {"kat_Painkiller",tx_2("OPTRE_M9_Frag"),tx_5("OPTRE_12Rnd_8Gauge_Pellets"),"OPTRE_12Rnd_8Gauge_Pellets",tx_3("OPTRE_12Rnd_8Gauge_Slugs"),"OPTRE_12Rnd_8Gauge_Slugs"};
    };

    class 4thot_u_mrm_ats : 4thot_u_mrm_rifleman
    {
		displayName = "Anti-Tank Specialist";
        icon = "iconManAT";

        backpack = "4thot_e_B_ViperHarness_blk_F_ats";
        weapons[] = {"4thot_a_OPTRE_HMG38_std","Knife_kukri","OPTRE_M41_SSR","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_HMG38_std","Knife_kukri","OPTRE_M41_SSR","Throw","Put"};
        magazines[] = {"kat_Painkiller","OPTRE_1Rnd_MasterKey_Pellets",tx_2("UK3CB_BAF_SmokeShell"),tx_2("OPTRE_M9_Frag"),tx_5("OPTRE_40Rnd_30x06_Mag"),tx_2("OPTRE_40Rnd_30x06_Mag")};
		respawnMagazines[] = {"kat_Painkiller","OPTRE_1Rnd_MasterKey_Pellets",tx_2("UK3CB_BAF_SmokeShell"),tx_2("OPTRE_M9_Frag"),tx_5("OPTRE_40Rnd_30x06_Mag"),tx_2("OPTRE_40Rnd_30x06_Mag")};
    };

    class 4thot_u_mrm_crew : 4thot_u_mrm_rifleman
    {
        displayName = "Crew";

        linkedItems[] = {"OPTRE_FC_VX19_Helmet_Urban","G_Balaclava_TI_blk_F","4thot_v_mrm_rebreather","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_UL_HUL"};
		respawnLinkedItems[] = {"OPTRE_FC_VX19_Helmet_Urban","G_Balaclava_TI_blk_F","4thot_v_mrm_rebreather","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_UL_HUL"};
        backpack = "B_LegStrapBag_black_F";
        weapons[] = {"4thot_a_OPTRE_MA5K_acos","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_MA5K_acos","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_2("UK3CB_BAF_SmokeShell"),tx_5("OPTRE_32Rnd_762x51_Mag")};
		respawnMagazines[] = {"kat_Painkiller",tx_2("UK3CB_BAF_SmokeShell"),tx_5("OPTRE_32Rnd_762x51_Mag")};
    };

    class OPTRE_M808B_INS;
    class 4thot_nmr_v_m808b : OPTRE_M808B_INS
    {
        faction = "4thot_u_mrm";

        crew = "4thot_u_mrm_crew";
    };

    class OPTRE_UNSC_hornet_ins;
    class 4thot_nmr_v_hornet : OPTRE_UNSC_hornet_ins
    {
        faction = "4thot_u_mrm";

        crew = "4thot_u_mrm_crew";
    };

    class OPTRE_M412_IFV_INS;
    class 4thot_nmr_v_bison_ifv : OPTRE_M412_IFV_INS
    {
        faction = "4thot_u_mrm";

        crew = "4thot_u_mrm_crew";
    };

    class OPTRE_M413_MGS_INS;
    class 4thot_nmr_v_bison_mgs : OPTRE_M413_MGS_INS
    {
        faction = "4thot_u_mrm";

        crew = "4thot_u_mrm_crew";
    };

    class OPTRE_M494_INS;
    class 4thot_nmr_v_oryx : OPTRE_M494_INS
    {
        faction = "4thot_u_mrm";

        crew = "4thot_u_mrm_crew";
    };

    class OPTRE_M12_TD_ins;
    class 4thot_nmr_v_hog_td : OPTRE_M12_TD_ins
    {
        faction = "4thot_u_mrm";

        crew = "4thot_u_mrm_rifleman";
    };

    class OPTRE_M12_LRV_ins;
    class 4thot_nmr_v_hog_mg : OPTRE_M12_LRV_ins
    {
        faction = "4thot_u_mrm";

        crew = "4thot_u_mrm_rifleman";
    };

    class OPTRE_M12_ins_APC;
    class 4thot_nmr_v_hog_apc : OPTRE_M12_ins_APC
    {
        faction = "4thot_u_mrm";

        crew = "4thot_u_mrm_rifleman";
    };

    class OPTRE_Static_FG75;
    class 4thot_nmr_s_fg75 : OPTRE_Static_FG75
    {
        faction = "4thot_u_mrm";

        crew = "4thot_u_mrm_rifleman";
    };

    class OPTRE_Static_M247H_Tripod;
    class 4thot_nmr_s_m247h : OPTRE_Static_M247H_Tripod
    {
        side = 0;
        faction = "4thot_u_mrm";

        crew = "4thot_u_mrm_rifleman";
    };

    class OPTRE_Static_M41_Ins;
    class 4thot_nmr_s_mg : OPTRE_Static_M41_Ins
    {
        faction = "4thot_u_mrm";

        crew = "4thot_u_mrm_rifleman";
    };

    class OPTRE_Static_AA_Ins;
    class 4thot_nmr_s_aa : OPTRE_Static_AA_Ins
    {
        faction = "4thot_u_mrm";

        crew = "4thot_u_mrm_rifleman";
    };

    class OPTRE_Static_ATGM_Ins;
    class 4thot_nmr_s_at : OPTRE_Static_ATGM_Ins
    {
        faction = "4thot_u_mrm";

        crew = "4thot_u_mrm_rifleman";
    };

    class OPTRE_Static_M247T_Tripod;
    class 4thot_nmr_s_m247t : OPTRE_Static_M247T_Tripod
    {
        side = 0;
        faction = "4thot_u_mrm";

        crew = "4thot_u_mrm_rifleman";
    };