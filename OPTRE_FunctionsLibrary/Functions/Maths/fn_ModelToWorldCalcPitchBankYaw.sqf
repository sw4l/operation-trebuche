/*
OPTRE_fnc_

Author: Big_Wilk

Description: WIP subject to change or deletion. 

Command: Call 
Return:  
Syntax: 
Parameters: 
Demo Mission: None 
Media:

Example1:

Result:

Example2:

Result:

MP: 
*/

_y = ([(_this select 0), (_this select 1)] call BIS_fnc_dirTo) + (_this select 2); 
_p = 0; 
_r = 0;

[ [ sin _y * cos _p,cos _y * cos _p, 0], [0,0,1] ];