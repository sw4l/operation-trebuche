/*
OPTRE_fnc_MathsTriangulatePos  

Author: Big_Wilk

Description: Maths Functions, triangulates a new position from the following; a known position, a distance, a angle *. 

Command: Call 
Return: Position  
Syntax: Pos = [Pos, Distannce (M), Angle (*)] call OPTREB_fnc_MathsTriangulatePos;
Parameters: 
0: Position
1: distance to new position
2: Angle to new pos (number between 0 and 360) 
Demo Mission: None 
Media: None 

Example1:
Pos = [getpos player, 100, 360] call OPTREB_fnc_MathsTriangulatePos;
Result: Position is returned 

Example2:
_Pos = [[0,0,0],5000, 001] call OPTREB_fnc_MathsTriangulatePos;
Result: Position is returned

MP: any
*/

_pos = _this select 0;
_M = _this select 1;
_360 = _this select 2;

_NewX = _M * (sin _360) + (_Pos select 0);  
_NewY = _M * (cos _360) + (_Pos select 1);    

[_NewX,_NewY,0]