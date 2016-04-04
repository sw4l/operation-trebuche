/*

OPTRE_fnc_FrigateFilterInventory

Author: Big_Wilk

Description:
Type: Call 
Return: bool (true once done)

Params: 

MP: 

Example 1:

Result: 

Example 2:

Result: 

*/

_ctrl = ((findDisplay 25000) displayCtrl 1500);
lbClear _ctrl;
_requiredFilter = if (typeName (_this select 0) == "String") then {(_this select 0)} else {(_this select 0) lbData (lbCurSel (_this select 0))};
_allVehiclesInStock = OPTRE_Frigate_Current getVariable ["OPTRE_Frigate_VirtualStock",[]];

_filteredResult = switch (_requiredFilter) do {
	case "ALL": { _allVehiclesInStock };
	case "OTHER": { _result = []; {_string = (getText (configfile >> "CfgVehicles" >> _x >> "displayName")); if ( {[_x, _string, false] call BIS_fnc_inString} count ["Pelican","Falcon","Warthog","Mongoose"] < 1 ) then { _result pushBack _string; }; } forEach _allVehiclesInStock; _result  };
	case "Pelican": { _result = []; {if (["Pelican", _x, false] call BIS_fnc_inString) then {_result pushBack _x;};} forEach _allVehiclesInStock; _result };
	case "Falcon": { _result = []; {if (["Falcon", _x, false] call BIS_fnc_inString) then {_result pushBack _x;};} forEach _allVehiclesInStock; _result };
	case "Warthog": { _result = []; {if (["Warthog", (getText (configfile >> "CfgVehicles" >> _x >> "displayName")), false] call BIS_fnc_inString) then {_result pushBack _x;};} forEach _allVehiclesInStock; _result };
	case "Mongoose": { _result = []; {if (["Mongoose", _x, false] call BIS_fnc_inString) then {_result pushBack _x;};} forEach _allVehiclesInStock; _result };
	default { _allVehiclesInStock };
};

{
	_i = _ctrl lbAdd (getText (configfile >> "CfgVehicles" >> _x >> "displayName"));
	_ctrl lbSetPicture [_i, (getText (configfile >> "CfgVehicles" >> _x >> "picture"))];
	_ctrl lbSetData [_i, _x];
} forEach _filteredResult;

lbSort [_ctrl, "DESC"];