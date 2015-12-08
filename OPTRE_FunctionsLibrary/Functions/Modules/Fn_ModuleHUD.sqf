/*
OPTRE_fnc_ModuleHUD

Author: Big_Wilk

Description: 

Command: Module Spawned 
Return: bool   
Syntax: 
Parameters: 

Demo Mission:
Media:

Example1:

Result: 

Example2:

Result: 

MP: Server 
*/

// Argument 0 is module logic.
_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param; // Argument 0 is module logic.
_units = [_this,1,[],[[]]] call BIS_fnc_param; // Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_activated = [_this,2,true,[true]] call BIS_fnc_param; // True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
 
if (_activated) then {

	 OPTRE_Hud_RadarMode2Allowed = _logic getVariable "HUDRadarShowEn"; //(as per the previous example, but you can define your own.) 
	 publicVariable "OPTRE_Hud_RadarMode2Allowed"; 
	
};

true