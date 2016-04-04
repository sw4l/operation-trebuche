if dialog exitWith {};

private "_hudStyle";

_helmet = headgear player; 
	
_varHelmetArray = ( getArray (configfile >> "CfgWeapons" >> _helmet >> "optreVarietys") );
_hudStyle = (getText (configfile >> "CfgWeapons" >> _helmet >> "optreHUDStyle") );

if (_hudStyle == "") then {
	_googles = goggles player;
	_varHelmetArray = ( getArray (configfile >> "CfgGlasses" >> _googles >> "optreVarietys") ); 
	_hudStyle = (getText (configfile >> "CfgGlasses" >> _googles >> "optreHUDStyle") );
};

if (_hudStyle == "") exitWith {};

if (isNil "OPTRE_HUD_CurrentSelectedMenu") then {OPTRE_HUD_CurrentSelectedMenu = 0;};

OPTRE_HUD_ListOfAvalibleMenus = switch _hudStyle do {
	case "ODST_1": 	{ 
						[ 
							["HUD General Settings","OPTRE_HUD_GenralSettings"],
							["ODST HUD Customisation","OPTRE_HUD_CoustomiseODST"],
							["Personal Navigation Assistant","OPTRE_HUD_PersonalNav"] 
						] 
					};
	case "Glasses": { 
						[ 
							["HUD General Settings","OPTRE_HUD_GenralSettings"],
							["Tactical Glasses Customisation","OPTRE_HUD_CoustomiseGlass"],
							["Personal Navigation Assistant","OPTRE_HUD_PersonalNav"] 
						] 
					};
	case "EYE": 	{ 
						[ 
							["HUD General Settings","OPTRE_HUD_GenralSettings"],
							/*["Tactical Eyepiece Customisation","OPTRE_HUD_CoustomiseODST"],*/
							["Personal Navigation Assistant","OPTRE_HUD_PersonalNav"] 
						] 
					};
	case "ONI": 	{ 
						[ 
							["HUD General Settings","OPTRE_HUD_GenralSettings"],
							/*["ONI HUD Customisation","OPTRE_HUD_CoustomiseODST"],*/
							["Personal Navigation Assistant","OPTRE_HUD_PersonalNav"] 
						] 
					};
};

/*
if () then {
	OPTRE_HUD_ListOfAvalibleMenus = OPTRE_HUD_ListOfAvalibleMenus + [_x]
};
*/

_d = (OPTRE_HUD_ListOfAvalibleMenus select OPTRE_HUD_CurrentSelectedMenu select 1);
createDialog _d;