class cfgPatches {
#include "CfgPatches.hpp"
};

class cfgFactionClasses {
  class ARMCO_Armco_Faction {
    icon = "";
    displayName = "Armco Faction";
    side = 1;
    priority = 1;
  };
  class ARMCO_Green_Horns {
    icon = "";
    displayName = "Insurrectionist (Green Horns)";
    side = 0;
    priority = 1;
  };
};

class cfgWeapons {
#include "CfgWeapons.hpp"
};

class cfgVehicles {
#include "CfgVehicles.hpp"

#include "Cfginven.hpp"
};