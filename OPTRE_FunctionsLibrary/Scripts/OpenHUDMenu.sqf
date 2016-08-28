private "_hudStyle";

//closeDialog 0; // done by OPTRE_fnc_Menu now. 

_helmet = headgear player; 
	
_varHelmetArray = ( getArray (configfile >> "CfgWeapons" >> _helmet >> "optreVarietys") );
_hudStyle = (getText (configfile >> "CfgWeapons" >> _helmet >> "optreHUDStyle") );

if (_hudStyle == "") then {
	_googles = goggles player;
	_varHelmetArray = ( getArray (configfile >> "CfgGlasses" >> _googles >> "optreVarietys") ); 
	_hudStyle = (getText (configfile >> "CfgGlasses" >> _googles >> "optreHUDStyle") );
};

OPTRE_HUD_ListOfAvalibleMenus = switch _hudStyle do {
	case "ODST_1": 	{ [ objNull, player, -1, ["UNSC_HUD_Settings","UNSC_HUD_ODST","UNSC_DATABASE"] ] call OPTRE_fnc_Menu; };
	case "Glasses": { [ objNull, player, -1, ["UNSC_HUD_Settings","UNSC_HUD_Glass","UNSC_DATABASE"] ] call OPTRE_fnc_Menu; };
	case "EYE": 	{ [ objNull, player, -1, ["UNSC_HUD_Settings","UNSC_DATABASE"] ] call OPTRE_fnc_Menu; };
	case "ONI": 	{ [ objNull, player, -1, ["UNSC_HUD_Settings","UNSC_HUD_ODST","UNSC_DATABASE"] ] call OPTRE_fnc_Menu; };
	default 		{ [ objNull, player, -1, ["UNSC_HUD_Settings","UNSC_DATABASE"] ] call OPTRE_fnc_Menu; };
};