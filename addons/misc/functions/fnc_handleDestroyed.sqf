#include "..\script_component.hpp"
/*
 * Author: Glowbal
 * This will on Death of a vehicle Eject all the Cargo and disbale the Sim on the objects
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_object] call ace_cargo_fnc_handleDestroyed
 *
 * Public: No
 */

params ["_vehicle"];
TRACE_1("params",_vehicle);

private _loaded = _vehicle getVariable ["ace_cargo_loaded", []];
if (_loaded isEqualTo []) exitWith {};

{
    if (_x isEqualType objNull) then {
        detach _x;
        _x allowDammage false;
        [_x, _vehicle] call ace_cargo_fnc_unloadItem;
        _x enableSimulationGlobal false;
    };

} forEach _loaded;

[_vehicle] call ace_cargo_fnc_validateCargoSpace;
