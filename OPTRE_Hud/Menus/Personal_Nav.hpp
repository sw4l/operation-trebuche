#define true 1
#define false 0

class OPTRE_HUD_PersonalNav
{
	idd = 11002;                      // set to -1, because we don't require a unique ID
	movingEnable = true;           // the dialog can be moved with the mouse (see "moving" below)
	enableSimulation = true;      // freeze the game
	controlsBackground[] = { };    // no background controls needed
	
	//onLoad = "OPTRE_Hud_SettingsOpen = True;";
	//onUnLoad = "0 = [] execVM 'b.sqf';";
	
 	class Objects {
	
	};   
	
    class Controls
    {
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Dufuji)
		////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Vuhuzi)
		////////////////////////////////////////////////////////

		/*class RscButtonMenuOK_2600: OPTRE_HUD_RscButton
		{
			x = 0.0978125 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;
			onButtonClick = "OPTRE_Hud_On = false; 0 = [] spawn {waitUntil {OPTRE_Hud_UnFullyLoaded}; 0 = true spawn OPTRE_fnc_ToggleVisor;};";
		};*/
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////

		class RscListbox_1500: OPTRE_HUD_RscListbox
		{
			idc = 1500;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.374 * safezoneH;
			onLoad = "{   _i = (_this select 0) lbAdd (_x select 0);   (_this select 0) lbSetData [_i,(_x select 1)];  } forEach OPTRE_HUD_ListOfAvalibleMenus; (_this select 0) lbSetCurSel OPTRE_HUD_CurrentSelectedMenu;";
			onLBSelChanged = "_n = (_this select 1); if (_n > OPTRE_HUD_CurrentSelectedMenu OR _n < OPTRE_HUD_CurrentSelectedMenu) then { [_n] spawn {OPTRE_HUD_CurrentSelectedMenu = (_this select 0); closeDialog 0; waitUntil {!dialog}; createDialog (OPTRE_HUD_ListOfAvalibleMenus select OPTRE_HUD_CurrentSelectedMenu select 1);}; }; ";
		};
		class RscPicture_1200: OPTRE_HUD_MapNormal
		{
			idc = 1200;
			//text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.273281 * safezoneW;
			h = 0.297 * safezoneH;
			onLoad = "( _this select 0 ) ctrlAddEventHandler [""Draw"", ""     _ctrl = _this select 0;         _pos = getPos player;           if (count OPTRE_HUD_PersonalWaypoints > 0) then {     _lastWaypoint = (OPTRE_HUD_PersonalWaypoints select 0);     _ctrl drawArrow [_pos, _lastWaypoint, [0,0,0,1] ];     {      _ctrl drawArrow [_lastWaypoint, _x, [0,0,0,1] ];       _lastWaypoint = _x;     } forEach OPTRE_HUD_PersonalWaypoints;     };         if OPTRE_HUD_CurrentObjective_Wanted then {     _nameObj = ([player] call BIS_fnc_taskCurrent);     if (_nameObj != '') then {      _curObj = (_nameObj call BIS_fnc_taskDestination);        _ctrl drawArrow [ (getPos player), _curObj, [1,1,0,1] ];     };    };         if ( (str OPTRE_HUD_PersonalBecon) != '[0,0,0]' AND OPTRE_HUD_PersonalBecons_Wanted ) then {     _ctrl drawArrow [_pos, OPTRE_HUD_PersonalBecon, [1,0,0,1] ];    };       if OPTRE_HUD_GroupWaypointsWanted then {     _noWaypoint = count (waypoints player);      _grpPlayer = group player;      _lastWaypoint = _pos;     if (_noWaypoint > 1) then {      for '_i' from 0 to (_noWaypoint - 1) do {        _wp = waypointPosition [_grpPlayer, _i];       _ctrl drawArrow [_lastWaypoint, _wp, [0,0,1,1] ];        _lastWaypoint = _wp;         };       };     };        ""];     ";
			onMouseButtonClick = "onMapSingleClick ""if (!_shift AND !_alt) then {OPTRE_HUD_PersonalWaypoints = OPTRE_HUD_PersonalWaypoints + [_pos];}; if (_alt) then {OPTRE_HUD_PersonalBecon = _pos;};"";";
			onMouseButtonDblClick = "if (_this select 4) then {OPTRE_HUD_PersonalWaypoints = OPTRE_HUD_PersonalWaypoints - [(OPTRE_HUD_PersonalWaypoints select (count OPTRE_HUD_PersonalWaypoints - 1))];};";
		};
		
		
		class RscCheckbox_2800: OPTRE_HUD_RscCheckBox
		{
			idc = 2800;
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
			onCheckedChanged = "if OPTRE_HUD_CurrentObjective_Wanted then {OPTRE_HUD_CurrentObjective_Wanted = false;} else {OPTRE_HUD_CurrentObjective_Wanted = true;};";
			OnLoad = "(_this select 0) cbSetChecked OPTRE_HUD_CurrentObjective_Wanted;";
		};
		class RscCheckbox_2801: OPTRE_HUD_RscCheckBox
		{
			idc = 2801;
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
			onCheckedChanged = "if OPTRE_HUD_PersonalBecons_Wanted then {OPTRE_HUD_PersonalBecons_Wanted = false;} else {OPTRE_HUD_PersonalBecons_Wanted = true;};";
			OnLoad = "(_this select 0) cbSetChecked OPTRE_HUD_PersonalBecons_Wanted;";
		};
		class RscCheckbox_2802: OPTRE_HUD_RscCheckBox
		{
			idc = 2802;
			x = 0.618594 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
			onCheckedChanged = "if OPTRE_HUD_GroupWaypointsWanted then {OPTRE_HUD_GroupWaypointsWanted = false;} else {OPTRE_HUD_GroupWaypointsWanted = true;};";
			OnLoad = "(_this select 0) cbSetChecked OPTRE_HUD_GroupWaypointsWanted;";
		};
		
		
		class RscText_1000: OPTRE_HUD_RscText
		{
			idc = 1000;
			text = "Group Waypoints"; //--- ToDo: Localize;
			x = 0.634062 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,1,1};
			sizeEx = 0.035;
		};
		class RscText_1001: OPTRE_HUD_RscText
		{
			idc = 1001;
			text = "Personal Becons"; //--- ToDo: Localize;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,0,0,1};
			sizeEx = 0.035;
		};
		class RscText_1003: OPTRE_HUD_RscText
		{
			idc = 1003;
			text = "Current Objective"; //--- ToDo: Localize;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,0,1};
			sizeEx = 0.035;
		};
		class RscText_1002: OPTRE_HUD_RscText
		{
			idc = 1002;
			text = "Place WP: 1xClick Delete Last WP: Shift+1xClick Delete All: Shift+Alt+2xClick"; //--- ToDo: Localize;
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.273281 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			sizeEx = 0.035;
		};
		class RscText_1004: OPTRE_HUD_RscText
		{
			idc = 1004;
			text = "To Move Personal Beacon: Alt+1xClick"; //--- ToDo: Localize;
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.273281 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			sizeEx = 0.035;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	
	};
	
};