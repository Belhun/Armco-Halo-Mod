#include "script_component.hpp"
class CfgPatches
{
	class armco_ammo
	{
		units[]={};
		weapons[]={};
		magazines[]=
		{
			"NL_8Rnd_127x40_Mag",
			"FH_8Rnd_127x40_Mag",
			"NL_15Rnd_762x51_Mag_Tracer",
			"NL_4Rnd_145x114_APFSDS_Mag",
			"NL_6Rnd_8Gauge_Pellets",
			"M319_NL",
			"NL_1Rnd_8Gauge_Buckshot",
			"NL_1Rnd_8Gauge_Slug"
		};
		ammo[]=
		{
			"NL_B_57x31_Tracer",
			"NL_B_762x51_Tracer",
			"NL_B_95x40_Tracer",
			"NL_B_30x06_Ball_Tracer",
			"NL_B_127x40_Ball",
			"FH_B_127x40_Ball",
			"NL_B_145x114_APFSDS",
			"NL_8Gauge_Pellets",
			"NL_B_12Gauge_Pellets_Submunition",
			"NL_B_12Gauge_Pellets_Submunition_Deploy",
			"NL_B_12Gauge_Slug",
			"BulletBase",
			"WNZ_Taser_Base",
			"M319_NL_Rnd"
		};
		requiredAddons[]=
		{
			"A3_characters_F",
			"A3_Data_F",
			"OPTRE_Weapons"
		};
		authors[] = {"Belhun", "Darknessvoid"};
      	url = ECSTRING(main,URL);
      	VERSION_CONFIG;
	};
};
class CfgSounds
{
	class spark2
	{
		name="spark2";
		Sound[]=
		{
			"\armco_ammo\audio\spark2.ogg",
			"db+25",
			1
		};
		titles[]={};
	};
	class spark3
	{
		name="spark3";
		Sound[]=
		{
			"\armco_ammo\audio\spark3.ogg",
			"db+25",
			1
		};
		titles[]={};
	};
	class spark4
	{
		name="spark4";
		Sound[]=
		{
			"\armco_ammo\audio\spark4.ogg",
			"db+25",
			1
		};
		titles[]={};
	};
};
class CfgCloudlets
{
	class Default;
	class WNZ_TaserExp: Default
	{
		circleVelocity[]={0,0,0};
		moveVelocity[]={0,0,0};
		size[]={0,0};
		color[]=
		{
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
		};
		animationSpeed[]={1000};
		positionVar[]=
		{
			"intensity",
			"intensity",
			"intensity"
		};
		MoveVelocityVar[]={1.75,1.75,1.75};
		colorVar[]={0,0,0,0};
		interval="interval";
		circleRadius="intensity";
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=0.5;
		lifeTime=0.5;
		rotationVelocity=0;
		weight=4;
		volume=1;
		rubbing=0;
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.079999998;
		onTimerScript="";
		beforeDestroyScript="\armco_ammo\functionsns\unco.sqf";
		lifeTimeVar=0;
		rotationVelocityVar=1;
		sizeVar=0;
		randomDirectionPeriodVar=2;
		randomDirectionIntensityVar=0.1;
	};
	class WNZ_TaserExp_Big: Default
	{
		circleVelocity[]={0,0,0};
		moveVelocity[]={0,0,0};
		size[]={0,0};
		color[]=
		{
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
		};
		animationSpeed[]={1000};
		positionVar[]=
		{
			"intensity",
			"intensity",
			"intensity"
		};
		MoveVelocityVar[]={1.75,1.75,1.75};
		colorVar[]={0,0,0,0};
		interval="interval";
		circleRadius="intensity";
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=0.5;
		lifeTime=0.5;
		rotationVelocity=0;
		weight=4;
		volume=1;
		rubbing=0;
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.079999998;
		onTimerScript="";
		beforeDestroyScript="\armco_ammo\functionsns\uncoAoE.sqf";
		lifeTimeVar=0;
		rotationVelocityVar=1;
		sizeVar=0;
		randomDirectionPeriodVar=2;
		randomDirectionIntensityVar=0.1;
	};
	class WNZ_HealExp: Default
	{
		circleVelocity[]={0,0,0};
		moveVelocity[]={0,0,0};
		size[]={0,0};
		color[]=
		{
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
		};
		animationSpeed[]={1000};
		positionVar[]=
		{
			"intensity",
			"intensity",
			"intensity"
		};
		MoveVelocityVar[]={1.75,1.75,1.75};
		colorVar[]={0,0,0,0};
		interval="interval";
		circleRadius="intensity";
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=0.5;
		lifeTime=0.5;
		rotationVelocity=0;
		weight=4;
		volume=1;
		rubbing=0;
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.079999998;
		onTimerScript="";
		beforeDestroyScript="\armco_ammo\functionsns\heal.sqf";
		lifeTimeVar=0;
		rotationVelocityVar=1;
		sizeVar=0;
		randomDirectionPeriodVar=2;
		randomDirectionIntensityVar=0.1;
	};
	#include "CfgAmmotype.hpp"
};
class CfgLights
{
	class WNZ_TaserLight
	{
		color[]={1,1,5,1};
		ambient[]={0.1,0.1,0.5,1};
		brightness=0.15000001;
		diffuse[]={0,0,0,0.75};
		position[]={0,0,0};
		dayLight=1;
		useFlare=1;
		flareSize=0.5;
		flareMaxDistance=100;
	};
};
class WNZ_TaserExplosion
{
	class Light1
	{
		position[]={0,0,0};
		simulation="light";
		type="WNZ_TaserLight";
		intensity=0.25;
		interval=0.2;
		lifeTime=0.75;
	};
	class Exp1
	{
		position[]={0,0,0};
		simulation="particles";
		type="WNZ_TaserExp";
		intensity=1;
		interval=1;
		lifeTime=0.5;
		particleFSLoop=0;
	};
};
class WNZ_TaserExplosion_Big
{
	class Light1
	{
		position[]={0,0,0};
		simulation="light";
		type="WNZ_TaserLight";
		intensity=0.25;
		interval=0.2;
		lifeTime=0.75;
	};
	class Exp1
	{
		position[]={0,0,0};
		simulation="particles";
		type="WNZ_TaserExp_Big";
		intensity=1;
		interval=1;
		lifeTime=0.5;
		particleFSLoop=0;
	};
};
class WNZ_HealExplosion
{
	class Light1
	{
		position[]={0,0,0};
		simulation="light";
		type="WNZ_TaserLight";
		intensity=0.25;
		interval=0.2;
		lifeTime=0.75;
	};
	class Exp1
	{
		position[]={0,0,0};
		simulation="particles";
		type="WNZ_HealExp";
		intensity=1;
		interval=1;
		lifeTime=0.5;
		particleFSLoop=0;
	};
};
#include "CfgAmmoAffect.hpp"
class CfgAmmo
{
	class Default;
	class BulletCore;
	class BulletBase: BulletCore
	{
	};
	class OPTRE_B_57x31_Tracer;
	class OPTRE_B_762x51_Tracer;
	class OPTRE_B_95x40_Tracer;
	class OPTRE_B_30x06_Ball_Tracer;
	class OPTRE_B_127x40_Tracer;
	class OPTRE_B_145x114_APFSDS;
	class OPTRE_8Gauge_Pellets;
	class OPTRE_G_M9_Frag;
	class M319_HE;
	class B_12Gauge_Pellets_Submunition;
	class B_12Gauge_Pellets_Submunition_Deploy;
	class B_12Gauge_Slug;
	class WNZ_Taser_Base: BulletBase
	{
		aiAmmoUsageFlags="64 + 128 + 256";
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0.1;
		ExplosionEffects="WNZ_TaserExplosion";
		explosionTime=-1;
		cartridge="FxCartridge_9mm";
		visibleFire=15;
		audibleFire=120;
		dangerRadiusBulletClose=12;
		dangerRadiusHit=16;
		deflecting=20;
		simulation="shotBullet";
		simulationStep=0.050000001;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=12;
		visibleFireTime=30;
		cost=0.5;
		airLock=0;
		caliber=1.4;
		typicalSpeed=280;
		timeToLive=45;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		minRange=3;
		minRangeProbab=1;
		midRange=750;
		midRangeProbab=1;
		maxRange=2500;
		maxRangeProbab=1;
		tracerScale=0.25;
		tracerStartTime=0.0049999999;
		tracerEndTime=45;
		tracerColor[]={0,0,1,0.5};
		tracerColorR[]={0,0,1,0.5};
		airFriction=-0.00085999997;
		warheadName=".45 ACP Taser";
		whistleOnFire=1;
		whistleDist=50;
	};
	class NL_B_57x31_Tracer: OPTRE_B_57x31_Tracer
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0.1;
		ExplosionEffects="WNZ_TaserExplosion";
		explosionTime=-1;
		caliber=1;
		typicalSpeed=500;
	};
	class NL_B_762x51_Tracer: OPTRE_B_762x51_Tracer
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0.1;
		ExplosionEffects="WNZ_TaserExplosion";
		explosionTime=-1;
		caliber=1;
		typicalSpeed=500;
	};
	class NL_B_95x40_Tracer: OPTRE_B_95x40_Tracer
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0.1;
		ExplosionEffects="WNZ_TaserExplosion";
		explosionTime=-1;
		caliber=1;
		typicalSpeed=500;
	};
	class NL_B_30x06_Ball_Tracer: OPTRE_B_30x06_Ball_Tracer
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0.1;
		ExplosionEffects="WNZ_TaserExplosion";
		explosionTime=-1;
		caliber=0.80000001;
		typicalSpeed=500;
	};
	class NL_B_127x40_Ball: OPTRE_B_127x40_Tracer
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0.1;
		ExplosionEffects="WNZ_TaserExplosion";
		explosionTime=-1;
		caliber=0.60000002;
		typicalSpeed=500;
	};
	class FH_B_127x40_Ball: OPTRE_B_127x40_Tracer
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0.1;
		ExplosionEffects="WNZ_HealExplosion";
		explosionTime=-1;
		caliber=0.60000002;
		typicalSpeed=500;
	};
	#include "CfgAmmoTracer.hpp"
	class NL_B_145x114_APFSDS: OPTRE_B_145x114_APFSDS
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0.1;
		ExplosionEffects="WNZ_TaserExplosion";
		explosionTime=-1;
		caliber=0.40000001;
		typicalSpeed=500;
	};
	class NL_8Gauge_Pellets: OPTRE_8Gauge_Pellets
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0.1;
		ExplosionEffects="WNZ_TaserExplosion";
		explosionTime=-1;
		typicalSpeed=500;
	};
	class NL_B_12Gauge_Pellets_Submunition: B_12Gauge_Pellets_Submunition
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0.1;
		submunitionAmmo="NL_B_12Gauge_Pellets_Submunition_Deploy";
		submunitionConeAngle=3;
		submunitionConeType[]=
		{
			"poissondisc",
			9
		};
		triggerSpeedCoef[]={0.85000002,1};
		triggerTime=0.0080000004;
	};
	class NL_B_12Gauge_Pellets_Submunition_Deploy: B_12Gauge_Pellets_Submunition_Deploy
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0.1;
		ExplosionEffects="WNZ_TaserExplosion";
		explosionTime=-1;
		typicalSpeed=500;
		caliber=0.40000001;
	};
	class NL_B_12Gauge_Slug: B_12Gauge_Slug
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0.1;
		ExplosionEffects="WNZ_TaserExplosion";
		explosionTime=-1;
		typicalSpeed=500;
		caliber=0.40000001;
	};
	class M319_NL_Rnd: M319_HE
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		explosive=1;
		ExplosionEffects="WNZ_TaserExplosion_Big";
		explosionTime=-1;
		typicalSpeed=500;
	};
};
class cfgMagazines
{
	class Default;
	class CA_Magazine: Default
	{
	};
	class OPTRE_8Rnd_127x40_Mag;
	class OPTRE_4Rnd_145x114_APFSDS_Mag;
	class OPTRE_15Rnd_762x51_Mag_Tracer;
	class OPTRE_6Rnd_8Gauge_Pellets;
	class OPTRE_M9_Frag;
	class M319_HE_Grenade_Shell;
	class NL_8Rnd_127x40_Mag: OPTRE_8Rnd_127x40_Mag
	{
		displayname="8Rnd 12.7x40mm Magazine (Non-Lethal)";
		displaynameshort="12.7x40mm(NL)";
		ammo="NL_B_127x40_Ball";
		count=8;
		descriptionshort="8 Round Magazine<br>12.7x40mm<br>Non-Lethal Taser Round";
		tracersEvery=1;
		lastRoundsTracer=8;
	};
	class FH_8Rnd_127x40_Mag: OPTRE_8Rnd_127x40_Mag
	{
		displayname="8Rnd 12.7x40mm Magazine (Full Heal)";
		displaynameshort="12.7x40mm(FH)";
		ammo="FH_B_127x40_Ball";
		count=8;
		descriptionshort="8 Round Magazine<br>12.7x40mm<br>Medical Healing Round";
		tracersEvery=1;
		lastRoundsTracer=8;
	};
	// ARMCO Custom hpp Drugs
	#include "CfgAmmoMag.hpp"
	class NL_15Rnd_762x51_Mag_Tracer: OPTRE_15Rnd_762x51_Mag_Tracer
	{
		displayname="15Rnd 762x51mm Magazine (Non-Lethal)";
		displaynameshort="762x51(NL)";
		ammo="NL_B_762x51_Tracer";
		count=15;
		descriptionshort="15 Round Magazine<br>762x51mm<br>Non-Lethal Taser Round";
		tracersEvery=1;
		lastRoundsTracer=15;
	};
	class NL_4Rnd_145x114_APFSDS_Mag: OPTRE_4Rnd_145x114_APFSDS_Mag
	{
		displayname="15Rnd 145x114mm Magazine (Non-Lethal)";
		displaynameshort="145x114(NL)";
		ammo="NL_B_145x114_APFSDS";
		count=4;
		descriptionshort="4 Round Magazine<br>145x114mm<br>Non-Lethal Taser Round";
		tracersEvery=1;
		lastRoundsTracer=4;
	};
	class NL_6Rnd_8Gauge_Pellets: OPTRE_6Rnd_8Gauge_Pellets
	{
		displayname="6Rnd 8Gauge Pellets (Non-Lethal)";
		displaynameshort="8g Pellet(NL)";
		ammo="NL_8Gauge_Pellets";
		count=6;
		descriptionshort="8 Round Magazine<br>8 Gauge<br>Non-Lethal Taser Round";
		tracersEvery=1;
		lastRoundsTracer=6;
	};
	class NL_1Rnd_8Gauge_Buckshot: OPTRE_6Rnd_8Gauge_Pellets
	{
		displayname="1Rnd 8Gauge Buckshot (Non-Lethal)";
		displaynameshort="8g Buckshot(NL)";
		ammo="NL_B_12Gauge_Pellets_Submunition";
		count=1;
		descriptionshort="1 Round Magazine<br>Buckshot<br>Non-Lethal Taser Round";
		tracersEvery=1;
		lastRoundsTracer=1;
	};
	class NL_1Rnd_8Gauge_Slug: OPTRE_6Rnd_8Gauge_Pellets
	{
		displayname="1Rnd 8Gauge Slug (Non-Lethal)";
		displaynameshort="8g Slug(NL)";
		ammo="NL_B_12Gauge_Slug";
		count=1;
		descriptionshort="1 Round Magazine<br>Slug<br>Non-Lethal Taser Round";
		tracersEvery=1;
		lastRoundsTracer=1;
	};
	class M319_NL: M319_HE_Grenade_Shell
	{
		displayname="M319 NL";
		displaynameshort="NL";
		ammo="M319_NL_Rnd";
	};
	class WNZ_Taser_Mag_11Rnd_45ACP: CA_Magazine
	{
		author="Wenza";
		scope=0;
		displayName=".45 ACP 11Rnd Mag (Taser Electroshock)";
		picture="\A3\weapons_f\data\UI\M_16Rnd_9x21_CA.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		count=11;
		ammo="WNZ_Taser_ammo_45ACP";
		initSpeed=254;
		descriptionShort=".45 ACP 11 Rnd Mag (Taser Electroshock)";
		mass=5;
		tracersEvery=1;
	};
};
class CfgWeapons
{
	class OPTRE_Handgun_Base;
	class OPTRE_M6G: OPTRE_Handgun_Base
	{
		magazines[]=
		{
			"NL_8Rnd_127x40_Mag",
			"FH_8Rnd_127x40_Mag",
			"OPTRE_8Rnd_127x40_Mag",
			"OPTRE_8Rnd_127x40_Mag_Tracer",
			"OPTRE_8Rnd_127x40_AP_Mag"
		};
	};
	class OPTRE_LongRifle_Base;
	class OPTRE_M392_DMR: OPTRE_LongRifle_Base
	{
		magazines[]=
		{
			"NL_15Rnd_30x06_Mag_Tracer",
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag_Tracer",
			"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow"
		};
	};
	class OPTRE_SRS99D: OPTRE_LongRifle_Base
	{
		magazines[]=
		{
			"NL_4Rnd_145x114_APFSDS_Mag",
			"OPTRE_4Rnd_145x114_APFSDS_Mag",
			"OPTRE_4Rnd_145x114_HVAP_Mag",
			"OPTRE_4Rnd_145x114_HEDP_Mag"
		};
	};
	class OPTRE_Shotgun_Base;
	class OPTRE_M45: OPTRE_Shotgun_Base
	{
		magazines[]=
		{
			"NL_6Rnd_8Gauge_Pellets",
			"OPTRE_6Rnd_8Gauge_Pellets",
			"OPTRE_6Rnd_8Gauge_Slugs",
			"OPTRE_6Rnd_8Gauge_HEDP"
		};
	};
	class OPTRE_Rifle_Base;
	class OPTRE_M319: OPTRE_Rifle_Base
	{
		magazines[]=
		{
			"M319_NL",
			"M319_HE_Grenade_Shell",
			"M319_HEDP_Grenade_Shell",
			"M319_Buckshot",
			"M319_Smoke",
			"M319_Smoke_Orange",
			"M319_Smoke_Green",
			"M319_Smoke_Red",
			"1Rnd_HE_Grenade_shell",
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareCIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareYellow_F",
			"3Rnd_UGL_FlareCIR_F",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell"
		};
	};
	class UGL_F
	{
		magazines[]=
		{
			"NL_1Rnd_8Gauge_Buckshot",
			"NL_1Rnd_8Gauge_Slug",
			"1Rnd_HE_Grenade_shell",
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareCIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"ACE_HuntIR_M203"
		};
	};
	class OPTRE_HMGUGL: UGL_F
	{
		magazines[]=
		{
			"NL_1Rnd_8Gauge_Buckshot",
			"NL_1Rnd_8Gauge_Slug",
			"1Rnd_HE_Grenade_shell",
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareCIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareYellow_F",
			"3Rnd_UGL_FlareCIR_F",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell"
		};
	};
	class OPTRE_M301UGL: UGL_F
	{
		magazines[]=
		{
			"NL_1Rnd_8Gauge_Buckshot",
			"NL_1Rnd_8Gauge_Slug",
			"1Rnd_HE_Grenade_shell",
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareCIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareYellow_F",
			"3Rnd_UGL_FlareCIR_F",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell"
		};
	};
};
class cfgMagazineWells
{
	class CBA_40mm_M203
	{
		OPTRE_grenades[]=
		{
			"NL_1Rnd_8Gauge_Buckshot",
			"NL_1Rnd_8Gauge_Slug",
			"OPTRE_1Rnd_Smoke_Grenade_shell",
			"OPTRE_1Rnd_SmokeRed_Grenade_shell",
			"OPTRE_1Rnd_SmokeGreen_Grenade_shell",
			"OPTRE_1Rnd_SmokeYellow_Grenade_shell",
			"OPTRE_1Rnd_SmokePurple_Grenade_shell",
			"OPTRE_1Rnd_SmokeBlue_Grenade_shell",
			"OPTRE_1Rnd_SmokeOrange_Grenade_shell"
		};
	};
	class UGL_40x36
	{
		OPTRE_grenades[]=
		{
			"NL_1Rnd_8Gauge_Buckshot",
			"NL_1Rnd_8Gauge_Slug",
			"OPTRE_1Rnd_Smoke_Grenade_shell",
			"OPTRE_1Rnd_SmokeRed_Grenade_shell",
			"OPTRE_1Rnd_SmokeGreen_Grenade_shell",
			"OPTRE_1Rnd_SmokeYellow_Grenade_shell",
			"OPTRE_1Rnd_SmokePurple_Grenade_shell",
			"OPTRE_1Rnd_SmokeBlue_Grenade_shell",
			"OPTRE_1Rnd_SmokeOrange_Grenade_shell"
		};
	};
	class CBA_40mm_EGLM
	{
		OPTRE_grenades[]=
		{
			"NL_1Rnd_8Gauge_Buckshot",
			"NL_1Rnd_8Gauge_Slug",
			"OPTRE_1Rnd_Smoke_Grenade_shell",
			"OPTRE_1Rnd_SmokeRed_Grenade_shell",
			"OPTRE_1Rnd_SmokeGreen_Grenade_shell",
			"OPTRE_1Rnd_SmokeYellow_Grenade_shell",
			"OPTRE_1Rnd_SmokePurple_Grenade_shell",
			"OPTRE_1Rnd_SmokeBlue_Grenade_shell",
			"OPTRE_1Rnd_SmokeOrange_Grenade_shell"
		};
	};
	class 3UGL_40x36
	{
		OPTRE_grenades[]=
		{
			"NL_1Rnd_8Gauge_Buckshot",
			"NL_1Rnd_8Gauge_Slug",
			"OPTRE_3Rnd_Smoke_Grenade_shell",
			"OPTRE_3Rnd_SmokeRed_Grenade_shell",
			"OPTRE_3Rnd_SmokeGreen_Grenade_shell",
			"OPTRE_3Rnd_SmokeYellow_Grenade_shell",
			"OPTRE_3Rnd_SmokePurple_Grenade_shell",
			"OPTRE_3Rnd_SmokeBlue_Grenade_shell",
			"OPTRE_3Rnd_SmokeOrange_Grenade_shell"
		};
	};
	class CBA_40mm_3GL
	{
		OPTRE_grenades[]=
		{
			"NL_1Rnd_8Gauge_Buckshot",
			"NL_1Rnd_8Gauge_Slug",
			"OPTRE_3Rnd_Smoke_Grenade_shell",
			"OPTRE_3Rnd_SmokeRed_Grenade_shell",
			"OPTRE_3Rnd_SmokeGreen_Grenade_shell",
			"OPTRE_3Rnd_SmokeYellow_Grenade_shell",
			"OPTRE_3Rnd_SmokePurple_Grenade_shell",
			"OPTRE_3Rnd_SmokeBlue_Grenade_shell",
			"OPTRE_3Rnd_SmokeOrange_Grenade_shell"
		};
	};
};
