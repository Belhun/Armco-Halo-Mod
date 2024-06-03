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
 * execVM "x\4thot\addons\misc\functions\fnc_handleDestroyed.sqf";
 * Public: No
 */

params ["_vehicle"];
TRACE_1("params",_vehicle);

private _loaded = _vehicle getVariable ["ace_cargo_loaded", []];
if (_loaded isEqualTo []) exitWith {};



//remove all the Items from the Vehicles cargo
{
    if (_x isEqualType objNull) then {
        detach _x;

        _x allowDammage false;
        [_x, _vehicle] call ace_cargo_fnc_unloadItem;
        _x enableSimulationGlobal false;

        // Get all curators
        private _curators = allCurators;
        // Add _x to each curator's editable objects
        {
            _x addCuratorEditableObjects [[_x], true];
        } forEach _curators;
    };
} forEach _loaded;
private _array = getItemCargo _vehicle;


// diag_log format ["Vehicle Inventroy: %1", ];
private _array = GVAR(_CurrentInventory);
private _pos1 = getPosATL _vehicle;
private _pos2 = _pos1 vectorAdd [5,5,0];
private _box = "Box_NATO_Ammo_F";
_InventoryCargo = createVehicle [_box, _pos2, [], 0, "NONE"];
clearItemCargoGlobal _InventoryCargo;
clearMagazineCargoGlobal  _InventoryCargo;
clearWeaponCargoGlobal _InventoryCargo;
clearBackpackCargoGlobal _InventoryCargo;
{
    _item = ((_array select 0) select _forEachIndex);
    _count = ((_array select 1) select _forEachIndex);
    systemChat format["%1",[_item, _count]];
    _cargo addItemCargo [_item, _count];
} forEach (_array select 1);

_cargo enableSimulationGlobal false;


diag_log format ["ace_cargo_fnc_handleDestroyed: Vehicle %1 had Cargo when it Died", _vehicle];

[_vehicle] call ace_cargo_fnc_validateCargoSpace;
