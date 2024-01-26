/*
	class RPG7_F;
    class M_PG7VL;
    class M_TBG7V;
    class M_PG7VR;
    class MRAWS_HEAT_F;
    class MRAWS_HEAT55_F;
    class Titan_AP;
    class Titan_AA;
    class MRAWS_HE_F;
    class Vorona_HE;
    class Vorona_HEAT;
	class OPTRE_M41_Twin_HEAT;
	class OPTRE_M41_Twin_HEAT_SACLOS;
	class OPTRE_M41_Twin_HEAT_Thermal;
	class OPTRE_M41_Twin_HEAP;
	class OPTRE_M41_Twin_HE;
	class OPTRE_M41_Twin_HE_SACLOS_ProximityFuse;
	class OPTRE_M41_Twin_HE_Thermal_ProximityFuse;
	class OPTRE_M41_Twin_Smoke_Y;
	class OPTRE_M41_Twin_Smoke_W;
	class OPTRE_M41_Twin_Smoke_R;
*/

//M24 SSR 70mm Disposible AT / AW & Insurrectionist variants
    class 4thot_m_m24 : RPG7_F
    {
        displayName = "M24 SSM 70mm HEAT (AT)";
        displayNameShort = "(AT) Disposable";
        descriptionShort = "";
        mass = 40;
        ammo = "4thot_a_m24";
    };

    class 4thot_m_lat24 : M_PG7VL
    {
        displayName = "LAT-24 90mm STS HEAT";
        displayNameShort = "(AT) Disposable";
        descriptionShort = "";
        mass = 45;
        ammo = "4thot_a_lat24";
    };

    class 4thot_m_lat48 : M_TBG7V
    {
        displayName = "LAT-48 105mm STS HEDP";
        displayNameShort = "(AP/AT) Disposable";
        descriptionShort = "";
        mass = 60;
        ammo = "4thot_a_lat48";
    };

    class 4thot_m_mat48 : M_PG7VR
    {
        displayName = "MAT-48 105mm STS Tandem HEAT";
        displayNameShort = "(AT) Disposable";
        descriptionShort = "";
        mass = 100;
        ammo = "4thot_a_mat48";
    };
//
//M30 SAR 88mm Disposible AT / AW
    class 4thot_m_m30 : MRAWS_HEAT_F
    {
        displayName = "M30 SSM 88mm Tandem HEAT (AT)";
        displayNameShort = "(AT) Disposable";
        descriptionShort = "";
        mass = 60;
        ammo = "4thot_a_m30";
    };

    class 4thot_m_m30_aw : MRAWS_HEAT55_F
    {
        displayName = "M30 SSM 88mm HEMP (AP/AT)";
        displayNameShort = "(AP/AT) Disposable";
        descriptionShort = "";
        mass = 60;
        ammo = "4thot_a_m30_aw";
    };
//
//M32 SAR / MMW-32 Swatter 75mm Reloadable AA / AT / AP
    class 4thot_m_m13 : Titan_AA
    {
        displayName = "M13 SAM 75mm HEF-P (AA)"
        displayNameShort = "(AA) LWAM";
		descriptionShort = "Light Surface-to-Air Missile<br/>High Explosive Fragmentation, Proximity Fused Warhead";
		ammo = "4thot_a_m13";
		mass = 65;
    };

    class 4thot_m_m15 : Titan_AP
    {
        displayName = "M15 SSM 75mm HEMP (AP/AT)"
        displayNameShort = "(AP/AT) HEMP";
        descriptionShort = "Surface-to-Surface Missile<br/>High Explosive Multi-Purpose Warhead";
		ammo = "4thot_a_m15";
		mass = 65;
    };

    class 4thot_m_m14 : 4thot_m_m15
    {
        displayName = "M14 SSM 75mm Tandem HEAT (AT)"
        displayNameShort = "(AT) HEAT";
        descriptionShort = "Surface-to-Surface Missile<br/>High Explosive Anti-Tank Warhead";
		ammo = "4thot_a_m14";
		mass = 65;
    };

    class 4thot_m_m18 : 4thot_m_m13
    {
        displayName = "M18 SAM 75mm HEF-P (AA)"
        displayNameShort = "(AA) LSAM";
		descriptionShort = "Light Surface-to-Air Missile<br/>High Explosive Fragmentation, Proximity Fused Warhead";
		ammo = "4thot_a_m18";
        mass = 65;
    };

    //Insurrectionist Versions
    class 4thot_m_i32_a : 4thot_m_m13
    {
        displayName = "75mm Model A AA-HEF"
        displayNameShort = "(AA) HEF";
		descriptionShort = "Light Anti-Air Missile<br/>High Explosive Fragmentation Warhead";
		ammo = "4thot_a_i32_aa";
		mass = 70;
    };

    class 4thot_m_i32_b : 4thot_m_m14
    {
        displayName = "75mm Model B AT-HEAT"
        displayNameShort = "(AT) HEAT";
        descriptionShort = "Anti-Tank Missile<br/>Tandem High Explosive Anti-Tank Warhead";
		ammo = "4thot_a_i32_heat";
		mass = 70;
    };

    class 4thot_m_i32_c : Titan_AP
    {
        displayName = "75mm Model C AP-HEF"
        displayNameShort = "(AP) HEF";
        descriptionShort = "Anti-Personnel Missile<br/>High Explosive Fragmentation Warhead";
		ammo = "4thot_a_i32_he";
		mass = 70;
    };

    class 4thot_m_i32_d : 4thot_m_m15
    {
        displayName = "75mm Model D HEDP"
        displayNameShort = "(AT/AP) HEDP";
        descriptionShort = "Anti-Personnel/Anti-Tank Missile<br/>High Explosive Multi-Purpose Warhead";
		ammo = "4thot_a_i32_hedp";
		mass = 70;
    };
//
//M43 SAR 75mm Disposible AT / AW
    class 4thot_m_m43 : 4thot_m_m18
    {
        displayName = "M18/43 SAM 75mm HEF-P (AA)"
        displayNameShort = "(AA) Disposable";
		descriptionShort = "";
    };
//
//M36 SSR HAV 130mm Reloadable Heavy AT
	class 4thot_m_m16 : Vorona_HEAT
	{
		displayName = "M16B SSM 130mm T-HEAT (AT:SACLOS)"
        displayNameShort = "(AT) SACLOS";
        descriptionShort = "Surface-to-Surface Missile<br/>SACLOS Guidance<br/>Tandem High Explosive Anti-Tank Warhead";
		ammo = "4thot_a_m16";
	};

	class 4thot_m_m17 : Vorona_HE
	{
		displayName = "M17 SSM 130mm HEMP (AP/AT:SACLOS)"
        displayNameShort = "(AP/AT) SACLOS";
		descriptionShort = "Surface-to-Surface Missile<br/>SACLOS Guidance<br/>High Explosive Multi-Purpose Warhead";
		ammo = "4thot_a_m17";
	};
//
//HAT-96 Sturmhammer 130mm Disposible AT
	class 4thot_m_hat96 : 4thot_m_m16
	{
		displayName = "HAT-96 130mm STS Tandem HEAT"
        displayNameShort = "(AT) Disposable";
        descriptionShort = "";
		ammo = "4thot_a_hat96";
	};

//
//M45 SAR 130mmL Reloadable Heavy AA 
    class 4thot_m_m26 : 4thot_m_m18
    {
        displayName = "M26 SAM 130mmL APHEF (AA)"
        displayNameShort = "(AA) Heat-Seeker";
		descriptionShort = "Heavy Surface-to-Air Missile<br/>Armor Piercing, High Explosive Fragmentation Warhead";
        ammo = "4thot_a_m26";
        mass = 185;
    };

    class 4thot_m_m29 : 4thot_m_m18
    {
        displayName = "M29 3SAM 130mmL/75mm MIT-HEF (AA)"
        displayNameShort = "(AA) 3x Heat-Seeker";
		descriptionShort = "Multiple Independent Targetting Surface-to-Air Missile<br/>3x High Explosive Fragmentation, Proximity Fused Warhead";
        ammo = "4thot_a_m29";
        mass = 210;
    };

	class 4thot_m_m31a : 4thot_m_m18
    {
        displayName = "M31A SSM 130mmL T-HEAT (AT:LASER)"
        displayNameShort = "(AT) LASER";
		descriptionShort = "Heavy Surface-to-Surface Missile<br/>Semi-Active Laser Homing<br/>Tandem High Explosive Anti-Tank Warhead";
        ammo = "4thot_a_m30";
        mass = 195;
    };

	class 4thot_m_m31b : 4thot_m_m31a
    {
        displayName = "M31B SSM 130mmL HE (AP:LASER)"
        displayNameShort = "(AP) LASER";
		descriptionShort = "Heavy Surface-to-Surface Missile<br/>Semi-Active Laser Homing<br/>High Explosive Warhead";
        ammo = "4thot_a_m30";
    };

	class 4thot_m_m31c : 4thot_m_m31b
    {
        displayName = "M31C SSM 130mmL C-HEF (AP:LASER)"
		descriptionShort = "Heavy Surface-to-Surface Missile<br/>Semi-Active Laser Homing<br/>Cluster High Explosive Fragmentation Warhead";
        ammo = "4thot_a_m30";
    };
//
//M41 SSR 75mmR Spnkr / 76mm HMW-41 Jackhammer
	class 4thot_m_m19a : OPTRE_M41_Twin_HEAT
	{
		displayName = "M19A SSM 2x75mmR T-HEAT (AT)"
        displayNameShort = "(AT) Unguided";
        descriptionShort = "Surface-to-Surface Missile<br/>Unguided<br/>High Explosive Anti-Tank Warhead";
		mass = 80;
	};

	class 4thot_m_m20a : OPTRE_M41_Twin_HEAT_SACLOS
	{
		displayName = "M20A SSM 2x75mmR T-HEAT (AT:SACLOS)"
        displayNameShort = "(AT) SACLOS";
        descriptionShort = "Surface-to-Surface Missile<br/>SACLOS Guidance<br/>High Explosive Anti-Tank Warhead";
		mass = 100;
	};

	class 4thot_m_m21a : OPTRE_M41_Twin_HEAT_Thermal
	{
		displayName = "M21A SSM 2x75mmR T-HEAT (AT:HEATSEEK)"
        displayNameShort = "(AT) Heat-Seeker";
        descriptionShort = "Surface-to-Surface Missile<br/>Heat-Seeking Guidance<br/>High Explosive Anti-Tank Warhead";
		mass = 100;
	};

	class 4thot_m_m19b : OPTRE_M41_Twin_HEAP
	{
		displayName = "M19B SSM 2x75mmR HEMP (AP/AT)"
        displayNameShort = "(AP/AT) Unguided";
        descriptionShort = "Surface-to-Surface Missile<br/>Unguided<br/>High Explosive Multi-Purpose Warhead";
		mass = 80;
	};

	class 4thot_m_m20b : 4thot_m_m19b
	{
		displayName = "M20B SSM 2x75mmR HEMP (AP/AT:SACLOS)"
        displayNameShort = "(AP/AT) SACLOS";
		descriptionShort = "Surface-to-Surface Missile<br/>SACLOS Guidance<br/>High Explosive Multi-Purpose Warhead";
		ammo = "4thot_m_m20_hedp";
		mass = 100;
	};

	class 4thot_m_m19c : OPTRE_M41_Twin_HE
	{
		displayName = "M19C SSM 2x75mmR HEF (AP)"
        displayNameShort = "(AP) Unguided";
        descriptionShort = "Surface-to-Surface Missile<br/>Unguided<br/>High Explosive Fragmentation Warhead";
		mass = 80;
	};

	class 4thot_m_m20c : OPTRE_M41_Twin_HE_SACLOS_ProximityFuse
	{
		displayName = "M20C SSM 2x75mmR HEF-P (AP/AA:SACLOS)"
        displayNameShort = "(AP/AA) SACLOS";
        descriptionShort = "Surface-to-Surface Missile<br/>SACLOS Guidance<br/>High Explosive Fragmentation Proximity Fused Warhead";
		mass = 100;
	};

	class 4thot_m_m21c : OPTRE_M41_Twin_HE_Thermal_ProximityFuse
	{
		displayName = "M20C SAM 2x75mmR HEF-P (AA:HEATSEEK)"
        displayNameShort = "(AA) Heat-Seeker";
        descriptionShort = "Surface-to-Air Missile<br/>Heat-Seeking Guidance<br/>High Explosive Fragmentation Proximity Fused Warhead";
		mass = 100;
	};

	class 4thot_m_m22a_y : OPTRE_M41_Twin_Smoke_Y
	{
		displayName = "M22A SSC 2x75mmR Smoke (Yellow)"
        displayNameShort = "(Yellow) Smoke";
        descriptionShort = "Surface-to-Surface Canister<br/>Unguided<br/>Yellow Rapid Deployment Smoke";
		mass = 60;
		ammo = "4thot_m_m22_smk_y";
	};

	class 4thot_m_m22a_r : OPTRE_M41_Twin_Smoke_R
	{
		displayName = "M22A SSC 2x75mmR Smoke (Red)"
        displayNameShort = "(Red) Smoke";
        descriptionShort = "Surface-to-Surface Canister<br/>Unguided<br/>Red Rapid Deployment Smoke";
		mass = 60;
	};

	class 4thot_m_m22b_w : OPTRE_M41_Twin_Smoke_W
	{
		displayName = "M22B SAC 2x75mmR Flare (White)"
        displayNameShort = "(White) Flare";
        descriptionShort = "Surface-to-Air Canister<br/>Unguided<br/>White Long Lasting Parachute Flare";
		mass = 60;
	};

	class 4thot_m_m22b_ir : 4thot_m_m22b_w
	{
		displayName = "M22B SAC 2x75mmR Flare (IR)"
        displayNameShort = "(IR) Flare";
        descriptionShort = "Surface-to-Air Canister<br/>Unguided<br/>IR Long Lasting Parachute Flare";
	};

	class 4thot_m_m22c : 4thot_m_m22b_w
	{
		displayName = "M22C SSC 2x75mmR Canister (AP)"
        displayNameShort = "(AP) Canister";
        descriptionShort = "Surface-to-Surface Canister<br/>Unguided<br/>Proximity Flechette Canister Shot";
	};

	//Insurrectionist
	class 4thot_m_i41_a : 4thot_m_m20a
	{
		displayName = "2x76mm STS Model A HEAT"
        displayNameShort = "(AT) SACLOS";
        descriptionShort = "Surface-to-Surface<br/>Unguided<br/>High Explosive Anti-Tank Warhead";
		ammo = "4thot_m_i41_heat";
	};

	class 4thot_m_i41_b : 4thot_m_m20c
	{
		displayName = "2x76mm STA Model B HEF-P"
        displayNameShort = "(AA/AP) SACLOS";
        descriptionShort = "Surface-to-Air<br/>SACLOS Guidance<br/>High Explosive Fragmentation Proximity Fused Warhead";
		ammo = "4thot_m_i41_aa";
	};

	class 4thot_m_i41_c : 4thot_m_m19c
	{
		displayName = "2x76mm STS Model C Thermobaric"
        displayNameShort = "(AS/AP) TAS";
        descriptionShort = "Surface-to-Surface<br/>Unguided<br/>Thermobaric Anti-Structure Warhead";
		ammo = "4thot_m_i41_he";
	};

	class 4thot_m_i41_d : OPTRE_M41_Twin_Smoke_W
	{
		displayName = "2x76mm Model D Smoke: Cloudspot"
        displayNameShort = "(White) Smoke";
        descriptionShort = "White Rapid Deployment Smoke Utility Round";
		mass = 60;
		ammo = "4thot_m_i41_smk_w";
	};

    class 4thot_m_i41_e : 4thot_m_m20a
	{
		displayName = "2x76mm STS Model E HEAT"
        displayNameShort = "(AT) SACLOS";
        descriptionShort = "Surface-to-Surface<br/>SACLOS Guidance<br/>High Explosive Anti-Tank Warhead";
		ammo = "4thot_m_i41_heat";
	};
//
//MATAW-60 90mm Reloadable AT
    class 4thot_m_i60_a : MRAWS_HEAT55_F
    {
        displayName = "90mm STS Model A HEAT"
        displayNameShort = "(AT) HEAT";
        descriptionShort = "Surface to Surface<br/>High Explosive Anti-Tank Warhead";
		mass = 50;
		ammo = "4thot_m_i60_heat";
    };

    class 4thot_m_i60_b : 4thot_m_i60_a
    {
        displayName = "90mm STS Model B HEDP"
        displayNameShort = "(AT/AP) HEDP";
        descriptionShort = "Surface to Surface<br/>High Explosive Multi-Purpose Warhead";
		ammo = "4thot_m_i60_hedp";
    };

    class 4thot_m_i60_c : MRAWS_HE_F
    {
        displayName = "90mm Model C Smoke: Cloudcover"
        displayNameShort = "(White) Smoke";
		descriptionShort = "White Smoke Utility Round";
		mass = 40;
		ammo = "4thot_m_i60_smk_w";
    };

	class 4thot_m_i60_d : 4thot_m_i60_c
    {
        displayName = "90mm Model D Smoke: Ragemarker"
        displayNameShort = "(Red) Smoke";
		descriptionShort = "Red Smoke Utility Round";
		ammo = "4thot_m_i60_smk_r";
    };

	class 4thot_m_i60_e : 4thot_m_i60_c
    {
        displayName = "90mm Model E Flare: Starstreak"
        displayNameShort = "(White) C-Flare";
		descriptionShort = "White Cluster Flare Utility Round";
		ammo = "4thot_m_i60_flr_w";
    };

	class 4thot_m_i60_f : MRAWS_HE_F
    {
        displayName = "90mm STS Model F Thermobaric"
        displayNameShort = "(AS/AP) TAS";
        descriptionShort = "Surface to Surface<br/>Thermobaric Anti-Structure Warhead";
		mass = 50;
		ammo = "4thot_m_i60_he";
    };

    class 4thot_m_i60_g : MRAWS_HEAT_F
    {
        displayName = "90mm STS Model G Tandem HEAT"
        displayNameShort = "(AT) Tandem";
        descriptionShort = "Surface to Surface<br/>Tandem High Explosive Anti-Tank Warhead";
		mass = 60;
		ammo = "4thot_m_i60_hat";
    };

    class 4thot_m_i60_h: 4thot_m_i60_c
    {
        displayName = "90mm Model H Flare: Dawnlight"
        displayNameShort = "(Yellow) Flare";
		descriptionShort = "Yellow Long-burn Flare Utility Round";
		ammo = "4thot_m_i60_flr_y";
    };

	class 4thot_m_i60_i: 4thot_m_i60_c
    {
        displayName = "90mm Model I Flare: Dusklight"
        displayNameShort = "(Red/IR) Flare";
		descriptionShort = "Red/IR Long-burn Flare Utility Round";
		ammo = "4thot_m_i60_flr_ir";
    };

	class 4thot_m_i60_j : MRAWS_HEAT_F
    {
        displayName = "90mm STS Model J T-HEAT SACLOS"
        displayNameShort = "(AT) SACLOS";
        descriptionShort = "Surface to Surface<br/>SACLOS Guidance<br/>Tandem High Explosive Anti-Tank Warhead";
		mass = 75;
		ammo = "4thot_m_i60_atgm";
    };
//