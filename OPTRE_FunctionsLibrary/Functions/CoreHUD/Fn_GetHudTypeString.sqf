/*

	OPTRE_Fnc_GetHudTypeString
	
	Author: Big_Wilk
	
	Type: Call
	Return: String

	Description: Returns string of current hud style. Style of hud returned is based on items worn by players in game such as glasses or helmets. 
	
	Parameters: None
	
	Example 1: 
	_hud = [] call OPTRE_Fnc_GetHudTypeString;
	Result: Depends what your wearing, if your wearing an ODST helmet the result would be "ODST_1". If your not wearing a valid item the result would be "". 
	
	
*/

_helmet = headgear player;
_googles = goggles player;

_varHelmetArray = ( getArray (configfile >> "CfgWeapons" >> _helmet >> "optreVarietys") ); // optreVarietys[] = {"_dp","","_broken"};
_hudStyle = (getText (configfile >> "CfgWeapons" >> _helmet >> "optreHUDStyle") ); // "ODST_1"
_hel = true;

if (_hudStyle == "") then {
	_varHelmetArray = ( getArray (configfile >> "CfgGlasses" >> _googles >> "optreVarietys") ); // optreVarietys[] = {"_dp","","_broken"};
	_hudStyle = (getText (configfile >> "CfgGlasses" >> _googles >> "optreHUDStyle") ); // "ODST_1"
	_hel = false; 
};
	
_hudStyle