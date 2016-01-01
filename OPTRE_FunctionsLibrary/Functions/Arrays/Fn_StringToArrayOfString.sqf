/*
OPTRE_fnc_StringToArrayOfString

Author: Big_Wilk

Description: break string up into array of string based on comma: "," symbols. Spaces and commas will be removed from the array. 

Command: call
Return: array  
Syntax: _array = "STRING,STRING" call OPTRE_fnc_StringToArrayOfString;

Parameters: 
0: STRING
Demo Mission: None
Media: None
Notes: 

Example 1:
	_result = "a1,a2,a3,a10" call OPTRE_fnc_StringToArrayOfString;
Result: an array ["a1","a2","a3","a10"]

Example 2:
	_result = "a1,a2,a3, A Ten " call OPTRE_fnc_StringToArrayOfString;
Result: an array ["a1","a2","a3","ATen"]

MP: any 
*/

private ["_commerArray","_result","_lastUsed"];

_array = toArray _this;
_array = _array - [32];
_countArray = count _array;

_commerArray = [];
for "_i" from 0 to (_countArray - 1) do {
	if ((_array select _i) == 44) then {_commerArray pushBack _i};
};
_commerArray pushBack _countArray;

_result = [];
_lastUsed = 0;
{
	_tempArray = [];
	for "_i" from _lastUsed to _x do {
		_tempArray pushBack (_array select _i);
   };
   _string = (toString (_tempArray - [44]));
   if (_string != "") then {_result pushBack _string;};
   _lastUsed = _x; 
} forEach _commerArray; 

//hint format ["%1\n%2",_commerArray, _result];

_result;