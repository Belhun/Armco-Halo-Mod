/*
	class R_PG7_F;
	class R_PG7VL;
	class R_TBG7V;
	class R_PG7VR;
	class R_MRAAWS_HEAT_F;
	class R_MRAAWS_HE_F;
	class M_Titan_AA;
	class M_Titan_AP;
	class OPTRE_M_ASGM2_AA;
	class ammo_Penetrator_MRAAWS_HEAT55;
	class ammo_Penetrator_Titan_AT;
*/

//M24 SSR 70mm Disposible AT / AW & Insurrectionist variants
    class 4thot_p_m24 : ammo_Penetrator_MRAAWS_HEAT55
	{
		hit = 400;
		caliber = 30;
		warheadName = "HEAT";
	};
	
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

	class 4thot_p_lat : ammo_Penetrator_MRAAWS_HEAT55
	{
		hit = 450;
		caliber = 30;
		warheadName = "HEAT";
	};

    class 4thot_a_lat24 : R_PG7VL	//High Explosive Anti-Tank
    {
        hit = 70;
        caliber = 1;
        explosive = 1;
        IndirectHit = 7.5;
        IndirectHitRange = 2.5;
        cost = 75;

        submunitionAmmo="4thot_p_lat";
    };

    class 4thot_a_lat48 : R_TBG7V	//High Explosive Dual Purpose
    {
        hit = 150;
        caliber = 1;
        explosive = 1;
        IndirectHit = 75;
        IndirectHitRange = 10;
		ace_vehicle_damage_incendiary = 0.4;
        cost = 75;

		ace_frag_skip = 0;
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_large_HD"};
		ace_frag_charge = 600;
		ace_frag_metal = 2500;
        ace_frag_gurney_c = 3000;
		ace_frag_gurney_k = "1/2";
        
        submunitionAmmo="4thot_p_lat";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
        triggerOnImpact = 1;
    };

	class 4thot_p_mat48 : ammo_Penetrator_MRAAWS_HEAT55
	{
		hit = 600;
		caliber = 50;
		warheadName = "TandemHEAT";
	};

    class 4thot_a_mat48 : R_PG7VR	//Tandem High Explosive Anti-Tank
    {
        hit = 80;
        caliber = 1;
        explosive = 0.8;
        IndirectHit = 10;
        IndirectHitRange = 3;
        cost = 125;

        submunitionAmmo="4thot_p_mat48";
    };
//
//M30 SSR 88mm Disposible AT / AW
	class 4thot_p_m30 : ammo_Penetrator_MRAAWS_HEAT55
	{
		hit = 700;
		caliber = 60;
		warheadName = "HEAT";
	};

    class 4thot_a_m30 : R_MRAAWS_HEAT_F		//High Explosive Anti-Tank
    {
        hit = 90;
        caliber = 1;
        explosive = 0.8;
        IndirectHit = 10;
        IndirectHitRange = 3.5;
		ace_vehicle_damage_incendiary = 0.1;
        cost = 150;

        submunitionAmmo="4thot_p_m30";
    };

	class 4thot_p_m30_aw : ammo_Penetrator_MRAAWS_HEAT55
	{
		hit = 400;
		caliber = 45;
		warheadName = "HEAT";
	};

    class 4thot_a_m30_aw : R_MRAAWS_HE_F	//High Explosive Multi-Purpose
    {
        hit = 150;
        caliber = 1;
        explosive = 1;
        IndirectHit = 50;
        IndirectHitRange = 7;
		ace_vehicle_damage_incendiary = 0.3;
        cost = 75;

		ace_frag_skip = 0;
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_medium_HD"};
		ace_frag_charge = 600;
		ace_frag_metal = 1500;
        ace_frag_gurney_c = 3000;
		ace_frag_gurney_k = "1/2";

        submunitionAmmo="4thot_p_m30_aw";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
        triggerOnImpact = 1;
    };
//
//M32 SAR / MMW-32 Swatter 75mm Reloadable AA / AT / AP (+ M43 SAR 75mm Disposible)
	class 4thot_a_m13 : M_Titan_AP		//High Explosive Fragmentation Proximity Fused
	{
		
	};

	class 4thot_p_m15 : ammo_Penetrator_MRAAWS_HEAT55
	{
		hit = 450;
		caliber = 35;
		warheadName = "HEAT";
	};
	class 4thot_a_m15 : 4thot_a_m13		//High Explosive Multi-Purpose
	{
		hit = 180;
        caliber = 1;
        explosive = 1;
        IndirectHit = 40;
        IndirectHitRange = 7;
        cost = 75;

        ace_frag_charge = 525;
        ace_frag_metal = 1400;

        submunitionAmmo="4thot_p_m15";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
        triggerOnImpact = 1;
	};

	class 4thot_p_m14 : ammo_Penetrator_MRAAWS_HEAT55
	{
		hit = 800;
		caliber = 50;
		warheadName = "HEAT";
	};
	class 4thot_a_m14 : 4thot_a_m15		//High Explosive Anti-Tank
	{

	};

    class 4thot_a_m18 : M_Titan_AA		//High Explosive Fragmentation Proximity Fused
    {
        hit = 120;
        maneuvrability = 20;
        maxSpeed = 550;
        indirectHit = 80;
        timeToLive = 20;
    };
//
//M36 SSR HAV 130mm Reloadable Heavy AT
	class 4thot_p_m16 : ammo_Penetrator_Titan_AT	//
    {
        hit = 700;
		caliber = 60;
    };
	class 4thot_a_m16 : Vorona_HEAT
	{
		class ace_missileguidance;
	};

	class 4thot_a_m17 : Vorona_HE
	{

	};
//
//HAT-96 130mm Disposible AT
	class 4thot_hat96 : 4thot_a_m16
	{
		class ace_missileguidance : ace_missileguidance
		{
			enabled = 0;
		};
	};
//
//M45 SAR 130mmL Reloadable Heavy AA    
    class 4thot_a_m13_sub : 4thot_a_m13
    {
        missileLockMaxDistance = 10000;
        maxControlRange = 10000;
    };

    class 4thot_a_m26 : OPTRE_M_ASGM2_AA
    {
        missileLockMaxDistance = 4000;
        maxControlRange = 6000;
        cmImmunity = 0.95;

        maneuvrability = 10;
        maxSpeed = 900;
        thrust = 400;
        thrustTime = 5;

        ExplosionEffects = "MortarExplosion";
        CraterEffects = "ArtyShellCrater";
        hit = 400;
        caliber=10;
        indirectHit = 150;
        indirectHitRange = 10;
		/*
			submunitionAmmo="ammo_Penetrator_Titan_AT";
			submunitionDirectionType="SubmunitionModelDirection";
			submunitionInitSpeed=1000;
			submunitionParentSpeedCoef=0;
			submunitionInitialOffset[]={0,0,-0.2};
			triggerOnImpact = 1;
		*/
    };

    class 4thot_a_m29 : OPTRE_M_ASGM2_AA
    {
        missileLockMaxDistance = 4000;
        maxControlRange = 6000;
        cmImmunity = 1;
        hit=30;
		explosive=0;
		caliber=1;
		indirectHit=0;
		indirectHitRange=2;
        maxSpeed = 900;
		submunitionAmmo="4thot_a_m13_sub";
		submunitionConeType[] = { "custom", { { 0.3, 0 }, { -0.2, 0.25 }, { -0.2, -0.25 } } }; 
		submunitionConeAngle = 45;
		submunitionConeAngleHorizontal = 45;
        submunitionDirectionType = "SubmunitionTargetDirection";
        triggerSpeedCoef[] = {0.4,4};
        triggerTime = 0.6;
		ExplosionEffects="";
		explosionEffectsDir="";
		deleteParentWhenTriggered=1;
		submunitionInitSpeed=0;
    };
//