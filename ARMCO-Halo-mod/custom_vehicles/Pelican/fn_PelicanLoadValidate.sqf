_pelican = _this select 0;
_veh = _this select 1; 
_loaded = false; 
	
switch true do {
		
	case (_veh isKindOf "OPTRE_M808B_base") : {
		_veh attachTo [_pelican,[0,-7.2, -0.37105]];
		_veh setDir 180; 
		_loaded = true; 
	};
	case (_veh isKindOf "OPTRE_M12A1_LRV" or _veh isKindOf "OPTRE_M12_LRV" or _veh isKindOf "OPTRE_M12G1_LRV" or _veh isKindOf "OPTRE_M12R_AA" or _veh isKindOf "B_LSV_01_unarmed_F" or _veh isKindOf "B_LSV_01_AT_F" or _veh isKindOf "B_LSV_01_armed_F") : {
		_veh attachTo [_pelican,[0,-5,0.12]]; 
		//0 = [vehicle player, 15, 0] call BIS_fnc_setPitchBank; 
		_loaded = true;  		
	};		
	case (_veh isKindOf "OPTRE_M12_FAV") : {
		_veh attachTo [_pelican,[0,-4.5,0.86]];  
		_loaded = true;  
	};		
	case (_veh isKindOf "OPTRE_M813_TT") : {
		_veh attachTo [_pelican,[0,-3.8,.44]];  
		_loaded = true;  
	};
	case (_veh isKindOf "OPTRE_M413_base") : {
		_veh attachTo [_pelican,[0,-3.6,0.30]];  
		_loaded = true;  
	};
	/*case (_veh isKindOf "OPTRE_falcon_base") : {
		_veh attachTo [_pelican,[0,-4.8,-0.1]];  
		_loaded = true;  
	};
	case (_veh isKindOf "optre_hornet_base") : {
		_veh attachTo [_pelican,[0,-5,-0.35]];  
		_loaded = true;  
	};*/
	case (_veh isKindOf "ARMCO_Pandur4_Medical_F" or _veh isKindOf "ARMCO_Pandur4_medical_WD" or _veh isKindOf "ARMCO_Pandur4_medical_2_WD") : {
		_veh attachTo [_pelican,[-.5,-5,.9]];  
		_loaded = true;
	};
	case (_veh isKindOf "ARMCO_Pandur4_cannon_F" or _veh isKindOf "ARMCO_Pandur4_WD" or _veh isKindOf "I_APC_Wheeled_03_cannon_F") : {
		_veh attachTo [_pelican,[-.5,-5,-.2]];  
		_loaded = true;
	};
	case (_veh isKindOf "B_MRAP_01_F" or _veh isKindOf "B_MRAP_01_hmg_F" or _veh isKindOf "B_MRAP_01_gmg_F") : {
		_veh attachTo [_pelican,[-.5,-5,-.2]];  
		_loaded = true;
	};
	case (_veh isKindOf "O_MRAP_02_gmg_F" or _veh isKindOf "O_MRAP_02_hmg_F" or _veh isKindOf "B_MRAP_01_F" or _veh isKindOf "B_MRAP_01_hmg_F" or _veh isKindOf "B_MRAP_01_gmg_F") : {
		_veh attachTo [_pelican,[0,-7,-.1]];  
		_loaded = true;
		_veh setDir 180;
	};
	case (_veh isKindOf "I_MRAP_03_F" or _veh isKindOf "I_MRAP_03_hmg_F" or _veh isKindOf "I_MRAP_03_gmg_F") : {
		_veh attachTo [_pelican,[0,-5,-.1]];  
		_loaded = true;
		_veh setDir 180;
	};
	case (_veh isKindOf "I_MBT_03_cannon_F" or _veh isKindOf "O_MRAP_02_F") : {
		_veh attachTo [_pelican,[0,-7,.3]];  
		_loaded = true;
		_veh setDir 180;
	};
	case (_veh isKindOf "I_APC_tracked_03_cannon_F" or _veh isKindOf "B_APC_Tracked_01_CRV_F") : {
		_veh attachTo [_pelican,[0,-6.3,.3]];  
		_loaded = true;
	};
	case (_veh isKindOf "B_MBT_01_cannon_F" or _veh isKindOf "O_MBT_02_cannon_F" or _veh isKindOf "B_MBT_01_TUSK_F") : {
		_veh attachTo [_pelican,[0,-6.2,.3]];  
		_loaded = true;
		_veh setDir 180;
	};
	case (_veh isKindOf "B_AFV_Wheeled_01_up_cannon_F" or _veh isKindOf "B_AFV_Wheeled_01_cannon_F" or _veh isKindOf "B_MBT_01_arty_F" or _veh isKindOf "O_MBT_02_arty_F") : {
		_veh attachTo [_pelican,[0,-7,.3]];  
		_loaded = true;
		_veh setDir 180;
	};
	case (_veh isKindOf "OPTRE_cart") : {
		_veh attachTo [_pelican,[0,-5,.6]];  
		_loaded = true;
		_veh setDir 180;
	};
	case (_veh isKindOf "B_APC_Tracked_01_AA_F") : {
		_veh attachTo [_pelican,[0,-7,-.1]];  
		_loaded = true;
		_veh setDir 180;
	};
	/*
	//EXAMPLE
	case (_veh isKindOf "VEHICLE_CLASSNAME") : {
		_veh attachTo [_pelican,[x,y,z]];  
		_loaded = true;
		//_veh setDir 180;
	};*/
};
	
if (_loaded) then {
	_pelican setVariable ["OPTRE_Pelican_AttachedToVehiclesEffect", [vehicle player], true];
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>VEHICLE LOADED!</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
	playSound "FD_Finish_F";
} else {
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>CAN NOT LOAD!</t><br/>-------------------------------------------<br/>Your vehicle has not been design to be mag lifted by the pelican.", "PLAIN DOWN", -1, true, true];
	//hint "Your vehicle has not been design to be lifted by the pelican operation aborted.";
	playSound "FD_CP_Not_Clear_F";
};