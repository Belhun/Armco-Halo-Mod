_AOE = 0.4;
{
	[_x] call ace_medical_treatment_fnc_fullHealLocal;
} forEach (nearestObjects [_this, [
"Civilian",
"SoldierGB",
"SoldierEB",
"SoldierWB"
], _AOE]);

	
	
	
	
	
	
	
	
	
	
	
	
