OPTRE_HEV_CONTROL_KDEH = (findDisplay 46) displayAddEventHandler ["KeyDown", "

	switch (_this select 1) do {

		case 16: {_HEV = vehicle player; _dir = getDir _HEV; _HEV setDir _dir - 0.5;};
		case 18: {_HEV = vehicle player; _dir = getDir _HEV; _HEV setDir _dir + 0.5;};
	};
	
	false;
	
"];

OPTRE_HEV_CONTROL_KEH = player addEventHandler ["Killed",{
	if (!isNil "OPTRE_HEV_CONTROL_KDEH") then {(findDisplay 46) displayRemoveEventHandler ["KeyDown", OPTRE_HEV_CONTROL_KDEH];};
}];

/*
//case 30: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity [(_v select 0) - 1, (_v select 1), (_v select 2)]; }; 
//case 32: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity [(_v select 0) + 1, (_v select 1), (_v select 2)]; };
//case 31: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity [(_v select 0), (_v select 1) - 1, (_v select 2)]; };
//case 17: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity [(_v select 0), (_v select 1 ) + 1, (_v select 2)]; };
		
//([velocity _vehicle, direction _vehicle, (speed _vehicle - 20)] call OPTRE_fnc_GetVelocityWithAddedSpeedDirAndDown)

moduleName_keyDownEHId = (findDisplay 46) displayAddEventHandler ["KeyDown", "

switch (_this select 1) do {
	case 30: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity ([_v, 90, ((speed _HEV) - 20), ((_v select 2) - 0)] call OPTRE_fnc_GetVelocityWithAddedSpeedDirAndDown); hint 'left'; 		}; 
	case 32: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity ([_v, 270, ((speed _HEV) - 20),((_v select 2) - 0)] call OPTRE_fnc_GetVelocityWithAddedSpeedDirAndDown); hint 'right'; 		};
	case 31: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity ([_v, 0, ((speed _HEV) - 20),  ((_v select 2) - 0)] call OPTRE_fnc_GetVelocityWithAddedSpeedDirAndDown); hint 'forward'; 	};
	case 17: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity ([_v, 180, ((speed _HEV) - 20),((_v select 2) - 0)] call OPTRE_fnc_GetVelocityWithAddedSpeedDirAndDown); hint 'backwards'; 	};
		
	case 16: {_HEV = vehicle player; _dir = getDir _HEV; _HEV setDir _dir - 0.5;};
	case 18: {_HEV = vehicle player; _dir = getDir _HEV; _HEV setDir _dir + 0.5;};
};
"];
*/

true;