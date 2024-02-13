_AOE = 0.4;
{
	[_x,"Body","Fentanyl"] call ace_medical_treatment_fnc_medicationLocal;
} forEach (nearestObjects [_this, [
"Civilian",
"SoldierGB",
"SoldierEB",
"SoldierWB"
], _AOE]);
