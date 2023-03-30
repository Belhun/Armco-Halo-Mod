#include "cfgPatches.hpp"
class CfgGroups{
	class West
	{
		class ARMCO 
		{
			name = "ARMCO"; // 
			class ARMCO_Groups_S
			{
				name = "Security"; //
				class ARMCO_S_Fireteam
				{
					name="Security team";
					side = 1;
					class Captain
					{
						position[]={0,0,0};
						rank="CAPTAIN";
						side=1;
						vehicle="ARMCO_Soldier_ODST_Security_TL";
					};
					class LT: Captain
					{
						position[]={5,-5,0};
						rank="LIEUTENANT";
						vehicle="ARMCO_Soldier_ODST_Security_RM";
					};
					class LT1: LT
					{
						position[]={-5,-5,0};
					};
					class Sergeant: LT
					{
						position[]={10,-10,0};
						rank="SERGEANT";
						vehicle="ARMCO_Soldier_ODST_Security_Medic";
					};
					class LT3: LT
					{
						position[]={15,-15,0};
						vehicle="ARMCO_Soldier_ODST_Security_RM";
					};
				};
			};
			class ARMCO_Groups_I
			{
				name = "Infantry"; //
				class ARMCO_A_Fireteam
				{
					name="Alpha Team";
					side = 1;
					class TL_A
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=1;
						vehicle="ARMCO_Soldier_O_Alpha_TL";
					};
					class rifleman : TL_A
					{
						position[]={0,-5,0};
						rank="PRIVATE";
						vehicle="ARMCO_Soldier_O_Alpha";
					};
					class rifleman1 : rifleman
					{
						position[]={0,-10,0};
					};
					class corpsman : rifleman
					{
						position[]={0,-15,0};
						rank="CORPORAL";
						vehicle="ARMCO_Soldier_O_Alpha_Corpsman";
					};
					class rifleman2 : rifleman
					{
						position[]={0,-20,0};
					};
				};
				class ARMCO_E_Fireteam
				{
					name="Echo Team";
					side = 1;
					class TL_E
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=1;
						vehicle="ARMCO_Soldier_O_Echo_TL";
					};
					class rifleman: TL_E
					{
						position[]={0,-5,0};
						rank="PRIVATE";
						vehicle="ARMCO_Soldier_O_Echo";
					};
					class rifleman1: rifleman
					{
						position[]={0,-10,0};
					};
					class corpsman : rifleman
					{
						position[]={0,-15,0};
						rank="CORPORAL";
						vehicle="ARMCO_Soldier_O_Echo_Corpsman";
					};
					class rifleman2: rifleman
					{
						position[]={0,-20,0};
					};
				};
				class ARMCO_P_Fireteam
				{
					name="Phoenix Team";
					side = 1;
					class TL_P
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=1;
						vehicle="ARMCO_Soldier_O_Phoenix_TL";
					};
					class rifleman : TL_P
					{
						position[]={0,-5,0};
						rank="PRIVATE";
						vehicle="ARMCO_Soldier_O_Phoenix";
					};
					class rifleman1: rifleman
					{
						position[]={0,-10,0};
					};
					class corporal : rifleman
					{
						position[]={0,-15,0};
						rank="CORPORAL";
						vehicle="ARMCO_Soldier_Phoenix_Corpsman";
					};
					class rifleman2: rifleman
					{
						position[]={0,-20,0};
					};
				};
				class ARMCO_Z_Fireteam
				{
					name="Zulu Team";
					side = 1;
					class TL_Z
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=1;
						vehicle="ARMCO_Soldier_O_Zulu_TL";
					};
					class rifleman: TL_Z
					{
						position[]={0,-5,0};
						rank="PRIVATE";
						vehicle="ARMCO_Soldier_O_Zulu";
					};
					class rifleman1 : rifleman
					{
						position[]={0,-10,0};
					};
					class corporal : TL_Z
					{
						position[]={0,-15,0};
						rank="CORPORAL";
						vehicle="ARMCO_Soldier_O_Zulu_Corpsman";
					};
					class rifleman2: rifleman
					{
						position[]={0,-20,0};
					};
				};
				class ARMCO_A_CO_Team
				{
					name="Alpha Command Team";
					side = 1;
					class SL_A
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=1;
						vehicle="ARMCO_Soldier_O_Alpha_TL";
					};
					class SqSgt : SL_A
					{
						position[]={0,-5,0};
						rank="SERGEANT";
						vehicle="ARMCO_Soldier_O_Alpha_TL";
					};
					class SqCpl : SL_A
					{
						position[]={0,-10,0};
						rank="CORPORAL";
						vehicle="ARMCO_Soldier_O_Alpha_TL";
					};
					class SqMedic : SL_A
					{
						position[]={0,-15,0};
						rank="CORPORAL";
						vehicle="ARMCO_Soldier_O_Alpha_Medic";
					};
				};
				class ARMCO_E_CO_Team
				{
					name="Echo Command Team";
					side = 1;
					class SL_A
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=1;
						vehicle="ARMCO_Soldier_O_Echo_TL";
					};
					class SqSgt : SL_A
					{
						position[]={0,-5,0};
						rank="SERGEANT";
						vehicle="ARMCO_Soldier_O_Echo_TL";
					};
					class SqCpl : SL_A
					{
						position[]={0,-10,0};
						rank="CORPORAL";
						vehicle="ARMCO_Soldier_O_Echo_TL";
					};
					class SqMedic : SL_A
					{
						position[]={0,-15,0};
						rank="CORPORAL";
						vehicle="ARMCO_Soldier_O_Echo_Medic";
					};
				};
				class ARMCO_P_CO_Team
				{
					name="Phoenix Command Team";
					side = 1;
					class SL_A
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=1;
						vehicle="ARMCO_Soldier_O_Phoenix_TL";
					};
					class SqSgt : SL_A
					{
						position[]={0,-5,0};
						rank="SERGEANT";
						vehicle="ARMCO_Soldier_O_Phoenix_TL";
					};
					class SqCpl : SL_A
					{
						position[]={0,-10,0};
						rank="CORPORAL";
						vehicle="ARMCO_Soldier_O_Phoenix_TL";
					};
					class SqMedic : SL_A
					{
						position[]={0,-15,0};
						rank="CORPORAL";
						vehicle="ARMCO_Soldier_Phoenix_Medic";
					};
				};
				class ARMCO_Z_CO_Team
				{
					name="Zulu Command Team";
					side = 1;
					class SL_A
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=1;
						vehicle="ARMCO_Soldier_O_Zulu_TL";
					};
					class SqSgt : SL_A
					{
						position[]={0,-5,0};
						rank="SERGEANT";
						vehicle="ARMCO_Soldier_O_Zulu_TL";
					};
					class SqCpl : SL_A
					{
						position[]={0,-10,0};
						rank="CORPORAL";
						vehicle="ARMCO_Soldier_O_Zulu_TL";
					};
					class SqMedic : SL_A
					{
						position[]={0,-15,0};
						rank="CORPORAL";
						vehicle="ARMCO_Soldier_O_Zulu_Medic";
					};
				};
			};
			class ARMCO_Groups_I_C
			{
				name = "Infantry (Camo)";
				side = 1;
				class ARMCO_Z_C_Fireteam
				{
					name="Zulu team";
					class TL_A
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=1;
						vehicle="ARMCO_Soldier_Camo_Zulu_TL";
					};
					class rifleman : TL_A
					{
						position[]={0,-5,0};
						rank="PRIVATE";
						vehicle="ARMCO_Soldier_Camo_Zulu";
					};
					class rifleman1 : rifleman
					{
						position[]={0,-10,0};
					};
					class corpsman : rifleman
					{
						position[]={0,-15,0};
						rank="CORPORAL";
						vehicle="ARMCO_Soldier_Camo_Zulu_Corpsman";
					};
					class rifleman3 : rifleman
					{
						position[]={0,-20,0};
					};
				};
			};
		};
	};
	class East 
	{
		class GH 
		{
			name = "Insurrectionists (Green Horns)"; // 
			class GH_Groups 
			{
				name = "Infantry"; //
				class GH_Fireteam
				{
					name="Fireteam";
					side = 0;
					class Corporal
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle="ARMCO_Soldier_GH_TL";
					};
					class Private: Corporal
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						vehicle="ARMCO_Soldier_GH";
					};
					class Private1: Private
					{
						position[]={-5,-5,0};
					};
					class Private2: Private
					{
						position[]={10,-10,0};
						rank="CORPORAL";
						vehicle="ARMCO_Soldier_GH_Corpsman";
					};
					class Private3: Private
					{
						position[]={15,-15,0};
						vehicle="ARMCO_Soldier_GH";
					};
				};
				class GH_AT_Team
				{
					name="Anti Tank Team";
					side = 0;
					class Corporal
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle="ARMCO_Soldier_GH_TL";
					};
					class Private: Corporal
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						vehicle="ARMCO_Soldier_AT";
					};
					class Private1: Private
					{
						position[]={-5,-5,0};
					};
					class Private2: Private
					{
						position[]={10,-10,0};
						vehicle="ARMCO_Soldier_GH";
					};
					class Private3: Private
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						vehicle="ARMCO_Soldier_GH_Corpsman";
					};
				};
				class GH_AR_Team
				{
					name="Auto-Rifle Team";
					side = 0;
					class Corporal
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle="ARMCO_Soldier_GH_TL";
					};
					class Private: Corporal
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						vehicle="ARMCO_Soldier_AR";
					};
					class Private1: Private
					{
						position[]={-5,-5,0};
					};
					class Private2: Private
					{
						position[]={10,-10,0};
						vehicle="ARMCO_Soldier_AR";
					};
					class Private3: Private
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						vehicle="ARMCO_Soldier_GH_Corpsman";
					};
					class Private4: Private
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						vehicle="ARMCO_Soldier_AR";
					};
				};
			};
		};
	};
	class Indep
	{
		class CA 
		{
			name = "Colonial Administration"; // 
			class ARMCO_Groups_S
			{
				name = "Police"; //
				class ARMCO_CA_Patrol
				{
					name="Police Patrol";
					side = 2;
					class CP_TL
					{
					position[]={0,0,0};
					rank="CORPORAL";
					side=2;
					vehicle="ARMCO_Police_Officer_tl";
					};
					class CP_officer : CP_TL
					{
					position[]={0,-5,0};
					rank="PRIVATE";
					vehicle="ARMCO_Police_Officer";
					};
				};
			};
		};
	};
	};