//This include brings in class CfgPatches and CfgFactionClasses, CfgMarkerClasses, CfgMarkers CfgFactionClasses
#include "CfgPatchesMisc.hpp"

class CfgVehicles{
	#include "CfgVehicleSoldier.hpp"
};
// cfgWeapons includes weapons armours and helmets and uniforms.
class cfgWeapons {
	//this include brings in all the all the Helmets from the CfgVehicleHelmet.hpp
	#include "CfgWeaponsSHelmet.hpp"

	//Brings in all the custom helmets from the CfgWeaponsCHelmet.hpp
	#include "CfgWeaponsCHelmet.hpp"
	
	//this include brings in all the all the Uniforms from the CfgVehicleUniform.hpp
	#include "CfgWeaponsUniform.hpp"
	
	//this include brings in all the all the Vests from the CfgVehicleVest.hpp
	#include "CfgWeaponsSArmour.hpp"


	//this include brings in all the all the Custom armour from the CfgWeaponsCArmour.hpp
	#include "CfgWeaponsCArmour.hpp"
};
