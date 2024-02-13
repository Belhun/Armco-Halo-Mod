#include "..\script_component.hpp"
/*
 * Author: [Name of Author(s)]
 * [Description]
 *
 * Arguments:
 * 0: The first argument <STRING>
 * 1: The second argument which contains sub values <ARRAY>
 * - 0: Number of bannanas <NUMBER>
 * - 1: Bannana Color <STRING>
 * 2: Multiple input types <STRING|ARRAY|CODE>
 * 3: Optional input <BOOL> (default: true)
 * 4: Optional input with multiple types <CODE|STRING> (default: {true})
 * 5: Not mandatory input <STRING> (default: nil)
 *
 * Return Value:
 * The return value <BOOL>
 *
 * Example:
 * ["something", player] call AHR_Ammo_fnc_heal
 *
 * Public: [Yes/No]
 */
_AOE = 0.4;
{
	[_x] call ace_medical_treatment_fnc_fullHealLocal;
} forEach (nearestObjects [_this, [
"Civilian",
"SoldierGB",
"SoldierEB",
"SoldierWB"
], _AOE]);









