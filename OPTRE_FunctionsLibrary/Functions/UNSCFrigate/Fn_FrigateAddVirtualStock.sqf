/*
OPTRE_fnc_FrigateAddVirtualStock

Author: Big_Wilk

Description: Can be used to update a frigates virtual stock or split an array of information to an array of classnames.
Type: Call 
Return: Array

Params: 
0: Object (The frigate whos virtual stock you want to update)
1: Array (Array of Classnames to be added + how many times example of syntax: [["className_1",4],['className_2',2]])

MP: Best practice is to be run by server only. 

Example 1: Does not set variable as object is null and returns false / Splits, the given information into array of classnames.
_a = [objNull,[["className_1",4],['className_2',2]]] call OPTRE_fnc_FrigateAddVirtualStock;
Return: [false,"className_1","className_1","className_1","className_1","className_2","className_2"]

Example 2: Returns true to indicate that ships virtual stock has been update / Splits, the given information into array of classnames.
_b = [frigatesName,[["className_1",4],['className_2',2]]] call OPTRE_fnc_FrigateAddVirtualStock;
Return: [true,"className_1","className_1","className_1","className_1","className_2","className_2"]

*/

_frigate = [_this,0,objNull] call BIS_fnc_param; // Argument 0 is module logic.
_stockToBeAdded = [_this,1,[]] call BIS_fnc_param; // Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))

//hint str _stockToBeAdded;

_stock = [];
{
	if (count _x == 2) then {
	
		_className = _x select 0; 
		_numberOf = _x select 1; 
		
		if ((typeName _numberOf) == "SCALAR" AND (typeName _className) == "STRING") then {
			
			if ((getText (configfile >> "CfgVehicles" >> _className >> "model")) != "") then {
				
				for "_i" from 1 to _numberOf do {
				
					_stock pushBack _className;
				
				};
			
			};
			
		};
		
	};
	
} forEach _stockToBeAdded;

_boolFrigateNameGiven = !(isNull _frigate); 

if _boolFrigateNameGiven then {
	
	_currentStock = _frigate getVariable ["OPTRE_Frigate_VirtualStock",[]];
	_totalStock = _currentStock + _stock; 
	_frigate setVariable ["OPTRE_Frigate_VirtualStock",_totalStock,true];
	
};

[_boolFrigateNameGiven,_stock]