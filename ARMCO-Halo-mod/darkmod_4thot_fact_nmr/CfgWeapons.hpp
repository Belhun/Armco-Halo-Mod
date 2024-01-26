/*
	class Launcher_Base_F;
    class launch_RPG7_F : Launcher_Base_F
    {
        class WeaponSlotsInfo;
    };

    class launch_MRAWS_base_F;
    class launch_MRAWS_green_rail_F : launch_MRAWS_base_F
    {
        class WeaponSlotsInfo;
    };

    class launch_MRAWS_green_F : launch_MRAWS_base_F
    {
        class WeaponSlotsInfo;
    };

    class launch_RPG32_F;
    class launch_RPG32_green_F : launch_RPG32_F
    {
        class WeaponSlotsInfo;
    };


    class launch_O_Vorona_green_F;
    class launch_B_Titan_olive_F;
    class launch_I_Titan_short_F;
    class launch_MRAWS_green_rail_F;
    class OPTRE_M41_SSR;
    class launch_NLAW_F;
*/

	class 4thot_w_m24 : launch_RPG7_F
    {
        displayName = "M24 SSR LAV";
        descriptionshort = "Surface-to-Surface Rocket Light Anti-Vehicle";
        //author = "Darknessvoid99";

        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "4thot_w_m24_loaded";

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
    class 4thot_w_m24_loaded : 4thot_w_m24
    {
        scope = 2;
        scopeArsenal = 2;
        magazines[] = {"CBA_FakeLauncherMagazine"};

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 80;
        };
    };
    class 4thot_w_m24_used : 4thot_w_m24
    {
        displayName = "(USED) M24 SSR LAV";
        baseWeapon = "4thot_w_m24_used";
        magazines[] = {"CBA_FakeLauncherMagazine"};
    };

    class 4thot_w_lat24 : 4thot_w_m24
    {
        displayName = "LAT-24 Crossbow";
        descriptionshort = "Light Anti-Tank model 24";

        baseWeapon = "4thot_w_lat24_loaded";
        magazines[] = {"4thot_m_lat24"};
    };
    class 4thot_w_lat24_loaded : 4thot_w_m24_loaded
    {
        displayName = "LAT-24 Crossbow";
        baseWeapon = "4thot_w_lat24_loaded";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 85;
        };
    };
    class 4thot_w_lat24_used : 4thot_w_m24_used
    {
        displayName = "(USED) LAT-24 Crossbow";
        baseWeapon = "4thot_w_lat24_used";
    };

    class 4thot_w_lat48 : 4thot_w_m24
    {
        displayName = "LAT-48 Arbalest";
        descriptionshort = "Light Anti-Tank model 48";

        baseWeapon = "4thot_w_lat48_loaded";
        magazines[] = {"4thot_m_lat48"};
    };
    class 4thot_w_lat48_loaded : 4thot_w_lat48
    {
        scope = 2;
        scopeArsenal = 2;

        magazines[] = {"CBA_FakeLauncherMagazine"};

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 100;
        };
    };
    class 4thot_w_lat48_used : 4thot_w_lat48
    {
        displayName = "(USED) LAT-48 Arbalest";
        baseWeapon = "4thot_w_lat48_used";
        magazines[] = {"CBA_FakeLauncherMagazine"};
    };

    class 4thot_w_mat48 : 4thot_w_m24
    {
        displayName = "MAT-48 Ballista";
        descriptionshort = "Medium Anti-Tank model 48";

        baseWeapon = "4thot_w_mat48_loaded";
        magazines[] = {"4thot_m_mat48"};
    };
    class 4thot_w_mat48_loaded : 4thot_w_mat48
    {
        scope = 2;
        scopeArsenal = 2;
        magazines[] = {"CBA_FakeLauncherMagazine"};

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 140;
        };
    };
    class 4thot_w_mat48_used : 4thot_w_mat48
    {
        displayName = "(USED) MAT-48 Ballista";
        baseWeapon = "4thot_w_mat48_used";
        magazines[] = {"CBA_FakeLauncherMagazine"};
    };

    class 4thot_w_m30 : launch_MRAWS_green_F
    {
        displayName = "M30 SSR LAV/AW (HEAT)";
        descriptionshort = "Surface-to-Surface Rocket Light Anti-Vehicle / Assault Weapon";
        //author = "Darknessvoid99";

        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "4thot_w_m30_loaded";

        magazines[] = {"4thot_m_m30"};
		magazineWell[] = {};
        magazineReloadTime = 0.1;
        reloadMagazineSound[] = {"",1,1};

        class EventHandlers
        {
            fired = "_this call CBA_fnc_firedDisposable";
        };

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 60;
        };
    };
    class 4thot_w_m30_loaded : 4thot_w_m30
    {
        scope = 2;
        scopeArsenal = 2;

        magazines[] = {"CBA_FakeLauncherMagazine"};

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 120;
        };
    };
    class 4thot_w_m30_used : 4thot_w_m30
    {
        displayName = "(USED) M30 SSR LAV/AW";
        baseWeapon = "4thot_w_m30_used";

        magazines[] = {"CBA_FakeLauncherMagazine"};
    };
    class 4thot_w_m30_aw : 4thot_w_m30
    {
        displayName = "M30 SSR LAV/AW (HEMP)";
		baseWeapon = "4thot_w_m30_aw_loaded";

        magazines[] = {"4thot_m_m30_aw"};

        class WeaponSlotsInfo;
    };
    class 4thot_w_m30_aw_loaded : 4thot_w_m30_aw
    {
        scope = 2;
        scopeArsenal = 2;

        magazines[] = {"CBA_FakeLauncherMagazine"};

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 120;
        };
    };

    class 4thot_w_m43 : launch_RPG32_green_F
    {
        displayName = "M43 SAR LAV (AA)";
        //author = "Darknessvoid99";
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "4thot_w_m43_loaded";

        magazines[] = {"4thot_m_m43"};
		magazineWell[] = {};
        magazineReloadTime = 0.1;
        reloadMagazineSound[] = {"",1,1};

        class EventHandlers
        {
            fired = "_this call CBA_fnc_firedDisposable";
        };

        //modelOptics = "\A3\Weapons_F\acc\reticle_RPG_F";
        modelOptics = "";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 60;
        };
    };
    class 4thot_w_m43_loaded : 4thot_w_m43
    {
        scope = 2;
        scopeArsenal = 2;

        magazines[] = {"CBA_FakeLauncherMagazine"};

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 120;
        };
    };
    class 4thot_w_m43_used : 4thot_w_m43
    {
        displayName = "(USED) M43 SAR LAV";
        baseWeapon = "4thot_w_m43_used";

        magazines[] = {"CBA_FakeLauncherMagazine"};
    };

    class 4thot_w_hat96 : launch_NLAW_F
    {
        displayName = "HAT-96 Sturmhammer";
        //author = "Darknessvoid99";
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "4thot_w_hat96_loaded";

        magazines[] = {"4thot_m_hat96"};
		magazineWell[] = {};
        magazineReloadTime = 0.1;
        reloadMagazineSound[] = {"",1,1};

        class EventHandlers
        {
            fired = "_this call CBA_fnc_firedDisposable";
        };

        //modelOptics = "\A3\Weapons_F\acc\reticle_RPG_F";
        modelOptics = "";

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 60;
        };
    };
    class 4thot_w_hat96_loaded : 4thot_w_m43
    {
        scope = 2;
        scopeArsenal = 2;

        magazines[] = {"CBA_FakeLauncherMagazine"};

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 120;
        };
    };
    class 4thot_w_hat96_used : 4thot_w_m43
    {
        displayName = "(USED) HAT-96 Sturmhammer";
        baseWeapon = "4thot_w_hat96_used";

        magazines[] = {"CBA_FakeLauncherMagazine"};
    };

    class 4thot_w_mataw60 : launch_MRAWS_green_rail_F
    {
        displayName = "MATAW-60 Javelin";
        descriptionshort = "Medium Anti-Tank and Assault Weapon model 60";

        magazines[] = {};
		magazineWell[] = {"MATAW60_90mm"};
    };

    class 4thot_w_m32 : launch_I_Titan_short_F
    {
        displayName = "M32 SAR MAV (AA)";
        descriptionshort = "Surface-to-Air Rocket Medium Anti-Vehicle";

        magazines[] = {};
		magazineWell[] = {"M32_75mm"};
    };

    class 4thot_w_mmw32 : 4thot_w_m32
    {
        displayName = "MMW-32 Swatter";
        descriptionshort = "Medium Multi-purpose Weapon";
    };

    class 4thot_w_m44 : launch_B_Titan_olive_F
    {
        displayName = "M44 SAR HAV (AA)";
        descriptionshort = "Surface-to-Air Rocket Heavy Anti-Vehicle";
        
        magazines[] = {};
		magazineWell[] = {"M44_130mmL"};
    };

    class 4thot_w_m36 : launch_O_Vorona_green_F
    {
        displayName = "M36 SSR HAV";
        descriptionshort = "Surface-to-Surface Rocket Heavy Anti-Vehicle";

        magazines[] = {};
		magazineWell[] = {"M36_130mm"};
    };

    class 4thot_w_m41 : OPTRE_M41_SSR
    {
        magazines[] = {};
		magazineWell[] = {"M41_75mmR"};
    };

    class 4thot_w_hmw41 : 4thot_w_m41
    {
        displayName = "HMW-41 Jackhammer";
        descriptionshort = "Heavy Multi-purpose Weapon";
    };