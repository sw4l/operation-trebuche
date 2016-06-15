/*
	OPTRE_Fnc_VehicleAbandonmentCleanUp
	
	Author: Big_Wilk
	
	Type: Call
	Return: True If Function Attempted To Delete Vehicles, False Other Wise. 

	Description: Design to deal with HEVs. 
	
	Parameters: 
	0: Array: Array of objects. (default []). 
	1: Number: Time in seconds after the object has been abandoned that it can be deleted. Default 300 (5 mins).
	
	Example 1: 
	_vehiclesAdded = [[veh1,veh1,car1,air2],300] call OPTRE_Fnc_VehicleAbandonmentCleanUp;
	Result: 

	MP: Run by server only. 
*/

if (isNil "OPTRE_VehicleCleanUPArray") then {OPTRE_VehicleCleanUPArray = [];};
if (isNil "OPTRE_VehicleCleanIdealMaxNumber") then {OPTRE_VehicleCleanIdealMaxNumber = -1;};

_vehicles = [_this,0,[]] call BIS_fnc_param;
_timer = [_this,1,300] call BIS_fnc_param;

OPTRE_VehicleCleanUPArray = OPTRE_VehicleCleanUPArray + _vehicles;
{_x setVariable ["OPTRE_VehicleAbandonmentCleanUpTimer",(time + _timer),false];} forEach _vehicles;
_countArray = count OPTRE_VehicleCleanUPArray - 1; 

if (OPTRE_VehicleCleanIdealMaxNumber < 0) exitWith {false};
if (_countArray < OPTRE_VehicleCleanIdealMaxNumber) exitWith {false};

_cleanUpList = [];

for "_i" from 0 to _countArray do {
	_veh = OPTRE_VehicleCleanUPArray select _i;
	if (	((count OPTRE_VehicleCleanUPArray) > OPTRE_VehicleCleanIdealMaxNumber) AND (count crew _veh == 0) AND (time > (_veh getVariable ["OPTRE_VehicleAbandonmentCleanUpTimer",(time - 1)]))   ) then {_cleanUpList pushBack _veh;};
};

{deleteVehicle _x;} forEach _cleanUpList;
OPTRE_VehicleCleanUPArray = OPTRE_VehicleCleanUPArray - _cleanUpList;

true;