#include "script_component.hpp"
class CfgPatches {
    class darkmod_4thot_m808ifv
	{
        weapons[] = {};
        units[] =
        {
            "dm_e_m808b2",
            "4thot_v_m808b2",
            "4thot_v_m808ifv",
            "dm_e_m808b2a1",
            "4thot_v_m808b2a1",
            "4thot_v_m808ifv_at"
        };
        magazines[] =
        {
            "4thot_v_50mm_hep_1360",
            "4thot_v_50mm_he_1360",
            "4thot_v_50mm_ap_1360",
            "4thot_v_50mm_hep_680",
            "4thot_v_50mm_he_680",
            "4thot_v_50mm_ap_680",
            "4thot_v_50mm_he_910",
            "4thot_v_50mm_ap_450",
            "4thot_v_130mm_heat_2"
        };
        requiredAddons[] =
            {
                "ARMCO_Armco_Faction",
                "OPTRE_Loadorder"
            };

        authors[] = {"Belhun", "Darknessvoid99"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CfgAmmo
{
    class OPTRE_B_50mm;
    class OPTRE_B_50mm_APFSDS;

    class 4thot_c_50x363_he : OPTRE_B_50mm
    {
        caliber =   4;          //4
        explosive = 0.8;        //0.6
        hit = 80;               //85
        indirectHit = 25;       //20
        indirectHitRange = 3;   //4

        //model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
        tracerScale = 1;
    };

    class 4thot_c_50x363_hep : OPTRE_B_50mm
    {
        ace_fcs_Airburst = 1;
        deflecting = 0;
    };

    class 4thot_c_50x363_ap : OPTRE_B_50mm_APFSDS
    {
        //caliber = 10;
        //explosive = 0;
        //hit = 210;
        //indirectHit = 10;
        //indirectHitRange = 0.2;

        //model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
        tracerScale = 1;
    };

    class Sh_120mm_HE;
    class OPTRE_Sh_90mm_SAPHE : Sh_120mm_HE
    {
        caliber = 8;
        explosive = 0.8;
        hit = 200;
        indirectHit = 50;
        indirectHitRange = 4.5;
    };

    class OPTRE_Sh_105mm_SAPHE : Sh_120mm_HE
    {
        caliber = 10;
        explosive = 0.8;
        hit = 260;
        indirectHit = 80;
        indirectHitRange = 6;
    };

    class B_35mm_AA_Tracer_Red;
    class OPTRE_B_20mm_HEIAP : B_35mm_AA_Tracer_Red
    {
        caliber = 1.8;
        explosive = 0.9;
        hit = 80;
        indirectHit = 12;
        indirectHitRange = 2;
    };
};

class CfgMagazines
{
    class OPTRE_680Rnd_AA_Shells_Red;
    class OPTRE_2Rnd_GAT_missiles;

    class 4thot_v_50mm_hep_1360 : OPTRE_680Rnd_AA_Shells_Red
    {
        ammo = "4thot_c_50x363_hep";
        count = 1360;

        displayName = "1360Rnd 50x363mm HEI-T-PF";
        displayNameShort = "HEI-T-PF";
    };

    class 4thot_v_50mm_he_1360 : 4thot_v_50mm_hep_1360
    {
        ammo = "4thot_c_50x363_he";

        displayName = "1360Rnd 50x363mm HEI-T";
        displayNameShort = "HEI-T";
    };

    class 4thot_v_50mm_ap_1360 : 4thot_v_50mm_hep_1360
    {
        ammo = "4thot_c_50x363_ap";

        displayName = "1360Rnd 50x363mm APFSDS-T";
        displayNameShort = "APFSDS-T";
    };

    class 4thot_v_50mm_hep_680 : OPTRE_680Rnd_AA_Shells_Red
    {
        ammo = "4thot_c_50x363_hep";

        displayName = "680Rnd 50x363mm HEI-T-PF";
        displayNameShort = "HEI-T-PF";
    };

    class 4thot_v_50mm_he_680 : 4thot_v_50mm_hep_680
    {
        ammo = "4thot_c_50x363_he";

        displayName = "680Rnd 50x363mm HEI-T";
        displayNameShort = "HEI-T";
    };

    class 4thot_v_50mm_ap_680 : 4thot_v_50mm_hep_680
    {
        ammo = "4thot_c_50x363_ap";

        displayName = "680Rnd 50x363mm APFSDS-T";
        displayNameShort = "APFSDS-T";
    };

    class 4thot_v_50mm_he_910 : OPTRE_680Rnd_AA_Shells_Red
    {
        ammo = "4thot_c_50x363_he";
        count = 910;

        displayName = "910Rnd 50x363mm HEI-T";
        displayNameShort = "HEI-T";
    };

    class 4thot_v_50mm_ap_450 : 4thot_v_50mm_he_910
    {
        ammo = "4thot_c_50x363_ap";
        count = 450;

        displayName = "450Rnd 50x363mm APFSDS-T";
        displayNameShort = "APFSDS-T";
    };

    class 4thot_v_130mm_heat_2 : OPTRE_2Rnd_GAT_missiles
    {
        ammo = "OPTRE_M41_Rocket_ATGM2";
        //count = 2;

        displayName = "2Rnd 102mm GAT HEAT";
        displayNameShort = "GAT HEAT";
    };
};

class CfgVehicles
{
    class B_MBT_01_cannon_F;
    class OPTRE_M808B2 : B_MBT_01_cannon_F
    {
        class Turrets;
    };

    class dm_e_m808b2 : OPTRE_M808B2
    {
        scope = 0;
        scopeCurator = 0;
        class Turrets : Turrets
        {
            class MainTurret;
        };
    };

    class 4thot_v_m808b2 : dm_e_m808b2
    {
        scope = 2;
        scopeCurator = 2;


        faction = "ARMCO_Armco_Faction";

        hiddenSelectionsTextures[] =
        {
            "\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\body_lckdw_lopo_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\cing_dv_lckdw_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\cing_rt_lckdw_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\turretBase_lckdw_lopo_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\night\sun_devil_head_lopo_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\night\sun_devil_gun_lopo_co.paa"
        };

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                magazines[] =
                {
                    "4thot_v_50mm_hep_680",
                    "4thot_v_50mm_he_680"
                };
            };
        };
    };

    class 4thot_v_m808ifv : dm_e_m808b2
    {
        scope = 2;
        scopeCurator = 2;

        displayName = "M808B2E1 Scimitar";

        faction = "ARMCO_Armco_Faction";
        editorSubcategory = "OPTRE_EditorSubcategory_IFV";

        hiddenSelectionsTextures[] =
        {
            "\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\body_lckdw_lopo_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\cing_dv_lckdw_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\cing_rt_lckdw_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\turretBase_lckdw_lopo_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\night\sun_devil_head_lopo_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\night\sun_devil_gun_lopo_co.paa"
        };

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                magazines[] =
                {
                    "4thot_v_50mm_he_910",
                    "4thot_v_50mm_ap_450"
                };
            };
        };
    };

    class OPTRE_M808B2A1 : OPTRE_M808B2
    {
        class Turrets;
    };

    class dm_e_m808b2a1 : OPTRE_M808B2A1
    {
        scope = 0;
        scopeCurator = 0;
        class Turrets : Turrets
        {
            class MainTurret;
        };
    };

    class 4thot_v_m808b2a1 : dm_e_m808b2a1
    {
        scope = 2;
        scopeCurator = 2;


        faction = "ARMCO_Armco_Faction";

        radarType = 0;


        hiddenSelectionsTextures[] =
        {
            "\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\body_lckdw_lopo_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\cing_dv_lckdw_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\cing_rt_lckdw_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\turretBase_lckdw_lopo_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\night\sun_devil_head_lopo_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\night\sun_devil_gun_lopo_co.paa"
        };

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                magazines[] =
                {
                    "4thot_v_50mm_hep_680",
                    "4thot_v_50mm_he_680",
                    "OPTRE_2Rnd_ASGM4_rockets",
                    "OPTRE_2Rnd_ASGM4_rockets",
                    "OPTRE_2Rnd_ASGM4_rockets"
                };
            };
        };
    };

    class 4thot_v_m808ifv_at : dm_e_m808b2a1
    {
        scope = 2;
        scopeCurator = 2;

        displayName = "M808B2A1E1 Scimitar";

        faction = "ARMCO_Armco_Faction";
        editorSubcategory = "OPTRE_EditorSubcategory_IFV";

        radarType = 0;

        hiddenSelectionsTextures[] =
        {
            "\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\body_lckdw_lopo_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\cing_dv_lckdw_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\cing_rt_lckdw_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\turretBase_lckdw_lopo_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\night\sun_devil_head_lopo_co.paa",
            "\OPTRE_Vehicles_Tracked\M808B2\data\night\sun_devil_gun_lopo_co.paa"
        };

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                magazines[] =
                {
                    "4thot_v_50mm_he_910",
                    "4thot_v_50mm_ap_450",
                    "4thot_v_130mm_heat_2"
                };
            };
        };
    };
};

class CfgWeapons
{
    class autocannon_35mm;
    class M288_autocannon : autocannon_35mm
    {
        displayName = "M288 Quad 50x363mm Autocannons";
        displayNameShort = "50x363mm";

        magazineReloadTime = 1;

        magazines[] =
        {
            "OPTRE_680Rnd_AA_Shells_Red",
            "4thot_v_50mm_hep_1360",
            "4thot_v_50mm_he_1360",
            "4thot_v_50mm_ap_1360",
            "4thot_v_50mm_hep_680",
            "4thot_v_50mm_he_680",
            "4thot_v_50mm_ap_680",
            "4thot_v_50mm_he_910",
            "4thot_v_50mm_ap_450"
        };
    };

    class OPTRE_M95;
    class OPTRE_M21 : OPTRE_M95
    {
        displayName = "M700 Dual-Purpose Missile Pods";
        displayNameShort = "2x AA/ATGM";

        ReloadTime = 1;
        magazineReloadTime = 10;

        magazines[] =
        {
            "OPTRE_2Rnd_ASGM4_rockets",
            "4thot_v_130mm_heat_2"
        };
    };

};