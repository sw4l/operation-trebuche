moduleName_keyDownEHId = (findDisplay 46) displayAddEventHandler ["KeyDown", "

switch (_this select 1) do {
    case 30: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity [(_v select 0) - 1, (_v select 1), (_v select 2) - 0.25]; }; 
    case 32: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity [(_v select 0) + 1, (_v select 1), (_v select 2) - 0.25]; };
    case 31: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity [(_v select 0), (_v select 1) - 1, (_v select 2) - 0.25]; };
	case 17: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity [(_v select 0), (_v select 1 ) + 1, (_v select 2) - 0.25]; };
	
	case 16: {_HEV = vehicle player; _dir = getDir _HEV; _HEV setDir _dir - 0.5;};
	case 18: {_HEV = vehicle player; _dir = getDir _HEV; _HEV setDir _dir + 0.5;};
};

"];