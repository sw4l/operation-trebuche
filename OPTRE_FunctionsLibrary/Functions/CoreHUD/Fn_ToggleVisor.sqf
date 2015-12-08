private ["_hudStyle","_varHelmetArray","_loadAll"]; 

_helmet = (headgear player);
_googles = goggles player;
if (_helmet == "" AND _googles == "") exitWith {};

_varHelmetArray = ( getArray (configfile >> "CfgWeapons" >> _helmet >> "optreVarietys") ); // optreVarietys[] = {"_dp","","_broken"};
_hudStyle = (getText (configfile >> "CfgWeapons" >> _helmet >> "optreHUDStyle") ); // "ODST_1"
_hel = true;

if (_hudStyle == "") then {
	_varHelmetArray = ( getArray (configfile >> "CfgGlasses" >> _googles >> "optreVarietys") ); // optreVarietys[] = {"_dp","","_broken"};
	_hudStyle = (getText (configfile >> "CfgGlasses" >> _googles >> "optreHUDStyle") ); // "ODST_1"
	_hel = false; 
	OPTREB_HUD_HelmetOnClass = _googles;
};

if (str _varHelmetArray == "[]" OR _hudStyle == "") exitWith {};
_brokenBool = if _hel then {[(_varHelmetArray select 2), _helmet, true] call BIS_fnc_inString} else {false};// has the visor been broken 

if !OPTRE_Hud_On then {
	if !_brokenBool then { // Not Broken 
		switch _hudStyle do { // Not Broken
			case "ODST_1": {
				OPTRE_Hud_MainCurrent = "OPTRE_ODST_Main_1";
				OPTRE_Hud_HealthCurrent = "OPTRE_ODST_HealthBar";
				OPTRE_Hud_AmmoCurrent = "OPTRE_ODST_WeaponProgress"; 
				OPTRE_Hud_LHDCurrent = switch OPTRE_LHD_Function do {
					case 0: { "" };
					case 1: { "OPTRE_LHD_LeftBottom_Radar"};	
					case 2: { "OPTRE_LHD_LeftBottom_PIP" };				
				};
				_loadAll = true; 
			};
			case "EYE": {
				OPTRE_Hud_MainCurrent = "OPTRE_Marine_Main_1";
				OPTRE_Hud_HealthCurrent = "OPTRE_Marine_Main_1_Health";
				OPTRE_Hud_AmmoCurrent = "OPTRE_Marrine_1_WeaponProgress";
				OPTRE_Hud_LHDCurrent = switch OPTRE_LHD_Function do {
					case 0: { "" };
					case 1: { "Marrine_1_LHD_LeftBottom_Radar" };	
					case 2: { "Marrine_1_LHD_LeftBottom_PIP" };				
				};	
				_loadAll = true; 
			};
			case "Glasses": {
				OPTRE_Hud_MainCurrent = "OPTRE_MarrineGlasses_Main";
				OPTRE_Hud_HealthCurrent = "OPTRE_Marine_Main_1_Health";
				OPTRE_Hud_AmmoCurrent = "OPTRE_Marrine_2_AmmoCount";
				OPTRE_Hud_LHDCurrent = switch OPTRE_LHD_Function do {
					case 0: { "" };
					case 1: { "OPTRE_LHD_LeftBottom_Radar"};	
					case 2: { "OPTRE_LHD_LeftBottom_PIP" };				
				};	
				_loadAll = false; 
			};
			case "ONI": {
				OPTRE_Hud_MainCurrent = "OPTRE_ODST_Main_1";
				OPTRE_Hud_HealthCurrent = "OPTRE_ODST_HealthBar";
				OPTRE_Hud_AmmoCurrent = "OPTRE_ODST_WeaponProgress"; 
				OPTRE_Hud_LHDCurrent = switch OPTRE_LHD_Function do {
					case 0: { "" };
					case 1: { "OPTRE_LHD_LeftBottom_Radar"};	
					case 2: { "OPTRE_LHD_LeftBottom_PIP" };				
				};
				_loadAll = true; 			
			};
			case "Marrine_Space": {
			
			};
		};
		
		if _hel then {
				removeHeadgear player;
				OPTREB_HUD_HelmetOnClass = [_helmet, (_varHelmetArray select 0), (_varHelmetArray select 1)] call CBA_fnc_replace;
				player addHeadgear OPTREB_HUD_HelmetOnClass;		
		};
		
	} else { // Broken 
	hint 'broken';
		switch _hudStyle do { 
		
			case "ODST_1": {
				OPTRE_Hud_MainCurrent = "OPTRE_ODST_Main_1_Broken";
				OPTRE_Hud_HealthCurrent = "";
				OPTRE_Hud_AmmoCurrent = "";
				OPTRE_Hud_LHDCurrent = "";
			};
			case "Marine_1": {
				OPTRE_Hud_MainCurrent = "OPTRE_Marine_Main_1_Broken";
				OPTRE_Hud_HealthCurrent = "";
				OPTRE_Hud_AmmoCurrent = "";
				OPTRE_Hud_LHDCurrent = "";	
			};
			case "ONI": {
				OPTRE_Hud_MainCurrent = "OPTRE_ONI_Main_1_Broken";
				OPTRE_Hud_HealthCurrent = "";
				OPTRE_Hud_AmmoCurrent = "";
				OPTRE_Hud_LHDCurrent = "";				
			};
			case "Army": {
				OPTRE_Hud_MainCurrent = "OPTRE_Army_Main_1_Broken";
				OPTRE_Hud_HealthCurrent = "";
				OPTRE_Hud_AmmoCurrent = "";
				OPTRE_Hud_LHDCurrent = "";				
			};			
		};
	};

	if OPTRE_Hud_UnFullyLoaded then {
	
		//vehicle player switchCamera "INTERNAL";
		
		// Open Hud 
		300 cutRsc [OPTRE_Hud_MainCurrent,"PLAIN",0, false];
		if _loadAll then {
			301 cutRsc [OPTRE_Hud_HealthCurrent,"PLAIN",0, false]; 
			302 cutRsc [OPTRE_Hud_AmmoCurrent,"PLAIN",0, false];
			303 cutRsc [OPTRE_Hud_LHDCurrent,"PLAIN",0, false];
		};

		OPTRE_Hud_UnFullyLoaded = false;
	
	};
	
} else {
	
	// Switch off 
	OPTRE_Hud_On = false; 
	
	if _hel then {
		if !_brokenBool then {
			removeHeadgear player;
			player addHeadgear (if ((_varHelmetArray select 1) != "") then { [_helmet, (_varHelmetArray select 1), (_varHelmetArray select 0)] call CBA_fnc_replace } else { _helmet + (_varHelmetArray select 0) });
		};
	};
	
};

true; 