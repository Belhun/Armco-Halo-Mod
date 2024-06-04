#include "script_component.hpp"
class CfgPatches {
    class 4thot_opfor
	{
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "A3_Data_F_Mark_Loadorder",
            "OPTRE_Loadorder",
            ""
        };
        authors[] = {"Belhun", "Darknessvoid99"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CfgFactionClasses
{
    //Madrigal Republican Marines
        class 4thot_nmr_mrm
        {
            displayName = "Madrigal Republican Marines (Space)";
        };

        class 4thot_nmr_mrm_j
        {
            displayName = "Madrigal Republican Marines (Jungle)";
        };

        class 4thot_nmr_mrm_d
        {
            displayName = "Madrigal Republican Marines (Desert)";
        };

    //Madrigal Military Forces
        class 4thot_nmr_mmf
        {
            displayName = "Madrigal Military Forces (Jungle)";
        };

        class 4thot_nmr_mmf_d
        {
            displayName = "Madrigal Military Forces (Desert)";
        };

        class 4thot_nmr_mmf_l
        {
            displayName = "Madrigal Military Forces (Lunar)";
        };

    //Free Madrigal Militia
        class 4thot_nmr_fmm
        {
            displayName = "Free Madrigal Militia";
        };

    //Covenant
        class 4thot_cov_me
        {
            displayName = "Mafaam Enclave";
        };

        class 4thot_cov_me_ind
        {
            displayName = "Mafaam Remnant";
        };

        class 4thot_cov_va
        {
            displayName = "Volkam Ascendacy";
        };

    //United Nations Space Command (UNSC)
        class 4thot_unsc_arm91
        {
            displayName = "UNSC Army, 91st Infantry Garrison";
        };

        class 4thot_unsc_arm65
        {
            displayName = "UNSC Army, 65th Armored Division (Jungle)";
        };

        class 4thot_unsc_arm65_d
        {
            displayName = "UNSC Army, 65th Armored Division (Desert)";
        };

        class 4thot_unsc_mar3
        {
            displayName = "UNSCMC, 3rd Marine Division";
        };
};

class CfgEditorSubcategories
{
    class 4thot_men_mar
    {
        displayName = "Men (Marines)";
    };
    class 4thot_men_sec
    {
        displayName = "Men (Security)";
    };
    class 4thot_men_mil
    {
        displayName = "Men (Militia)";
    };
    class 4thot_men_des
    {
        displayName = "Men (Deserters)";
    };
    class 4thot_men_odst
    {
        displayName = "Men (ODST)";
    };

    //Madrigal Republican Marines
        class 4thot_comp_mrm
        {
            displayName = "Madrigal Republican Marines (Space)";
        };

        class 4thot_comp_mrm_j
        {
            displayName = "Madrigal Republican Marines (Jungle)";
        };

        class 4thot_comp_mrm_d
        {
            displayName = "Madrigal Republican Marines (Desert)";
        };

    //Madrigal Military Forces
        class 4thot_comp_mmf
        {
            displayName = "Madrigal Military Forces (Jungle)";
        };

        class 4thot_comp_mmf_d
        {
            displayName = "Madrigal Military Forces (Desert)";
        };

        class 4thot_comp_mmf_l
        {
            displayName = "Madrigal Military Forces (Lunar)";
        };

    //Free Madrigal Militia
        class 4thot_comp_fmm
        {
            displayName = "Free Madrigal Militia";
        };

    //Covenant
        class 4thot_comp_me
        {
            displayName = "Mafaam Enclave";
        };

        class 4thot_comp_me_ind
        {
            displayName = "Mafaam Remnant";
        };

        class 4thot_comp_va
        {
            displayName = "Volkam Ascendacy";
        };

    //United Nations Space Command (UNSC)
        class 4thot_comp_unsc_arm
        {
            displayName = "UNSC Army";
        };

        class 4thot_comp_unsc_mar
        {
            displayName = "UNSC Marine Corps";
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
        permanent = "0.05*0.6";
        temporary = "0.003*0.6";
    };
};

class CfgWeapons
{
    //Weapons
        class MMG_02_camo_F;
        class MMG_02_black_F : MMG_02_camo_F
        {
            class manual;
        };

        class 4thot_w_a_hmg48h : MMG_02_black_F
        {
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

    //Uniforms
        class Uniform_Base;
        class U_C_Uniform_Farmer_01_F : Uniform_Base
        {
            class ItemInfo;
        };
        class U_C_ArtTShirt_01_v5_F : Uniform_Base
        {
            class ItemInfo;
        };
        class U_C_ArtTShirt_01_v6_F : Uniform_Base
        {
            class ItemInfo;
        };
        class U_I_C_Soldier_Bandit_3_F : Uniform_Base
        {
            class ItemInfo;
        };
        class U_I_C_Soldier_Bandit_5_F : Uniform_Base
        {
            class ItemInfo;
        };
        class U_I_G_resistanceLeader_F : Uniform_Base
        {
            class ItemInfo;
        };

        class U_C_Uniform_Farmer_01_F_nrm : U_C_Uniform_Farmer_01_F
        {
            scope = 1;
            scopeCurator = 1;
            ScopeArsenal = 1;

            class ItemInfo : ItemInfo
            {
                uniformClass = "U_C_Uniform_Farmer_01_nrm";
            };
        };

        class U_C_ArtTShirt_01_v5_F_nrm : U_C_ArtTShirt_01_v5_F
        {
            scope = 1;
            scopeCurator = 1;
            ScopeArsenal = 1;

            class ItemInfo : ItemInfo
            {
                uniformClass = "U_C_ArtTShirt_01_v5_nrm";
            };
        };

        class U_C_ArtTShirt_01_v6_F_nrm : U_C_ArtTShirt_01_v6_F
        {
            scope = 1;
            scopeCurator = 1;
            ScopeArsenal = 1;

            class ItemInfo : ItemInfo
            {
                uniformClass = "U_C_ArtTShirt_01_v6_nrm";
            };
        };

        class U_I_C_Soldier_Bandit_3_F_nrm : U_I_C_Soldier_Bandit_3_F
        {
            scope = 1;
            scopeCurator = 1;
            ScopeArsenal = 1;

            class ItemInfo : ItemInfo
            {
                uniformClass = "U_I_C_Soldier_Bandit_3_nrm";
            };
        };

        class U_I_C_Soldier_Bandit_5_F_nrm : U_I_C_Soldier_Bandit_5_F
        {
            scope = 1;
            scopeCurator = 1;
            ScopeArsenal = 1;

            class ItemInfo : ItemInfo
            {
                uniformClass = "U_I_C_Soldier_Bandit_5_nrm";
            };
        };

        class U_I_G_resistanceLeader_F_nrm : U_I_G_resistanceLeader_F
        {
            scope = 1;
            scopeCurator = 1;
            ScopeArsenal = 1;

            class ItemInfo : ItemInfo
            {
                uniformClass = "U_I_G_resistanceLeader_nrm";
            };
        };
};

class CfgVehicles
{
    class OPTRE_Ins_URF_Unarmed;

    class 4thot_u_opfor : OPTRE_Ins_URF_Unarmed
    {
        scope = 0;
        side = 0;
		author = "Darknessvoid99";
		icon = "iconMan";
    };

    class C_Uniform_Farmer_01_F;
    class C_Uniform_ArtTShirt_01_v5_F;
    class C_Uniform_ArtTShirt_01_v6_F;
    class I_C_Soldier_Bandit_3_F;
    class I_C_Soldier_Bandit_5_F;
    class I_G_resistanceLeader_F;

    class U_C_Uniform_Farmer_01_nrm : C_Uniform_Farmer_01_F
    {
        scope = 1;
        side = 0;
        uniformClass = "U_C_Uniform_Farmer_01_F_nrm";
    };

    class U_C_ArtTShirt_01_v5_nrm : C_Uniform_ArtTShirt_01_v5_F
    {
        scope = 1;
        side = 0;
        uniformClass = "U_C_ArtTShirt_01_v5_F_nrm";
    };

    class U_C_ArtTShirt_01_v6_nrm : C_Uniform_ArtTShirt_01_v6_F
    {
        scope = 1;
        side = 0;
        uniformClass = "U_C_ArtTShirt_01_v6_F_nrm";
    };

    class U_I_C_Soldier_Bandit_3_nrm : I_C_Soldier_Bandit_3_F
    {
        scope = 1;
        side = 0;
        uniformClass = "U_I_C_Soldier_Bandit_3_F_nrm";
    };

    class U_I_C_Soldier_Bandit_5_nrm : I_C_Soldier_Bandit_5_F
    {
        scope = 1;
        side = 0;
        uniformClass = "U_I_C_Soldier_Bandit_5_F_nrm";
    };

    class U_I_G_resistanceLeader_nrm : I_G_resistanceLeader_F
    {
        scope = 1;
        side = 0;
        uniformClass = "U_I_G_resistanceLeader_F_nrm";
    };
};

