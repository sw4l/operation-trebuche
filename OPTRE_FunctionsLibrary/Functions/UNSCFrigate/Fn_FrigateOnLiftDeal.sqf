/*

OPTRE_fnc_

Author: Big_Wilk

Description: 
Type: Call 
Return: Array [vehicles on lift, units on lift]

Params: 
bool: (Delete Vehicles On Lift?)
MP: 

Example 1:

Result: 

Example 2:

Result: 

*/

_addToStock = [_this,0,false] call BIS_fnc_param;
_frigate = _this select 1; 

_trigger = _frigate getVariable "OPTRE_Frigate_LiftTrigger";
_lift = _frigate getVariable "OPTRE_Frigate_Lift";

_result = []; 
_resultUnit = [];

_allObjects = (nearestObjects [_lift, [], 25]) - [_lift,_trigger];
//_height = getPos _lift select 2;

{

	_objClass = typeOf _x;
	//_objHeight = getPos _x select 2;
	
	if ( ( [_x,_trigger] call CBA_fnc_inArea ) AND !(_x isKindOf "MAN") AND ( ( {_objClass == _x} count ["OPTRE_Frigate_lift_gate","OPTRE_Frigate_LiftArm","OPTRE_Frigate_Console","OPTRE_Frigate_hangar_B1","OPTRE_Frigate_hangar_B2"] ) < 1 ) ) then {
	
		if _addToStock then {
		
			deleteVehicle _x;
			0 = [_frigate,[[_objClass,1]]] call OPTRE_fnc_FrigateAddVirtualStock;
			
		};
		
		_result pushBack _x;
		
	} else {
		if (_x isKindOf "MAN") then { _resultUnit pushBack _x; }; 
	};
	
} forEach _allObjects;

[_result, _resultUnit]