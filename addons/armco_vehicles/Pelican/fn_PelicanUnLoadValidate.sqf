_vehicles = ((_this select 0) getVariable ["OPTRE_Pelican_AttachedToVehiclesEffect",[]]); 
		
if (
		(
			{
				(_x isKindOf "OPTRE_M808B_base") OR  
				(_x isKindOf "OPTRE_falcon_base") OR 
				(_x isKindOf "optre_hornet_base")     
			} count _vehicles > 0
		)
) then {

	if (((getPosATL (_this select 0)) select 2) < 2) then {
			 
		titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>UNLOADING FAILED!</t><br/>-------------------------------------------<br/>Your landing gears must be raised to unload larger vehicles! Your landing gears will automatically raise when unloading large vehicles if you're flying above 2m.", "PLAIN DOWN", -1, true, true];
		playSound "FD_CP_Not_Clear_F";
				
	} else { 
				
		(_this select 0) allowDamage false; 
		player action ["LandGearUp", (_this select 0)];  
					 
		sleep 2;  
		titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>VEHICLE UNLOADED!</t><br/>-------------------------------------------", "PLAIN DOWN", -1, true, true];
		playSound "FD_Finish_F"; 
					 
		{ 
			detach _x;  
			_x setVelocity [0,0,-1]; 
			_x allowDamage false; 
		} forEach _vehicles; 
					 
		sleep 0.5;  
					 
		{_x allowDamage true;} forEach _vehicles; 
		(_this select 0) allowDamage true; 
		(_this select 0) setVariable ["OPTRE_Pelican_AttachedToVehiclesEffect", [], true];  
				
		};
			
} else {
				
	0 = (_this select 0) spawn OPTRE_fnc_PelicanLoad_UnloadAllSupplyPods;
			 
}; 