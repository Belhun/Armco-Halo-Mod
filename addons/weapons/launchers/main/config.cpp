#include "..\..\script_component.hpp"
class CfgPatches
{
	class 4thot_weapons_launchers
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"4thot_weapons"
		};
		skipWhenMissingDependencies = 1;
		authors[] ={
			"Belhun", "Darknessvoid99"
		};
		url = ECSTRING(main, URL);
		VERSION_CONFIG;
	};
};

/*
M38/M43/M44 temp texture
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Enoch\Launchers\RPG32\Data\RPG_32_body_RUgrn_CO.paa","\A3\Weapons_F\Launchers\RPG32\data\RPG_32_optics_CO.paa"};

M44     model = "\A3\weapons_f\launchers\nlaw\nlaw_rocket";
M38     model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
M38     model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket.p3d";
*/

class CfgAmmo
{
    // M24 DSR LAV (RPG-7)
        class ammo_Penetrator_MRAAWS_HEAT55;
        class 4thot_p_m24 : ammo_Penetrator_MRAAWS_HEAT55
        {
            hit = 400;
            caliber = 30;
            warheadName = "HEAT";
        };

        class R_PG7_F;
        class 4thot_a_m24 : R_PG7_F		//High Explosive Anti-Tank
        {
            hit = 60;
            caliber = 1;
            explosive = 0.8;
            IndirectHit = 5;
            IndirectHitRange = 2;
            cost = 100;

            submunitionAmmo="4thot_p_m24";
        };

        class R_PG32V_F;
        class R_TBG32V_F;

    // MMW-30 Swatter / M30 SAR MAV (Titan Compact)
        class M_Titan_AA;
        class M_Titan_AT;
        class M_Titan_AP;

        class 4thot_L_75x320_aa_hs : M_Titan_AA
        {
            model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_ap_fly";

            #include "..\..\cfgA_m30_guidance.hpp"
        };

        class 4thot_L_75x320_heat_hs : M_Titan_AT
        {
            model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";

            #include "..\..\cfgA_m30_guidance.hpp"
        };

        class 4thot_L_75x320_he_hs : M_Titan_AP
        {
            model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";

            #include "..\..\cfgA_m30_guidance.hpp"
        };

    // M34 SSR HAV / HMW-34 Sturmhammer
        class ace_metis_HEAT;
        class ace_metis_HE;

        class 4thot_L_150x900_theat_los : ace_metis_HEAT
        {
            #include "..\..\cfgA_m34_guidance.hpp"
        };

        class 4thot_L_75x452r_hemp_los : ace_metis_HE
        {
            #include "..\..\cfgA_m34_guidance.hpp"
        };

        class 4thot_L_150x900_theat_los_urf : 4thot_L_150x900_theat_los
        {
            #include "..\..\cfgA_m34_guidance.hpp"
        };

        class 4thot_L_150x900_therm_los : ace_metis_HE
        {
            #include "..\..\cfgA_m34_guidance.hpp"
        };
};

class CfgMagazines
{
    // M24 DSR LAV (RPG-7)
        class RPG7_F;
        class 4thot_m_m24 : RPG7_F
        {
            displayName = "M24 SSM 70mm HEAT (AT)";
            displayNameShort = "(AT) Disposable";
            descriptionShort = "";
            mass = 40;
            ammo = "4thot_a_m24";
        };

    // M38 DSR LAV/AW
        class RPG32_F;
        class RPG32_HE_F;

    // MMW-30 Swatter / M30 SAR MAV (Titan Compact)
        class Titan_AA;
        class Titan_AT;
        class Titan_AP;

        class 4thot_L_75x320_1_aa : Titan_AP
        {
            displayName = "75mm STA Type 1 AF";
            displayNameShort = "F&F AF";
            descriptionshort = "Lock on, Fire and Forget<br/>Anti-Figther Guided Missile<br/>For MMW-30 Swatter";

            mass = 60;

            ammo = "4thot_L_75x320_aa_hs";
        };

        class 4thot_L_75x320_1_at : Titan_AA
        {
            displayName = "75mm STS Type 1 AP";
            displayNameShort = "F&F AP";
            descriptionshort = "Lock on, Fire and Forget<br/>Armor Piercing Guided Missile<br/>For MMW-30 Swatter";

            mass = 60;

            ammo = "4thot_L_75x320_heat_hs";
        };

        class 4thot_L_75x320_1_ap : Titan_AT
        {
            displayName = "75mm STS Type 2 AI/S";
            displayNameShort = "F&F AI/S";
            descriptionshort = "Lock on, Fire and Forget<br/>Anti-Infantry Guided Missile<br/>For MMW-30 Swatter";

            mass = 60;

            ammo = "4thot_L_75x320_he_hs";
        };

    // M34 SSR HAV / HMW-34 Sturmhammer
        class Vorona_HEAT;
        class Vorona_HE;

        class 4thot_L_150x900_1_at : Vorona_HEAT
        {
            displayName = "150mm M16A SSM HEAT (SACLOS)";
            displayNameShort = "AT-H(LOS)";
            descriptionshort = "Surface-to-Surface guided Missile<br/>Tandem High Explosive Anti-Tank<br/>Semi-Automatic Command to Line Of Sight";

            mass = 150;

            ammo = "4thot_L_150x900_theat_los";
        };

        class 4thot_L_150x900_1_dp : Vorona_HE
        {
            displayName = "150mm M17 SSM HEMP (SACLOS)";
            displayNameShort = "DP-H(LOS)";
            descriptionshort = "Surface-to-Surface guided Missile<br/>High Explosive Multi-Purpose<br/>Semi-Automatic Command to Line Of Sight";

            mass = 150;

            ammo = "4thot_L_75x452r_hemp_los";
        };

        class 4thot_L_150x900_1_at_urf : 4thot_L_150x900_1_at
        {
            displayName = "150mm STS Type 1 AP+";
            displayNameShort = "LOS AP+";
            descriptionshort = "Semi-Automatic Command to Line Of Sight<br/>Tandem Armor Piercing Guided Missile<br/>For HMW-34 Sturmhammer";

            ammo = "4thot_L_150x900_theat_los_urf";
        };

        class 4thot_L_150x900_1_ap : 4thot_L_150x900_1_dp
        {
            displayName = "150mm STS Type 2 AS/I";
            displayNameShort = "LOS AS/I";
            descriptionshort = "Semi-Automatic Command to Line Of Sight<br/>Anti-Strucutre/Infantry Guided Missile<br/>For HMW-34 Sturmhammer";

            ammo = "4thot_L_150x900_therm_los";
        };
};

class CfgWeapons
{
    // M24 DSR LAV (RPG-7)
        class Launcher_Base_F;
        class launch_RPG7_F : Launcher_Base_F
        {
            class WeaponSlotsInfo;
        };

        class 4thot_w_ld_m24 : launch_RPG7_F
        {
            displayName = "M24 DSR LAV (HEAT)";
            descriptionshort = "Surface-to-Surface Rocket<br/>Light Anti-Vehicle";
            //author = "Darknessvoid99";

            scope = 1;
            scopeArsenal = 1;
            baseWeapon = "4thot_w_ld_m24_loaded";

            hiddenselectionstextures[] = {QPATHTOF(data\lhrg\lhrg_unsc_co.paa)};

            magazines[] = {"4thot_m_m24"};
            magazineWell[] = {};
            magazineReloadTime = 0.1;
            reloadMagazineSound[] = {"",1,1};

            class EventHandlers
            {
                fired = "_this call CBA_fnc_firedDisposable";
            };

            class WeaponSlotsInfo : WeaponSlotsInfo
            {
                mass = 40;
            };
        };
        class 4thot_w_ld_m24_loaded : 4thot_w_ld_m24
        {
            scope = 2;
            scopeArsenal = 2;
            magazines[] = {"CBA_FakeLauncherMagazine"};

            class WeaponSlotsInfo : WeaponSlotsInfo
            {
                mass = 80;
            };
        };
        class 4thot_w_ld_m24_used : 4thot_w_ld_m24
        {
            displayName = "(USED) M24 DSR LAV";
            baseWeapon = "4thot_w_ld_m24_used";
            magazines[] = {"CBA_FakeLauncherMagazine"};
        };

    // M38 DSR LAV/AW
        class launch_RPG32_F : Launcher_Base_F
        {
            class WeaponSlotsInfo;
        };
    // M43 DSR MAV
    // M44 DSR HAV
    // MMW-30 Swatter / M30 SAR MAV (Titan Compact)
        class launch_Titan_short_base;
        class launch_I_Titan_short_F : launch_Titan_short_base
        {
            class WeaponSlotsInfo;
        };

        class 4thot_w_l_m30_urf : launch_I_Titan_short_F
        {
            baseWeapon = "4thot_w_l_m30_urf";

            displayName = "MMW-30 Swatter";
            descriptionshort = "Medium Multi-role Weapon<br/>UNSC : M30 SAR MAV";

            magazines[] =
            {
                "4thot_L_75x320_1_aa",
                "4thot_L_75x320_1_at",
                "4thot_L_75x320_1_ap"
            };
            magazineWell[] = {};

            canLock				= 2;
            weaponLockDelay		= 2;
            weaponLockSystem 	= "2 + 16";
            cmImmunity			= 0.25;
            lockAcquire 		= 1;

            class WeaponSlotsInfo : WeaponSlotsInfo
            {
                mass = 88.2;
            };
        };

    // M34 SSR HAV / HMW-34 Sturmhammer
        class launch_Vorona_base_F;
        class launch_O_Vorona_green_F : launch_Vorona_base_F
        {
            class WeaponSlotsInfo;
        };

        class 4thot_w_l_m34 : launch_O_Vorona_green_F
        {
            scopeArsenal = 1;
            baseWeapon = "4thot_w_l_m34";

            displayName = "M34 SSR HAV";
            descriptionshort = "Surface-to-Surface Rocket<br/>Heavy Anti-Vehicle";

            magazines[] =
            {
                "4thot_L_150x900_1_at",
                "4thot_L_150x900_1_ap"
            };
            magazineWell[] = {};

            class WeaponSlotsInfo : WeaponSlotsInfo
            {
                mass = 102.9;
            };
        };

        class 4thot_w_l_m34_urf : 4thot_w_l_m34
        {
            scopeArsenal = 2;
            baseWeapon = "4thot_w_l_m34_urf";

            displayName = "HMW-34 Sturmhammer";
            descriptionshort = "Heavy Multi-role Weapon<br/>UNSC : M34 SSR HAV";
        };


    // M41 SSR MAV/AW
        //class OPTRE_UnguidedLauncher_Base;
        //class OPTRE_M41_SSR : OPTRE_UnguidedLauncher_Base {};

};

class CBA_DisposableLaunchers
{
	4thot_w_ld_m24[]=
	{
		"4thot_w_ld_m24_loaded",
		"4thot_w_ld_m24_used"
	};
};