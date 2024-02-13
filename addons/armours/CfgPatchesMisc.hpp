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

class CfgMarkerClasses {
  class ARMCO_Markers {
    displayName = "ARMCO";
  };
};

class CfgMarkers {
  class ARMCO_Flag {
    name = "ARMCO HQ";
    scope = 2;
    scopeCurator = 2;
    icon = "armco_armours\data\flags\flag_armco_ca.paa";
    color[] = {1, 1, 1, 1};
    size = 29;
    shadow = 0;
    texture = "armco_armours\data\flags\flag_armco_ca.paa";
    markerClass = "ARMCO_Markers";
  };
};