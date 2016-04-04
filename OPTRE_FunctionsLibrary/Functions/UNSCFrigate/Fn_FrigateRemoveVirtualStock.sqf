/*

OPTRE_fnc_FrigateRemoveVirtualStock

Author: Big_Wilk

Description:
Type: Call 
Return: bool (true once done)

Params: 
0: Object (A Frigate Linked to OPTRE_Module_UNSCFrigateSetUp Module)
0: String (Classname to be removed from virtual inventory)
1: Number (Number of times Classname is to be removed from ships inventory)

MP: Best practice is to be run by server only. 

Example 1:
_bool = [myCoolFrigate, "Classname_1", 2] call OPTRE_fnc_FrigateRemoveVirtualStock; 
Result: Two of "Classname_1" will be removed from myCoolFrigate's virtual inventory.

Example 2:
_bool = [myCoolFrigate, "Classname_2", 1] call OPTRE_fnc_FrigateRemoveVirtualStock;
Result: One of "Classname_2" will be removed from myCoolFrigate's virtual inventory. 

*/

_frigate = [_this,0,objNull] call BIS_fnc_param;
_classNameToBeRemoved = [_this,1,""] call BIS_fnc_param;
_numberToBeRemoved = [_this,2,0] call BIS_fnc_param;

_currentStock = _frigate getVariable ["OPTRE_Frigate_VirtualStock",[]];

if (_numberToBeRemoved > 0) then {
	for "_i" from 1 to _numberToBeRemoved do {
		_index = [_currentStock, _classNameToBeRemoved] call CBA_fnc_findTypeOf;
		if (_index > -1) then {
			_currentStock = [_currentStock, _index] call BIS_fnc_removeIndex;
		};
	};
};

_frigate setVariable ["OPTRE_Frigate_VirtualStock",_currentStock,true];

true