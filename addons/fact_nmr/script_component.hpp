#define COMPONENT Fact_nmr
#define COMPONENT_BEAUTIFIED AHR - Fact_nmr
#include "\x\AHR\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_FACT_NMR
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_FACT_NMR
    #define DEBUG_SETTINGS DEBUG_SETTINGS_FACT_NMR
#endif

// #define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
// #define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
// #define item_xx(a,b) class _xx_##a {name = a; count = b;}
// #define tx_10(a) a, a, a, a, a, a, a, a, a, a
// #define tx_5(a) a, a, a, a, a
// #define tx_3(a) a, a, a
// #define tx_2(a) a, a
// #define stditem "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","OPTRE_Biofoam","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_tourniquet","kat_IV_16","ACE_morphine","ACE_salineIV_250","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_MapTools","ACE_EntrenchingTool","ACE_Canteen"
// #define meditem "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","kat_ketamine","kat_ketamine","OPTRE_Biofoam","kat_IO_FAST","kat_IO_FAST","ACE_epinephrine","ACE_epinephrine","ACE_tourniquet","kat_IV_16","ACE_tourniquet","ACE_salineIV_250","kat_bloodIV_O_N_250","kat_bloodIV_A_250","kat_bloodIV_B_250","kat_bloodIV_O_500","kat_bloodIV_A_N_500","kat_chestSeal","kat_naloxone","kat_Pulseoximeter","kat_crossPanel"


// #include "\z\ace\addons\medical_engine\script_macros_medical.hpp"
#include "\x\AHR\addons\main\script_macros.hpp"
