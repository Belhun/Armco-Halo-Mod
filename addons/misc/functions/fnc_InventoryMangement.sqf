#include "..\script_component.hpp"
params ["_unit"];

private _array = getItemCargo _unit;
ISNILS(_CurrentInventory, _array);


// private _pos1 = getPosATL _unit;
// private _pos2 = _pos1 vectorAdd [5,5,0];
// private _box = "Box_NATO_Ammo_F";
// _InventoryCargo = createVehicle [_box, _pos2, [], 0, "NONE"];
// clearItemCargoGlobal _InventoryCargo;
// clearMagazineCargoGlobal  _InventoryCargo;
// clearWeaponCargoGlobal _InventoryCargo;
// clearBackpackCargoGlobal _InventoryCargo;
// {
//     _item = ((_array select 0) select _forEachIndex);
//     _count = ((_array select 1) select _forEachIndex);
//     systemChat format["%1",[_item, _count]];
//     _cargo addItemCargo [_item, _count];
// } forEach (_array select 1);

// _cargo enableSimulationGlobal false;