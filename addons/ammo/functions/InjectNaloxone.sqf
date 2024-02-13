_AOE = 0.4;
{
	[_x] call kat_pharma_fnc_treatmentAdvanced_NaloxoneLocal;
} forEach (nearestObjects [_this, [
"Civilian",
"SoldierGB",
"SoldierEB",
"SoldierWB"
], _AOE]);