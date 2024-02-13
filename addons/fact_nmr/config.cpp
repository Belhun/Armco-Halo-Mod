#include "script_component.hpp"
class CfgPatches {
    class darkmod_4thot_fact_nmr
	{
        weapons[] =
        {
            "4thot_a_OPTRE_MA5AGL_mrco",
            "4thot_a_OPTRE_MA5A_mrco",
            "4thot_a_OPTRE_MA5A_scope",
            "4thot_a_OPTRE_MA5A_aco",
            "4thot_a_OPTRE_Commando_Snow_ch",
            "4thot_a_OPTRE_CQS48_Bulldog_Automatic_Snow_acos",
            "4thot_a_OPTRE_Bulldog_Riot_Shield_Urban_acos",
            "4thot_a_OPTRE_M7_acos",
            "4thot_a_OPTRE_HMG38_std",
            "4thot_a_OPTRE_HMG38_auto",
            "4thot_a_OPTRE_BR37_srm",
            "4thot_a_MMG_02_black_F_srm",
            "4thot_a_OPTRE_M90A_lsr",
            "4thot_a_optre_hgun_sas10_F_lsr",
            "4thot_e_OPTRE_Ins_URF_Helmet1_White_lun",
            "4thot_e_OPTRE_ONI_Researcher_Headgear_lun",
            "4thot_e_OPTRE_Ins_BJ_Helmet_URB_lun"
        };
        units[] =
        {
            "4thot_e_B_SCBA_01_F",
            "4thot_e_B_ViperHarness_blk_F_std",
            "4thot_e_B_ViperHarness_blk_F_med",
            "4thot_e_B_ViperHarness_blk_F_auto",
            "4thot_e_B_ViperHarness_blk_F_mmg",
            "4thot_e_B_ViperHarness_blk_F_ats",
            "4thot_e_OPTRE_ANPRC_521_Black_sl",
            "4thot_e_B_ViperLightHarness_blk_F_mark",
            "4thot_nmr_f_rifleman",
            "4thot_nmr_f_rifleman_a",
            "4thot_nmr_f_rifleman_br",
            "4thot_nmr_f_rifleman_k",
            "4thot_nmr_f_cqbs_sg",
            "4thot_nmr_f_cqbs_shd",
            "4thot_nmr_f_cqbs_smg",
            "4thot_nmr_f_medic",
            "4thot_nmr_f_sleader",
            "4thot_nmr_i_soldier",
            "4thot_nmr_i_soldier_k",
            "4thot_nmr_i_soldier_h",
            "4thot_nmr_i_militia",
            "4thot_nmr_i_militia_s10",
            "4thot_nmr_i_militia_a",
            "4thot_nmr_i_militia_s10_a",
            "4thot_nmr_i_soldier_mle",
            "4thot_nmr_i_militia_mle",
            "4thot_nmr_i_militia_mle_a",
            "4thot_nmr_i_militia_mle_b",
            "4thot_nmr_i_militia_mle_c",
            "4thot_nmr_i_militia_mle_d",
            "4thot_nmr_i_militia_mle_e",
            "4thot_nmr_i_militia_mle_f",
            "4thot_nmr_i_militia_mle_g",
            "4thot_nmr_i_militia_mle_h",
            "4thot_nmr_m_rifleman",
            "4thot_nmr_m_medic",
            "4thot_nmr_m_tleader",
            "4thot_nmr_m_sleader",
            "4thot_nmr_m_lmg",
            "4thot_nmr_m_marks",
            "4thot_nmr_m_mmg",
            "4thot_nmr_m_sgr",
            "4thot_nmr_m_ats",
            "4thot_nmr_m_crew",
            "4thot_nmr_v_m808s",
            "4thot_nmr_v_m808b",
            "4thot_nmr_v_hornet",
            "4thot_nmr_v_bison_ifv",
            "4thot_nmr_v_bison_mgs",
            "4thot_nmr_v_oryx",
            "4thot_nmr_v_hog_td",
            "4thot_nmr_v_hog_mg",
            "4thot_nmr_v_hog_apc",
            "4thot_nmr_s_fg75",
            "4thot_nmr_s_m247h",
            "4thot_nmr_s_mg",
            "4thot_nmr_s_aa",
            "4thot_nmr_s_at",
            "4thot_nmr_s_m247t"
        };
        magazines[] =
        {
            "4thot_b_86070_100_ap"
        };
        requiredAddons[] =
            {
            "OPTRE_Loadorder",
            "A3_Data_F_Enoch_Loadorder"
            };

        authors[] = {"Belhun", "Darknessvoid99"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CfgFactionClasses
{
    class 4thot_nmr_m
    {
        displayName = "Madrigal Republican Marines (Space)";
    };
};

class CfgEditorSubcategories
{
    class 4thot_mrm
    {
        displayName = "Men (Marines)";
    };
    class 4thot_mmf
    {
        displayName = "Men (Security)";
    };
    class 4thot_fmm
    {
        displayName = "Men (Militia)";
    };
};

class CfgMagazines
{
    class 130Rnd_338_Mag;
    class 4thot_b_86070_100_ap : 130Rnd_338_Mag
    {
        displayName = "100rnd 8.6x70mm AP-W(T3E10) HBOX";
        displayNameShort = "";
        descriptionShort = "AP17 Armor Piercing Rounds<br/>AP17T Piercing Tracer(W) Rounds<br/>100 Rounds, Tracer every 3, 3 End Tracers";

        ammo = "OPTRE_B_338_AP";
        tracersEvery = 3;
        lastRoundsTracer = 10;

        //mass = 60;
        count = 100;
    };
};

class CfgRecoils
{
    class recoil_ebr;

    class 4thot_a_hmg48h : recoil_ebr
    {
        permanent = "0.1*0.4";
        temporary = "0.01*0.6";
    };
};

class CfgWeapons
{
    class OPTRE_MA5AGL;
    class 4thot_a_OPTRE_MA5AGL_mrco : OPTRE_MA5AGL
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
		class LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
		};
    };

    class OPTRE_MA5A;
    class 4thot_a_OPTRE_MA5A_mrco : OPTRE_MA5A
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
		class LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
		};
    };

    class 4thot_a_OPTRE_MA5A_scope : OPTRE_MA5A
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
		class LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_BR55HB_Scope_Grey";
			};
		};
    };

    class 4thot_a_OPTRE_MA5A_aco : OPTRE_MA5A
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
		class LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Aco";
			};
		};
    };

    class OPTRE_Commando_Snow;
    class 4thot_a_OPTRE_Commando_Snow_ch : OPTRE_Commando_Snow
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        class LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_HMG38_CarryHandle";
			};
        };
    };

    class OPTRE_CQS48_Bulldog_Automatic_Snow;
    class 4thot_a_OPTRE_CQS48_Bulldog_Automatic_Snow_acos : OPTRE_CQS48_Bulldog_Automatic_Snow
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        class LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Aco_smg";
			};

			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
        };
    };

    class OPTRE_Bulldog_Riot_Shield_Urban;
    class 4thot_a_OPTRE_Bulldog_Riot_Shield_Urban_acos : OPTRE_Bulldog_Riot_Shield_Urban
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
        };
    };

    class OPTRE_M7;
    class 4thot_a_OPTRE_M7_acos : OPTRE_M7
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        class LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Aco_smg";
			};
        };
    };

    class OPTRE_HMG38;
    class 4thot_a_OPTRE_HMG38_std : OPTRE_HMG38
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_M73_SmartLink";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M6C_Vis_Red_Laser";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "ACE_muzzle_mzls_B";
			};
    	};
    };

    class 4thot_a_OPTRE_HMG38_auto : OPTRE_HMG38
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_M73_SmartLink";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M6C_Vis_Red_Laser";
			};
			class LinkedItemsUnder
			{
			    slot = "UnderBarrelSlot";
            	item = "bipod_01_F_blk";
        	};
    	};
    };

    class OPTRE_BR37;
    class 4thot_a_OPTRE_BR37_srm : OPTRE_BR37
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_SRM_Sight";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M6C_Vis_Red_Laser";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "OPTRE_M7_silencer";
			};
    	};
    };

    class MMG_02_camo_F;
    class MMG_02_black_F : MMG_02_camo_F
    {
        class manual;
    };

    class 4thot_w_a_hmg48h : MMG_02_black_F
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        baseweapon = "4thot_w_a_hmg48h";

        displayName = "HMG-48H Machinegun";
        descriptionShort = "Medium Machine Gun<br />Caliber: 8.6x70mm";

        magazines[] = {"4thot_b_86070_100_ap"};
        magazineWell[] = {};
        recoil = "4thot_a_hmg48h";

        class manual : manual
        {
            reloadTime = 0.075;
            dispersion = 0.00126;
        };

        class close : manual
        {
            aiDispersionCoefX = 3;  //3.78 MIL
            aiDispersionCoefY = 5;  //6.30 MIL

            aiBurstTerminable = 1;
            aiRateOfFire = 1;
            aiRateOfFireDispersion = 1;
            aiRateOfFireDistance = 50;
            burst = 10;

            maxRange = 50;
            maxRangeProbab = 0.04;
            midRange = 25;
            midRangeProbab = 0.7;
            minRange = 0;
            minRangeProbab = 0.05;

            showToPlayer = 0;
        };

        class short : close
        {
            aiDispersionCoefX = 1;  //1.26 MIL
            aiDispersionCoefY = 2;  //2.52 MIL

            aiBurstTerminable = 0;
            aiRateOfFireDistance = 200;
            burst = 10;

            maxRange = 200;
            maxRangeProbab = 0.04;
            midRange = 100;
            midRangeProbab = 0.7;
            minRange = 50;
            minRangeProbab = 0.05;
        };

        class medium : short
        {
            aiDispersionCoefX = 1.5;    //1.80 MIL
            aiDispersionCoefY = 2.5;    //3.15 MIL

            aiRateOfFire = 3;
            aiRateOfFireDispersion = 2;
            aiRateOfFireDistance = 800;
            burst = 10;

            maxRange = 800;
            maxRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            minRange = 200;
            minRangeProbab = 0.05;
        };

        class far_optic1 : medium
        {
            aiDispersionCoefX = 2;    //2.52 MIL
            aiDispersionCoefY = 3;    //3.78 MIL

            aiRateOfFire = 3;
            aiRateOfFireDispersion = 3;
            aiRateOfFireDistance = 800;
            burst = 5;

            maxRange = 1200;
            maxRangeProbab = 0.01;
            midRange = 1000;
            midRangeProbab = 0.5;
            minRange = 800;
            minRangeProbab = 0.04;

            requiredOpticType = 1;
        };

        class far_optic2 : far_optic1
        {
            aiDispersionCoefX = 1.5;    //1.80 MIL
            aiDispersionCoefY = 2.5;    //3.15 MIL

            aiRateOfFire = 4;
            aiRateOfFireDispersion = 4;
            aiRateOfFireDistance = 1200;
            burst = 5;

            maxRange = 2000;
            maxRangeProbab = 0.01;
            midRange = 1600;
            midRangeProbab = 0.5;
            minRange = 1200;
            minRangeProbab = 0.05;

            requiredOpticType = 2;
        };
    };


    class 4thot_w_a_hmg48h_a_srm : 4thot_w_a_hmg48h
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_SRM_Sight";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
			class LinkedItemsUnder
			{
			    slot = "UnderBarrelSlot";
            	item = "bipod_01_F_blk";
        	};
    	};
    };

    class OPTRE_M90A;
    class 4thot_a_OPTRE_M90A_lsr : OPTRE_M90A
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M12_Laser";
			};
    	};
    };

    class optre_hgun_sas10_F;
    class 4thot_a_optre_hgun_sas10_F_lsr : optre_hgun_sas10_F
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M6C_Vis_Red_Laser";
			};
    	};
    };

    class OPTRE_Ins_URF_Helmet1_White;
    class 4thot_e_OPTRE_Ins_URF_Helmet1_White_lun : OPTRE_Ins_URF_Helmet1_White
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        allowedfacewear[] = {"VES_HUD_APR_03",1};
    };

    class OPTRE_ONI_Researcher_Headgear;
    class 4thot_e_OPTRE_ONI_Researcher_Headgear_lun : OPTRE_ONI_Researcher_Headgear
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        allowedfacewear[] = {"",1};
    };

    class OPTRE_Ins_BJ_Helmet_URB;
    class 4thot_e_OPTRE_Ins_BJ_Helmet_URB_lun : OPTRE_Ins_BJ_Helmet_URB
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
        allowedfacewear[] = {"G_Balaclava_TI_blk_F",1};
    };
};

class CfgVehicles
{
    class B_SCBA_01_F;
    class 4thot_e_B_SCBA_01_F : B_SCBA_01_F
    {
        scope = 1;
        scopeCurator = 1;
        ScopeArsenal = 1;
    };

    class B_ViperHarness_blk_F;
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

    class OPTRE_ANPRC_521_Black;
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

    class B_ViperLightHarness_blk_F;
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
    class OPTRE_Ins_URF_Unarmed;

    class 4thot_nmr_f_rifleman : OPTRE_Ins_URF_Unarmed
    {
        side = 0;
		author = "Darknessvoid99";
		displayName = "Rifleman (AR)";
		icon = "iconMan";
		faction = "4thot_nmr_m";
		editorSubcategory = "4thot_mmf";

        uniformClass = "OPTRE_Ins_URF_Combat_Uniform";
        linkedItems[] = {"4thot_e_OPTRE_Ins_URF_Helmet1_White_lun","VES_HUD_APR_03","OPTRE_Ins_URF_Snow_Armor1_Flat","ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar"};
		respawnLinkedItems[] = {"4thot_e_OPTRE_Ins_URF_Helmet1_White_lun","VES_HUD_APR_03","OPTRE_Ins_URF_Snow_Armor1_Flat","ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar"};
        backpack = "4thot_e_B_SCBA_01_F";
        weapons[] = {"4thot_a_OPTRE_MA5A_aco","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_MA5A_aco","Throw","Put"};
        Items[] = {stditem};
		RespawnItems[] = {stditem};
        magazines[] = {"kat_Painkiller",tx_10("OPTRE_32Rnd_762x51_Mag_Tracer"),"OPTRE_32Rnd_762x51_Mag_Tracer"};
		respawnMagazines[] = {"kat_Painkiller",tx_10("OPTRE_32Rnd_762x51_Mag_Tracer"),"OPTRE_32Rnd_762x51_Mag_Tracer"};

        class EventHandlers {init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];";};
        headgearList[] = {"4thot_e_OPTRE_Ins_URF_Helmet1_White_lun",1};

    };

    class 4thot_nmr_f_rifleman_a : 4thot_nmr_f_rifleman
    {
        scope = 1;

        weapons[] = {"4thot_a_OPTRE_MA5A_mrco","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_MA5A_mrco","Throw","Put"};
    };

    class 4thot_nmr_f_rifleman_br : 4thot_nmr_f_rifleman
    {
        displayName = "Rifleman (BR)";

        weapons[] = {"4thot_a_OPTRE_Commando_Snow_ch","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_Commando_Snow_ch","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("Command_20Rnd_65_TracerR_Mag"),tx_3("Command_20Rnd_65_TracerR_Mag"),"Command_20Rnd_65_TracerR_Mag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"kat_Painkiller",tx_5("Command_20Rnd_65_TracerR_Mag"),tx_3("Command_20Rnd_65_TracerR_Mag"),"Command_20Rnd_65_TracerR_Mag","OPTRE_M9_Frag"};
    };

    class 4thot_nmr_f_rifleman_k : 4thot_nmr_f_rifleman
    {
        displayName = "Rifleman (CB)";

        weapons[] = {"OPTRE_MA5K","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5K","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_10("OPTRE_32Rnd_762x51_Mag"),"OPTRE_32Rnd_762x51_Mag"};
		respawnMagazines[] = {"kat_Painkiller",tx_10("OPTRE_32Rnd_762x51_Mag"),"OPTRE_32Rnd_762x51_Mag"};
    };

    class 4thot_nmr_f_cqbs_sg : 4thot_nmr_f_rifleman
    {
        displayName = "CQB Specialist (SG)";

        weapons[] = {"4thot_a_OPTRE_CQS48_Bulldog_Automatic_Snow_acos","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_CQS48_Bulldog_Automatic_Snow_acos","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("OPTRE_12Rnd_12Gauge_Pellets_Tracer"),tx_3("OPTRE_12Rnd_12Gauge_Pellets_Tracer"),"OPTRE_M9_Frag"};
		respawnMagazines[] = {"kat_Painkiller",tx_5("OPTRE_12Rnd_12Gauge_Pellets_Tracer"),tx_3("OPTRE_12Rnd_12Gauge_Pellets_Tracer"),"OPTRE_M9_Frag"};
    };

    class 4thot_nmr_f_cqbs_shd : 4thot_nmr_f_cqbs_sg
    {
        displayName = "CQB Specialist (SHD)";

        weapons[] = {"4thot_a_OPTRE_Bulldog_Riot_Shield_Urban_acos","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_Bulldog_Riot_Shield_Urban_acos","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("OPTRE_12Rnd_12Gauge_Pellets_Tracer"),tx_3("OPTRE_12Rnd_12Gauge_Pellets_Tracer")};
		respawnMagazines[] = {"kat_Painkiller",tx_5("OPTRE_12Rnd_12Gauge_Pellets_Tracer"),tx_3("OPTRE_12Rnd_12Gauge_Pellets_Tracer")};
    };

    class 4thot_nmr_f_cqbs_smg : 4thot_nmr_f_rifleman
    {
        displayName = "CQB Specialist (SMG)";

        weapons[] = {"4thot_a_OPTRE_M7_acos","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_M7_acos","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("OPTRE_48Rnd_5x23mm_Mag_tracer"),tx_10("OPTRE_48Rnd_5x23mm_Mag_tracer"),"OPTRE_M9_Frag","OPTRE_M9_Frag"};
		respawnMagazines[] = {"kat_Painkiller",tx_5("OPTRE_48Rnd_5x23mm_Mag_tracer"),tx_10("OPTRE_48Rnd_5x23mm_Mag_tracer"),"OPTRE_M9_Frag","OPTRE_M9_Frag"};
    };

    class 4thot_nmr_f_medic : 4thot_nmr_f_cqbs_smg
    {
        displayName = "Combat Medic";
        icon = "iconManMedic";
        Attendant = 1;

        linkedItems[] = {"OPTRE_FC_CH255_Helmet_SNO_Medic","VES_HUD_APR_03","OPTRE_Ins_URF_Snow_Armor1_Flat","ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar"};
		respawnLinkedItems[] = {"OPTRE_FC_CH255_Helmet_SNO_Medic","VES_HUD_APR_03","OPTRE_Ins_URF_Snow_Armor1_Flat","ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar"};
        Items[] = {stditem,meditem};
		RespawnItems[] = {stditem,meditem};
        magazines[] = {tx_5("kat_Painkiller"),tx_10("OPTRE_48Rnd_5x23mm_Mag_tracer")};
		respawnMagazines[] = {tx_5("kat_Painkiller"),tx_10("OPTRE_48Rnd_5x23mm_Mag_tracer")};
    };

    class 4thot_nmr_f_sleader : 4thot_nmr_f_cqbs_smg
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
    class 4thot_nmr_i_soldier : 4thot_nmr_f_rifleman
    {
		displayName = "Soldier (SMG)";
		icon = "iconManVirtual";
		editorSubcategory = "4thot_fmm";

        backpack = "";
        uniformClass = "OPTRE_UNSC_Army_Uniform_T_BLK";
        linkedItems[] = {"4thot_e_OPTRE_ONI_Researcher_Headgear_lun","V_BandollierB_blk","ItemRadio"};
		respawnLinkedItems[] = {"4thot_e_OPTRE_ONI_Researcher_Headgear_lun","V_BandollierB_blk","ItemRadio"};
        weapons[] = {"4thot_a_OPTRE_M7_acos","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_M7_acos","Throw","Put"};
        Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet"};
        magazines[] = {"kat_Painkiller",tx_5("OPTRE_48Rnd_5x23mm_Mag_tracer")};
		respawnMagazines[] = {"kat_Painkiller",tx_5("OPTRE_48Rnd_5x23mm_Mag_tracer")};

        facewear = "";
        allowedfacewear[] = {"",1};
        headgearList[] = {"4thot_e_OPTRE_ONI_Researcher_Headgear_lun",1};
    };

    class 4thot_nmr_i_soldier_k : 4thot_nmr_i_soldier
    {
		displayName = "Soldier (CB)";

        uniformClass = "OPTRE_Ins_URF_Combat_Uniform";
        linkedItems[] = {"4thot_e_OPTRE_ONI_Researcher_Headgear_lun","V_LegStrapBag_black_F","ItemRadio","VES_NVG_Collar"};
		respawnLinkedItems[] = {"4thot_e_OPTRE_ONI_Researcher_Headgear_lun","V_LegStrapBag_black_F","ItemRadio","VES_NVG_Collar"};
        weapons[] = {"OPTRE_MA5K","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5K","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("OPTRE_32Rnd_762x51_Mag")};
		respawnMagazines[] = {"kat_Painkiller",tx_5("OPTRE_32Rnd_762x51_Mag")};
    };

    class 4thot_nmr_i_soldier_h : 4thot_nmr_i_soldier_k
    {
		displayName = "Soldier (HG)";

        linkedItems[] = {"4thot_e_OPTRE_ONI_Researcher_Headgear_lun","VES_Holster_CPD","ItemRadio","VES_NVG_Collar"};
		respawnLinkedItems[] = {"4thot_e_OPTRE_ONI_Researcher_Headgear_lun","VES_Holster_CPD","ItemRadio","VES_NVG_Collar"};
        weapons[] = {"optre_hgun_sas10_F","Throw","Put"};
		respawnWeapons[] = {"optre_hgun_sas10_F","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("16Rnd_10mm_Ball")};
		respawnMagazines[] = {"kat_Painkiller",tx_5("16Rnd_10mm_Ball")};
    };

    class 4thot_nmr_i_militia : 4thot_nmr_i_soldier
    {
		displayName = "Militiaman (M6)";

        uniformClass = "OPTRE_Ins_ER_rolled_jean_orca";
        linkedItems[] = {"4thot_e_OPTRE_ONI_Researcher_Headgear_lun","V_LegStrapBag_black_F","ItemRadio","VES_NVG_Collar"};
		respawnLinkedItems[] = {"4thot_e_OPTRE_ONI_Researcher_Headgear_lun","V_LegStrapBag_black_F","ItemRadio","VES_NVG_Collar"};
        weapons[] = {"OPTRE_M6B","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M6B","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("OPTRE_8Rnd_127x40_Mag")};
		respawnMagazines[] = {"kat_Painkiller",tx_5("OPTRE_8Rnd_127x40_Mag")};
    };

    class 4thot_nmr_i_militia_s10 : 4thot_nmr_i_soldier
    {
		displayName = "Militiaman (SAS10)";

        uniformClass = "U_I_G_resistanceLeader_F";
        linkedItems[] = {"4thot_e_OPTRE_ONI_Researcher_Headgear_lun","VES_Holster_CPD","ItemRadio","VES_NVG_Collar"};
		respawnLinkedItems[] = {"4thot_e_OPTRE_ONI_Researcher_Headgear_lun","VES_Holster_CPD","ItemRadio","VES_NVG_Collar"};
        weapons[] = {"optre_hgun_sas10_F","Throw","Put"};
		respawnWeapons[] = {"optre_hgun_sas10_F","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("16Rnd_10mm_Ball")};
		respawnMagazines[] = {"kat_Painkiller",tx_5("16Rnd_10mm_Ball")};
    };

    class 4thot_nmr_i_militia_a : 4thot_nmr_i_soldier
    {
		displayName = "Militiaman (M6) Alt";

        uniformClass = "OPTRE_Ins_ER_rolled_surplus_crimson";
        linkedItems[] = {"4thot_e_OPTRE_ONI_Researcher_Headgear_lun","V_LegStrapBag_black_F","ItemRadio","VES_NVG_Collar"};
		respawnLinkedItems[] = {"4thot_e_OPTRE_ONI_Researcher_Headgear_lun","V_LegStrapBag_black_F","ItemRadio","VES_NVG_Collar"};
        weapons[] = {"OPTRE_M6B","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M6B","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("OPTRE_8Rnd_127x40_Mag")};
		respawnMagazines[] = {"kat_Painkiller",tx_5("OPTRE_8Rnd_127x40_Mag")};
    };

    class 4thot_nmr_i_militia_s10_a : 4thot_nmr_i_soldier
    {
		displayName = "Militiaman (SAS10) Alt";

        uniformClass = "OPTRE_Ins_ER_rolled_OD_blknred";
        linkedItems[] = {"4thot_e_OPTRE_ONI_Researcher_Headgear_lun","VES_Holster_CPD","ItemRadio","VES_NVG_Collar"};
		respawnLinkedItems[] = {"4thot_e_OPTRE_ONI_Researcher_Headgear_lun","VES_Holster_CPD","ItemRadio","VES_NVG_Collar"};
        weapons[] = {"optre_hgun_sas10_F","Throw","Put"};
		respawnWeapons[] = {"optre_hgun_sas10_F","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_5("16Rnd_10mm_Ball")};
		respawnMagazines[] = {"kat_Painkiller",tx_5("16Rnd_10mm_Ball")};
    };

    class O_soldier_Melee_RUSH;

    class 4thot_nmr_i_soldier_mle : O_soldier_Melee_RUSH
    {
        scope = 2;
        side = 0;
        author = "Darknessvoid99";
        displayName = "Soldier (Melee)";
		icon = "iconManVirtual";
        faction = "4thot_nmr_m";
		editorSubcategory = "4thot_fmm";

        uniformClass = "OPTRE_UNSC_Army_Uniform_T_BLK";
        linkedItems[] = {"4thot_e_OPTRE_ONI_Researcher_Headgear_lun","ItemWatch"};
		respawnLinkedItems[] = {"4thot_e_OPTRE_ONI_Researcher_Headgear_lun","ItemWatch"};
        backpack = "";
        weapons[] = {"Knife_kukri","Throw","Put"};
		respawnWeapons[] = {"Knife_kukri","Throw","Put"};
        Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet"};
        magazines[] = {"kat_Painkiller"};
		respawnMagazines[] = {"kat_Painkiller"};

        facewear = "";
        allowedfacewear[] = {"",1};
        headgearList[] = {"",1};
    };

    class 4thot_nmr_i_militia_mle : 4thot_nmr_i_soldier_mle
    {
        scope = 1;
        displayName = "Militia (Hammer)";

        uniformClass = "U_C_Uniform_Farmer_01_F";
        weapons[] = {"WBK_survival_weapon_2","Throw","Put"};
		respawnWeapons[] = {"WBK_survival_weapon_2","Throw","Put"};
    };

    class 4thot_nmr_i_militia_mle_a : 4thot_nmr_i_soldier_mle
    {
        scope = 1;
        displayName = "Militia (Pipe)";

        uniformClass = "U_C_ArtTShirt_01_v5_F";
        weapons[] = {"Pipe_aluminium","Throw","Put"};
		respawnWeapons[] = {"Pipe_aluminium","Throw","Put"};
    };

    class 4thot_nmr_i_militia_mle_b : 4thot_nmr_i_soldier_mle
    {
        scope = 1;
        displayName = "Militia (Crowbar)";

        uniformClass = "U_C_ArtTShirt_01_v6_F";
        weapons[] = {"Crowbar","Throw","Put"};
		respawnWeapons[] = {"Crowbar","Throw","Put"};
    };

    class 4thot_nmr_i_militia_mle_c : 4thot_nmr_i_soldier_mle
    {
        scope = 1;
        displayName = "Militia (Knife)";

        uniformClass = "U_I_C_Soldier_Bandit_3_F";
        weapons[] = {"Knife_m3","Throw","Put"};
		respawnWeapons[] = {"Knife_m3","Throw","Put"};
    };

    class 4thot_nmr_i_militia_mle_d : 4thot_nmr_i_soldier_mle
    {
        scope = 1;
        displayName = "Militia (Shovel)";

        uniformClass = "U_I_C_Soldier_Bandit_5_F";
        weapons[] = {"Shovel_Russian","Throw","Put"};
		respawnWeapons[] = {"Shovel_Russian","Throw","Put"};
    };

    class 4thot_nmr_i_militia_mle_e : 4thot_nmr_i_militia_mle_a
    {
        scope = 2;
        uniformClass = "OPTRE_Ins_ER_rolled_OD_crimson";
    };

    class 4thot_nmr_i_militia_mle_f : 4thot_nmr_i_militia_mle_b
    {
        scope = 2;
        uniformClass = "OPTRE_Ins_ER_rolled_surplus_black";
    };

    class 4thot_nmr_i_militia_mle_g : 4thot_nmr_i_militia_mle_c
    {
        scope = 2;
        uniformClass = "OPTRE_Ins_ER_rolled_surplus_crimson";
    };

    class 4thot_nmr_i_militia_mle_h : 4thot_nmr_i_militia_mle_d
    {
        uniformClass = "U_I_G_resistanceLeader_F";
    };
//Marines
    class 4thot_nmr_m_rifleman : 4thot_nmr_f_rifleman
    {
        side = 0;
		displayName = "Rifleman";
		faction = "4thot_nmr_m";
		editorSubcategory = "4thot_mrm";

        uniformClass = "OPTRE_Ins_BJ_Undersuit";
        linkedItems[] = {"4thot_e_OPTRE_Ins_BJ_Helmet_URB_lun","G_Balaclava_TI_blk_F","OPTRE_Ins_BJ_Armor_URB","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] = {"4thot_e_OPTRE_Ins_BJ_Helmet_URB_lun","G_Balaclava_TI_blk_F","OPTRE_Ins_BJ_Armor_URB","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
        backpack = "4thot_e_B_ViperHarness_blk_F_std";
        weapons[] = {"4thot_a_OPTRE_HMG38_std","Knife_kukri","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_HMG38_std","Knife_kukri","Throw","Put"};
        Items[] = {stditem};
		RespawnItems[] = {stditem};
        magazines[] = {"kat_Painkiller",tx_3("OPTRE_1Rnd_MasterKey_Pellets"),tx_2("UK3CB_BAF_SmokeShell"),tx_2("OPTRE_M9_Frag"),tx_5("OPTRE_40Rnd_30x06_Mag"),"OPTRE_40Rnd_30x06_Mag"};
		respawnMagazines[] = {"kat_Painkiller",tx_3("OPTRE_1Rnd_MasterKey_Pellets"),tx_2("UK3CB_BAF_SmokeShell"),tx_2("OPTRE_M9_Frag"),tx_5("OPTRE_40Rnd_30x06_Mag"),"OPTRE_40Rnd_30x06_Mag"};

        class EventHandlers {init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];";};
        headgearList[] = {"4thot_e_OPTRE_Ins_BJ_Helmet_URB_lun",1};
    };

    class 4thot_nmr_m_medic : 4thot_nmr_m_rifleman
    {
		displayName = "Combat Medic";
        icon = "iconManMedic";
        Attendant = 1;

        backpack = "4thot_e_B_ViperHarness_blk_F_med";
        magazines[] = {"kat_Painkiller","OPTRE_1Rnd_MasterKey_Pellets",tx_3("OPTRE_40Rnd_30x06_Mag"),tx_2("UK3CB_BAF_SmokeShell"),tx_5("OPTRE_40Rnd_30x06_Mag")};
		respawnMagazines[] = {"kat_Painkiller","OPTRE_1Rnd_MasterKey_Pellets",tx_3("OPTRE_40Rnd_30x06_Mag"),tx_2("UK3CB_BAF_SmokeShell"),tx_5("OPTRE_40Rnd_30x06_Mag")};
    };

    class 4thot_nmr_m_tleader : 4thot_nmr_m_rifleman
    {
		displayName = "Team Leader";
        icon = "iconManLeader";

        linkedItems[] = {"4thot_e_OPTRE_Ins_BJ_Helmet_URB_lun","G_Balaclava_TI_blk_F","OPTRE_Ins_BJ_Armor_URB","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_UL"};
		respawnLinkedItems[] = {"4thot_e_OPTRE_Ins_BJ_Helmet_URB_lun","G_Balaclava_TI_blk_F","OPTRE_Ins_BJ_Armor_URB","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_UL"};
        magazines[] = {"kat_Painkiller",tx_3("OPTRE_1Rnd_MasterKey_Pellets"),tx_2("UK3CB_BAF_SmokeShell"),tx_3("OPTRE_40Rnd_30x06_Mag"),"OPTRE_40Rnd_30x06_Mag",tx_10("1Rnd_HE_Grenade_shell"),tx_2("1Rnd_HE_Grenade_shell"),tx_3("OPTRE_1Rnd_Smoke_Grenade_shell"),"OPTRE_1Rnd_Smoke_Grenade_shell"};
		respawnMagazines[] = {"kat_Painkiller",tx_3("OPTRE_1Rnd_MasterKey_Pellets"),tx_2("UK3CB_BAF_SmokeShell"),tx_3("OPTRE_40Rnd_30x06_Mag"),"OPTRE_40Rnd_30x06_Mag",tx_10("1Rnd_HE_Grenade_shell"),tx_2("1Rnd_HE_Grenade_shell"),tx_3("OPTRE_1Rnd_Smoke_Grenade_shell"),"OPTRE_1Rnd_Smoke_Grenade_shell"};
    };

    class 4thot_nmr_m_sleader : 4thot_nmr_m_rifleman
    {
		displayName = "Squad leader";
        icon = "iconManMedic";

        linkedItems[] = {"4thot_e_OPTRE_Ins_BJ_Helmet_URB_lun","G_Balaclava_TI_blk_F","OPTRE_Ins_BJ_Armor_URB","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_UL_CNM"};
		respawnLinkedItems[] = {"4thot_e_OPTRE_Ins_BJ_Helmet_URB_lun","G_Balaclava_TI_blk_F","OPTRE_Ins_BJ_Armor_URB","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_UL_CNM"};
        backpack = "4thot_e_OPTRE_ANPRC_521_Black_sl";
        magazines[] = {"kat_Painkiller","OPTRE_1Rnd_MasterKey_Pellets",tx_2("UK3CB_BAF_SmokeShell"),tx_5("OPTRE_40Rnd_30x06_Mag"),tx_10("1Rnd_HE_Grenade_shell"),tx_2("1Rnd_HE_Grenade_shell"),tx_3("OPTRE_1Rnd_Smoke_Grenade_shell"),"OPTRE_1Rnd_Smoke_Grenade_shell"};
		respawnMagazines[] = {"kat_Painkiller","OPTRE_1Rnd_MasterKey_Pellets",tx_2("UK3CB_BAF_SmokeShell"),tx_5("OPTRE_40Rnd_30x06_Mag"),tx_10("1Rnd_HE_Grenade_shell"),tx_2("1Rnd_HE_Grenade_shell"),tx_3("OPTRE_1Rnd_Smoke_Grenade_shell"),"OPTRE_1Rnd_Smoke_Grenade_shell"};
    };

    class 4thot_nmr_m_lmg : 4thot_nmr_m_rifleman
    {
		displayName = "Autorifleman";
        icon = "iconManMG";

        backpack = "4thot_e_B_ViperHarness_blk_F_auto";
        weapons[] = {"4thot_a_OPTRE_HMG38_auto","Knife_kukri","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_HMG38_auto","Knife_kukri","Throw","Put"};
        magazines[] = {"kat_Painkiller","OPTRE_1Rnd_MasterKey_Pellets",tx_2("UK3CB_BAF_SmokeShell"),tx_2("OPTRE_M9_Frag"),tx_3("OPTRE_100Rnd_30x06_Mag_Tracer")};
		respawnMagazines[] = {"kat_Painkiller","OPTRE_1Rnd_MasterKey_Pellets",tx_2("UK3CB_BAF_SmokeShell"),tx_2("OPTRE_M9_Frag"),tx_3("OPTRE_100Rnd_30x06_Mag_Tracer")};
    };

    class 4thot_nmr_m_marks : 4thot_nmr_m_rifleman
    {
		displayName = "Marksman";

        backpack = "4thot_e_B_ViperLightHarness_blk_F_mark";
        linkedItems[] = {"4thot_e_OPTRE_Ins_BJ_Helmet_URB_lun","G_Balaclava_TI_blk_F","OPTRE_Ins_BJ_Armor_URB","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_MVI"};
		respawnLinkedItems[] = {"4thot_e_OPTRE_Ins_BJ_Helmet_URB_lun","G_Balaclava_TI_blk_F","OPTRE_Ins_BJ_Armor_URB","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_MVI"};
        weapons[] = {"4thot_a_OPTRE_BR37_srm","4thot_a_optre_hgun_sas10_F_lsr","Rangefinder","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_BR37_srm","4thot_a_optre_hgun_sas10_F_lsr","Rangefinder","Throw","Put"};
        Items[] = {stditem,"ACE_RangeCard"};
		RespawnItems[] = {stditem,"ACE_RangeCard"};
        magazines[] = {"kat_Painkiller",tx_2("UK3CB_BAF_SmokeShell"),"OPTRE_M9_Frag",tx_5("OPTRE_10RND_338_AP"),tx_3("OPTRE_10RND_338_AP"),"OPTRE_10RND_338_AP",tx_2("16Rnd_10mm_Ball")};
		respawnMagazines[] = {"kat_Painkiller",tx_2("UK3CB_BAF_SmokeShell"),"OPTRE_M9_Frag",tx_5("OPTRE_10RND_338_AP"),tx_3("OPTRE_10RND_338_AP"),"OPTRE_10RND_338_AP",tx_2("16Rnd_10mm_Ball")};
    };

    class 4thot_nmr_m_mmg : 4thot_nmr_m_lmg
    {
		displayName = "Machinegunner";

        backpack = "4thot_e_B_ViperHarness_blk_F_mmg";
        weapons[] = {"4thot_w_a_hmg48h_a_srm","4thot_a_optre_hgun_sas10_F_lsr","Throw","Put"};
		respawnWeapons[] = {"4thot_w_a_hmg48h_a_srm","4thot_a_optre_hgun_sas10_F_lsr","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_2("UK3CB_BAF_SmokeShell"),tx_2("OPTRE_M9_Frag"),tx_2("4thot_b_86070_100_ap")};
		respawnMagazines[] = {"kat_Painkiller",tx_2("UK3CB_BAF_SmokeShell"),tx_2("OPTRE_M9_Frag"),tx_2("4thot_b_86070_100_ap")};
    };

    class 4thot_nmr_m_sgr : 4thot_nmr_m_rifleman
    {
		displayName = "Breacher";

        backpack = "";
        weapons[] = {"4thot_a_OPTRE_M90A_lsr","Knife_kukri","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_M90A_lsr","Knife_kukri","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_2("OPTRE_M9_Frag"),tx_5("OPTRE_12Rnd_8Gauge_Pellets"),"OPTRE_12Rnd_8Gauge_Pellets",tx_3("OPTRE_12Rnd_8Gauge_Slugs"),"OPTRE_12Rnd_8Gauge_Slugs"};
		respawnMagazines[] = {"kat_Painkiller",tx_2("OPTRE_M9_Frag"),tx_5("OPTRE_12Rnd_8Gauge_Pellets"),"OPTRE_12Rnd_8Gauge_Pellets",tx_3("OPTRE_12Rnd_8Gauge_Slugs"),"OPTRE_12Rnd_8Gauge_Slugs"};
    };

    class 4thot_nmr_m_ats : 4thot_nmr_m_rifleman
    {
		displayName = "Anti-Tank Specialist";
        icon = "iconManAT";

        backpack = "4thot_e_B_ViperHarness_blk_F_ats";
        weapons[] = {"4thot_a_OPTRE_HMG38_std","Knife_kukri","OPTRE_M41_SSR","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_HMG38_std","Knife_kukri","OPTRE_M41_SSR","Throw","Put"};
        magazines[] = {"kat_Painkiller","OPTRE_1Rnd_MasterKey_Pellets",tx_2("UK3CB_BAF_SmokeShell"),tx_2("OPTRE_M9_Frag"),tx_5("OPTRE_40Rnd_30x06_Mag"),tx_2("OPTRE_40Rnd_30x06_Mag")};
		respawnMagazines[] = {"kat_Painkiller","OPTRE_1Rnd_MasterKey_Pellets",tx_2("UK3CB_BAF_SmokeShell"),tx_2("OPTRE_M9_Frag"),tx_5("OPTRE_40Rnd_30x06_Mag"),tx_2("OPTRE_40Rnd_30x06_Mag")};
    };

    class 4thot_nmr_m_crew : 4thot_nmr_m_rifleman
    {
        displayName = "Crew";

        linkedItems[] = {"OPTRE_FC_VX19_Helmet_Urban","G_Balaclava_TI_blk_F","OPTRE_Ins_BJ_Armor_URB","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_UL_HUL"};
		respawnLinkedItems[] = {"OPTRE_FC_VX19_Helmet_Urban","G_Balaclava_TI_blk_F","OPTRE_Ins_BJ_Armor_URB","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_UL_HUL"};
        backpack = "";
        weapons[] = {"4thot_a_OPTRE_M7_acos","Throw","Put"};
		respawnWeapons[] = {"4thot_a_OPTRE_M7_acos","Throw","Put"};
        magazines[] = {"kat_Painkiller",tx_2("UK3CB_BAF_SmokeShell"),tx_5("OPTRE_48Rnd_5x23mm_Mag_tracer")};
		respawnMagazines[] = {"kat_Painkiller",tx_2("UK3CB_BAF_SmokeShell"),tx_5("OPTRE_48Rnd_5x23mm_Mag_tracer")};
    };

    class OPTRE_M808B_INS;
    class 4thot_nmr_v_m808b : OPTRE_M808B_INS
    {
        faction = "4thot_nmr_m";

        crew = "4thot_nmr_m_crew";
    };

    class OPTRE_UNSC_hornet_ins;
    class 4thot_nmr_v_hornet : OPTRE_UNSC_hornet_ins
    {
        faction = "4thot_nmr_m";

        crew = "4thot_nmr_m_crew";
    };

    class OPTRE_M412_IFV_INS;
    class 4thot_nmr_v_bison_ifv : OPTRE_M412_IFV_INS
    {
        faction = "4thot_nmr_m";

        crew = "4thot_nmr_m_crew";
    };

    class OPTRE_M413_MGS_INS;
    class 4thot_nmr_v_bison_mgs : OPTRE_M413_MGS_INS
    {
        faction = "4thot_nmr_m";

        crew = "4thot_nmr_m_crew";
    };

    class OPTRE_M494_INS;
    class 4thot_nmr_v_oryx : OPTRE_M494_INS
    {
        faction = "4thot_nmr_m";

        crew = "4thot_nmr_m_crew";
    };

    class OPTRE_M12_TD_ins;
    class 4thot_nmr_v_hog_td : OPTRE_M12_TD_ins
    {
        faction = "4thot_nmr_m";

        crew = "4thot_nmr_m_rifleman";
    };

    class OPTRE_M12_LRV_ins;
    class 4thot_nmr_v_hog_mg : OPTRE_M12_LRV_ins
    {
        faction = "4thot_nmr_m";

        crew = "4thot_nmr_m_rifleman";
    };

    class OPTRE_M12_ins_APC;
    class 4thot_nmr_v_hog_apc : OPTRE_M12_ins_APC
    {
        faction = "4thot_nmr_m";

        crew = "4thot_nmr_m_rifleman";
    };

    class OPTRE_Static_FG75;
    class 4thot_nmr_s_fg75 : OPTRE_Static_FG75
    {
        faction = "4thot_nmr_m";

        crew = "4thot_nmr_m_rifleman";
    };

    class OPTRE_Static_M247H_Tripod;
    class 4thot_nmr_s_m247h : OPTRE_Static_M247H_Tripod
    {
        side = 0;
        faction = "4thot_nmr_m";

        crew = "4thot_nmr_m_rifleman";
    };

    class OPTRE_Static_M41_Ins;
    class 4thot_nmr_s_mg : OPTRE_Static_M41_Ins
    {
        faction = "4thot_nmr_m";

        crew = "4thot_nmr_m_rifleman";
    };

    class OPTRE_Static_AA_Ins;
    class 4thot_nmr_s_aa : OPTRE_Static_AA_Ins
    {
        faction = "4thot_nmr_m";

        crew = "4thot_nmr_m_rifleman";
    };

    class OPTRE_Static_ATGM_Ins;
    class 4thot_nmr_s_at : OPTRE_Static_ATGM_Ins
    {
        faction = "4thot_nmr_m";

        crew = "4thot_nmr_m_rifleman";
    };

    class OPTRE_Static_M247T_Tripod;
    class 4thot_nmr_s_m247t : OPTRE_Static_M247T_Tripod
    {
        side = 0;
        faction = "4thot_nmr_m";

        crew = "4thot_nmr_m_rifleman";
    };
};

class CfgGroups
{
    class East
    {
        class 4thot_mrm
        {
            name = "Madrigal Republican Marines (Space)";
            class 4thot_mrm_inf
            {
                name = "Infantry";
                class 4thot_mrm_inf_ldr
                {
                    side = 0;
					name = "Leader Team";
					faction = "4thot_nmr_m";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0
					{
						side = 0;
						vehicle = "4thot_nmr_m_sleader";
						rank = "LIEUTENANT";
						position[] = {2,2,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "4thot_nmr_m_marks";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "4thot_nmr_m_medic";
						rank = "CORPORAL";
						position[] = {-2,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "4thot_nmr_m_rifleman";
						rank = "PRIVATE";
						position[] = {-4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "4thot_nmr_m_rifleman";
						rank = "PRIVATE";
						position[] = {-6,0,0};
					};
                };

                class 4thot_mrm_inf_ast
                {
                    side = 0;
					name = "Assault Team";
					faction = "4thot_nmr_m";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0
					{
						side = 0;
						vehicle = "4thot_nmr_m_tleader";
						rank = "SERGEANT";
						position[] = {2,2,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "4thot_nmr_m_lmg";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "4thot_nmr_m_sgr";
						rank = "CORPORAL";
						position[] = {-2,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "4thot_nmr_m_rifleman";
						rank = "PRIVATE";
						position[] = {-4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "4thot_nmr_m_rifleman";
						rank = "PRIVATE";
						position[] = {-6,0,0};
					};
                };

                class 4thot_mrm_inf_sup
                {
                    side = 0;
					name = "Support Team";
					faction = "4thot_nmr_m";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0
					{
						side = 0;
						vehicle = "4thot_nmr_m_tleader";
						rank = "SERGEANT";
						position[] = {2,2,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "4thot_nmr_m_mmg";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "4thot_nmr_m_ats";
						rank = "CORPORAL";
						position[] = {-2,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "4thot_nmr_m_rifleman";
						rank = "PRIVATE";
						position[] = {-4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "4thot_nmr_m_rifleman";
						rank = "PRIVATE";
						position[] = {-6,0,0};
					};
                };

                class 4thot_mrm_inf_sqd
                {
                    side = 0;
					name = "Squad";
					faction = "4thot_nmr_m";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0
					{
						side = 0;
						vehicle = "4thot_nmr_m_sleader";
						rank = "LIEUTENANT";
						position[] = {2,2,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "4thot_nmr_m_medic";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "4thot_nmr_m_lmg";
						rank = "CORPORAL";
						position[] = {-2,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "4thot_nmr_m_ats";
						rank = "CORPORAL";
						position[] = {-4,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "4thot_nmr_m_sgr";
						rank = "SERGEANT";
						position[] = {-6,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "4thot_nmr_m_rifleman";
						rank = "PRIVATE";
						position[] = {-8,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "4thot_nmr_m_rifleman";
						rank = "PRIVATE";
						position[] = {-10,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "4thot_nmr_m_rifleman";
						rank = "PRIVATE";
						position[] = {-12,0,0};
					};
				};
            };
        };
    };
};
