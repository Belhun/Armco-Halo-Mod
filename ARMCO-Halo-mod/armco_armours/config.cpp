//This include brings in class CfgPatches and CfgFactionClasses, CfgMarkerClasses, CfgMarkers CfgFactionClasses
#include "CfgPatchesMisc.hpp"

class CfgVehicles{
	#include "CfgVehicleSoldier.hpp"
	

};

class cfgWeapons {
	//this include brings in all the all the Helmets from the CfgVehicleHelmet.hpp
	//btw this include when compiled is palced here on this line
	#include "CfgWeaponsHelmet.hpp"
	
	//this include brings in all the all the Uniforms from the CfgVehicleUniform.hpp
	//btw this include when compiled is palced here on this line
	#include "CfgWeaponsUniform.hpp"
	
	//this include brings in all the all the Vests from the CfgVehicleVest.hpp
	//btw this include when compiled is palced here on this line
	#include "CfgWeaponsSArmour.hpp"
};
