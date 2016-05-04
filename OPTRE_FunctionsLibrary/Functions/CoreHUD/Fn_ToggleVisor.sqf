private ["_hudStyle","_varHelmetArray","_loadAll"]; 

_helmet = (headgear player);
_googles = goggles player;
if (_helmet == "" AND _googles == "") exitWith {OPTRE_Hud_On = false;};

_varHelmetArray = ( getArray (configfile >> "CfgWeapons" >> _helmet >> "optreVarietys") ); // optreVarietys[] = {"_dp","","_broken"};
_hudStyle = (getText (configfile >> "CfgWeapons" >> _helmet >> "optreHUDStyle") ); // "ODST_1"
_hel = true;

if (_hudStyle == "") then {
	_varHelmetArray = ( getArray (configfile >> "CfgGlasses" >> _googles >> "optreVarietys") ); // optreVarietys[] = {"_dp","","_broken"};
	_hudStyle = (getText (configfile >> "CfgGlasses" >> _googles >> "optreHUDStyle") ); // "ODST_1"
	_hel = false; 
	OPTREB_HUD_HelmetOnClass = _googles;
};

if (str _varHelmetArray == "[]" OR _hudStyle == "") exitWith {OPTRE_Hud_On = false;};
_brokenBool = if _hel then {[(_varHelmetArray select 2), _helmet, true] call BIS_fnc_inString} else {false};// has the visor been broken 

if !OPTRE_Hud_On then {
	if !_brokenBool then { // Not Broken 
		switch _hudStyle do { // Not Broken
			case "ODST_1": {
				OPTRE_Hud_ColorScheme_Text = profileNamespace getVariable ["OPTRE_ODST_HUDColourTextNEW",[1,0.5,0,.95]];
				OPTRE_Hud_ColorScheme_Pictures = profileNamespace getVariable ["OPTRE_ODST_HUDColourPictNEW",[1,0.5,0,.8]];
				OPTRE_Hud_MainCurrent = ((getArray (configfile >> "CfgOptreHudSchemes" >> _hudStyle >> "MainDialogs" >> (profileNamespace getVariable ["OPTRE_ODST_HUDColourMain","orange"]) >> "value")) select 0);
				_loadAll = true; 	
			};
			case "EYE": {
				OPTRE_Hud_ColorScheme_Pictures = [0,0,0,.5];
				OPTRE_Hud_ColorScheme_Text = [0,0,0,.5];
				OPTRE_Hud_ColorScheme_Frame = [1,0.5,0,1];	
				OPTRE_Hud_MainCurrent = (getText (configfile >> "CfgOptreHudSchemes" >> _hudStyle >> "MainDialogs" >>  _googles));				
				_loadAll = true; 	
			};
			case "Glasses": {
				OPTRE_Hud_ColorScheme_Pictures = (profileNamespace getVariable ['OPTRE_GLASS_HUDColourPictNEW',[1,1,0,0.7]]);
				OPTRE_Hud_ColorScheme_Text = (profileNamespace getVariable ['OPTRE_GLASS_HUDColourPictNEW',[0,0,0,0.9]]);
				OPTRE_Hud_ColorScheme_Frame = (profileNamespace getVariable ['OPTRE_GLASS_HUDColourPictNEW',[0,0,0,0.9]]);	
				OPTRE_Hud_MainCurrent = (getText (configfile >> "CfgOptreHudSchemes" >> _hudStyle >> "MainDialogs" >>  _googles));
				_loadAll = false; 
			};
		};
		
		OPTRE_Hud_HealthCurrent = (getText (configfile >> "CfgOptreHudSchemes" >> _hudStyle >> "healthBar"));//"OPTRE_Marine_Main_1_Health"
	  //OPTRE_Hud_AmmoCurrent = (getText (configfile >> "CfgOptreHudSchemes" >> _hudStyle >> "ammoCounter"));//"OPTRE_Marrine_2_AmmoCount"
		OPTRE_Hud_LHDCurrent = ((getArray (configfile >> "CfgOptreHudSchemes" >> _hudStyle >> "LHDs" >> (str OPTRE_LHD_Function))) select 0);
	  //OPTRE_Hud_SheildBar = (getText (configfile >> "CfgOptreHudSchemes" >> _hudStyle >> "sheildBar"));
	  //OPTRE_Hud_OverSheildBar = (getText (configfile >> "CfgOptreHudSchemes" >> _hudStyle >> "overSheildBar"));
	  
		if _hel then {
			removeHeadgear player;
			OPTREB_HUD_HelmetOnClass = [_helmet, (_varHelmetArray select 0), (_varHelmetArray select 1)] call CBA_fnc_replace;
			player addHeadgear OPTREB_HUD_HelmetOnClass;		
		};
		
	} else { // Broken 

		if _hel then { 
			OPTRE_Hud_MainCurrent = (getText (configfile >> "CfgOptreHudSchemes" >> _hudStyle >> _helmet)); 
		} else {		   
			OPTRE_Hud_MainCurrent = (getText (configfile >> "CfgOptreHudSchemes" >> _hudStyle >> _googles));
		};
		
		OPTRE_Hud_ColorScheme_Pictures = [0,0,0,0];
		OPTRE_Hud_ColorScheme_Text = [0,0,0,0];
		OPTRE_Hud_ColorScheme_Frame = [0,0,0,0];
		
		OPTRE_Hud_HealthCurrent = "";
		OPTRE_Hud_AmmoCurrent = "";
		OPTRE_Hud_LHDCurrent = "";
		OPTRE_Hud_SheildBar = "";
		OPTRE_Hud_OverSheildBar = "";
		
	};

	if OPTRE_Hud_UnFullyLoaded then {

		// Open Hud 
		300 cutRsc [OPTRE_Hud_MainCurrent,"PLAIN",0, false];
		if _loadAll then {
			301 cutRsc [OPTRE_Hud_HealthCurrent,"PLAIN",0, false]; 
		  //302 cutRsc [OPTRE_Hud_AmmoCurrent,"PLAIN",0, false];
			0 = [true] call OPTRE_Fnc_SetAmmoCounterState;
			303 cutRsc [OPTRE_Hud_LHDCurrent,"PLAIN",0, false];
		  //304 cutRsc [OPTRE_Hud_SheildBar,"PLAIN",0, false];
		  //305 cutRsc [OPTRE_Hud_OverSheildBar,"PLAIN",0, false];
		};

		OPTRE_Hud_UnFullyLoaded = false;
	
	};
	
} else {
	
	// Switch off 
	OPTRE_Hud_On = false; 
	setAperture -1;
	
	if _hel then {
		if !_brokenBool then {
			removeHeadgear player;
			player addHeadgear (if ((_varHelmetArray select 1) != "") then { [_helmet, (_varHelmetArray select 1), (_varHelmetArray select 0)] call CBA_fnc_replace } else { _helmet + (_varHelmetArray select 0) });
		};
	};
	
};

true; 