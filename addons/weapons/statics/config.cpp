#include "..\script_component.hpp"
class CfgPatches
{
	class 4thot_weapons_statics
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"4thot_weapons",
            "OPTRE_Weapons_StaticTurret"
		};
		skipWhenMissingDependencies = 1;
		authors[] ={
			"Belhun", "Darknessvoid99"
		};
		url = ECSTRING(main, URL);
		VERSION_CONFIG;
	};
};

class CfgAmmo
{
    class Sh_105mm_APFSDS_T_Green;

    class OPTRE_Sh_75mm_AP : Sh_105mm_APFSDS_T_Green
    {
        caliber = 24;
        hit = 460;
    };

    class OPTRE_Sh_90mm_APBC : Sh_105mm_APFSDS_T_Green
    {
        caliber = 28.5714;
        hit = 480;
    };
};

/*class CfgMagazines
{

};*/

class CfgWeapons
{
    class HMG_127;

    class OPTRE_M41_LAAG: HMG_127
	{
		//magazines[] = {"OPTRE_1000Rnd_127x99_M41","OPTRE_1000Rnd_127x99_M41_HE","OPTRE_2500Rnd_127x99_M41","OPTRE_2500Rnd_127x99_M41_HE"};

		modes[] = {"FullAuto","1short","1medium","1far"};

		class FullAuto;

		class 1short: FullAuto
		{
			burst = 5;

			aiDispersionCoefX=1.35;
            aiDispersionCoefY=1.35;

			aiRateOfFire = 0.001;
			aiRateOfFireDistance = 100;

			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.2;
			showToPlayer = 0;
		};

        class 1medium: FullAuto
		{
            burst = 5;

			aiDispersionCoefX=1;
            aiDispersionCoefY=1;

			aiRateOfFire = 0.001;
			aiRateOfFireDistance = 300;

			minRange = 135;
			minRangeProbab = 0.1;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.3;
			showToPlayer = 0;
		};

        class 1far: FullAuto
		{
            burst = 15;
            burstRangeMax = 25;

			aiDispersionCoefX=0.75;
            aiDispersionCoefY=0.75;

			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 800;

			minRange = 480;
			minRangeProbab = 0.1;
			midRange = 700;
			midRangeProbab = 0.5;
			maxRange = 1000;
			maxRangeProbab = 0.2;
			showToPlayer = 0;
		};
	};
/*
	class OPTRE_102R_Turret: missiles_titan
	{
		displayName = "$STR_OPTRE_Weapons_Vehicle_M39_ATGM";
		descriptionShort = "ATGM Launcher";
		magazines[] = {"OPTRE_3Rnd_102mm_rockets"};
		aiDispersionCoefY = 15.0;
		aiDispersionCoefX = 20.0;
		canLock = 0;
		magazineReloadTime = 5;
		showAimCursorInternal = 1;
		initFov = 0.75;
		minFov = 0.375;
		maxFov = 1.1;
		minRange = 15;
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_M41R";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"OPTRE_Weapons\Rockets\data\sounds\rocket_1.wss",1,1,1500};
			soundBegin[] = {"begin1",1};
		};
	};
	class OPTRE_M79_MLRS: missiles_ASRAAM
	{
		displayName = "$STR_OPTRE_Weapons_Vehicle_M79_MLRS";
		descriptionShort = "AA";
		magazines[] = {"OPTRE_6Rnd_ASGM2_rockets"};
		showAimCursorInternal = 1;
		reloadTime = 1.5;
		magazineReloadTime = 5;
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_M79";
		minRange = 15;
		cmImmunity = 0.83;
		modes[] = {"player","close","short","medium","far"};
		class player: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.12202,1.3,1000};
				soundBegin[] = {"begin1",1};
				soundsetshot[] = {"RocketsHeavy_Shot_SoundSet"};
			};
			soundContinuous = 0;
			reloadTime = 1.5;
			magazineReloadTime = 5;
			autoReload = 1;
			ballisticsComputer = 0;
			canLock = 2;
			autoFire = 0;
			dispersion = 0.002;
		};
		class close: player
		{
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 100;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 200;
			minRange = 5;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.5;
			maxRange = 400;
			maxRangeProbab = 0.85;
		};
		class short: close
		{
			showToPlayer = 0;
			burstRangeMax = 100;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 400;
			minRange = 500;
			minRangeProbab = 0.3;
			midRange = 800;
			midRangeProbab = 0.85;
			maxRange = 1500;
			maxRangeProbab = 0.9;
		};
		class medium: close
		{
			showToPlayer = 0;
			burstRangeMax = 67;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.6;
			midRange = 2500;
			midRangeProbab = 0.9;
			maxRange = 3000;
			maxRangeProbab = 0.75;
		};
		class far: close
		{
			showToPlayer = 0;
			burstRangeMax = 67;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 2000;
			minRange = 2500;
			minRangeProbab = 0.84;
			midRange = 4500;
			midRangeProbab = 0.7;
			maxRange = 5500;
			maxRangeProbab = 0.1;
		};
	};

	class OPTRE_M68_GAUSS: cannon_120mm
	{
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_M68";
		nameSound = "cannon";
		reloadSound[] = {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_2",31.622776,1,10};
		minRange = 5;
		minRangeProbab = 0.7;
		midRange = 1200;
		midRangeProbab = 0.7;
		maxRange = 2500;
		maxRangeProbab = 0.1;
		initFov = 0.75;
		minFov = 0.375;
		maxFov = 1.1;
		reloadTime = 1.3;
		magazineReloadTime = 12;
		autoReload = 1;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 95.2778;
		FCSZeroingDelay = 0;
		maxZeroing = 5000;
		canLock = 0;
		autoFire = 0;
		showAimCursorInternal = 0;
		displayName = "$STR_OPTRE_Weapons_Vehicle_M68_ALIM";
		descriptionShort = "Gauss";
		magazines[] = {"OPTRE_3Rnd_ALIM_Gauss_slugs","OPTRE_15Rnd_ALIM_Gauss_Slugs"};
		class player: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"OPTRE_Weapons\Vehicle\data\sounds\Gauss_1.wss",2.5,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			reloadTime = 3;
			magazineReloadTime = 6;
			autoReload = 0;
			ballisticsComputer = 0;
			canLock = 0;
			autoFire = 0;
			dispersion = 0;
		};
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "MachineGunCloud";
			};
		};
	};
*/
};

class CfgVehicles
{
    class StaticMGWeapon;

    class OPTRE_Static_Base_Turret: StaticMGWeapon
	{
		armor = 3500;
	};

    class OPTRE_Static_M41: OPTRE_Static_Base_Turret
	{
		armor = 3500;
	};

    class OPTRE_Static_ATGM: OPTRE_Static_Base_Turret
	{
		armor = 3500;
	};

    class OPTRE_Static_AA: OPTRE_Static_Base_Turret
	{
		armor = 3500;
	};

    class OPTRE_Static_FG75: StaticMGWeapon
	{
		armor = 10000;
	};
};