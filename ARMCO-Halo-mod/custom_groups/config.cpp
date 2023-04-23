#include "cfgPatches.hpp"
class CfgGroups {
  class East {
    class GH {
      name = "Insurrectionists (Green Horns)"; //
      class GH_Groups {
        name = "Infantry"; //
        class GH_Fireteam {
          name = "Fireteam";
          side = 0;
          class Corporal {
            position[] = {0, 0, 0};
            rank = "CORPORAL";
            side = 0;
            vehicle = "ARMCO_Soldier_GH_TL";
          };
          class Private : Corporal {
            position[] = {5, -5, 0};
            rank = "PRIVATE";
            vehicle = "ARMCO_Soldier_GH";
          };
          class Private1 : Private {
            position[] = {-5, -5, 0};
          };
          class Private2 : Private {
            position[] = {10, -10, 0};
            rank = "CORPORAL";
            vehicle = "ARMCO_Soldier_GH_Corpsman";
          };
          class Private3 : Private {
            position[] = {15, -15, 0};
            vehicle = "ARMCO_Soldier_GH";
          };
        };
        class GH_AT_Team {
          name = "Anti Tank Team";
          side = 0;
          class Corporal {
            position[] = {0, 0, 0};
            rank = "CORPORAL";
            side = 0;
            vehicle = "ARMCO_Soldier_GH_TL";
          };
          class Private : Corporal {
            position[] = {5, -5, 0};
            rank = "PRIVATE";
            vehicle = "ARMCO_Soldier_AT";
          };
          class Private1 : Private {
            position[] = {-5, -5, 0};
          };
          class Private2 : Private {
            position[] = {10, -10, 0};
            vehicle = "ARMCO_Soldier_GH";
          };
          class Private3 : Private {
            position[] = {15, -15, 0};
            rank = "CORPORAL";
            vehicle = "ARMCO_Soldier_GH_Corpsman";
          };
        };
        class GH_AR_Team {
          name = "Auto-Rifle Team";
          side = 0;
          class Corporal {
            position[] = {0, 0, 0};
            rank = "CORPORAL";
            side = 0;
            vehicle = "ARMCO_Soldier_GH_TL";
          };
          class Private : Corporal {
            position[] = {5, -5, 0};
            rank = "PRIVATE";
            vehicle = "ARMCO_Soldier_AR";
          };
          class Private1 : Private {
            position[] = {-5, -5, 0};
          };
          class Private2 : Private {
            position[] = {10, -10, 0};
            vehicle = "ARMCO_Soldier_AR";
          };
          class Private3 : Private {
            position[] = {15, -15, 0};
            rank = "CORPORAL";
            vehicle = "ARMCO_Soldier_GH_Corpsman";
          };
          class Private4 : Private {
            position[] = {20, -20, 0};
            rank = "PRIVATE";
            vehicle = "ARMCO_Soldier_AR";
          };
        };
      };
    };
  };
  class Indep {
    class CA {
      name = "Colonial Administration"; //
      class ARMCO_Groups_S {
        name = "Police"; //
        class ARMCO_CA_Patrol {
          name = "Police Patrol";
          side = 2;
          class CP_TL {
            position[] = {0, 0, 0};
            rank = "CORPORAL";
            side = 2;
            vehicle = "ARMCO_Police_Officer_tl";
          };
          class CP_officer : CP_TL {
            position[] = {0, -5, 0};
            rank = "PRIVATE";
            vehicle = "ARMCO_Police_Officer";
          };
        };
      };
    };
  };
};