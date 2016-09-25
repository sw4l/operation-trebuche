class OPTRE_Menu_HudGenralSettings {
	
	idd = 5602; 

	//onLoad = "";
	//onUnload = "";
		
	class Objects
	{
				
	};			
	class controls 
	{	

		class centralBackground: OPTRE_UNSCMENU_RscPicture
		{
			idc = -1;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.55 * safezoneH;
			colorText[] = {0,0,0,1};
		};
		class background: OPTRE_UNSCMENU_RscPicture
		{
			idc = -1;
			text = "\OPTRE_Modules\data\picture\Menu\background.paa";
			x = 0.149377 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.70125 * safezoneW;
			h = 0.638 * safezoneH;
		};
		class map: OPTRE_UNSCMENU_rscMapControl
		{
			idc = 9999;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.484 * safezoneH;
			onLoad = "( _this select 0 ) ctrlAddEventHandler [""Draw"", ""     _ctrl = _this select 0;         _pos = getPos player;           if (count OPTRE_HUD_PersonalWaypoints > 0) then {     _lastWaypoint = (OPTRE_HUD_PersonalWaypoints select 0);     _ctrl drawArrow [_pos, _lastWaypoint, [0,0,0,1] ];     {      _ctrl drawArrow [_lastWaypoint, _x, [0,0,0,1] ];       _lastWaypoint = _x;     } forEach OPTRE_HUD_PersonalWaypoints;     };         if OPTRE_HUD_CurrentObjective_Wanted then {     _nameObj = ([player] call BIS_fnc_taskCurrent);     if (_nameObj != '') then {      _curObj = (_nameObj call BIS_fnc_taskDestination);        _ctrl drawArrow [ (getPos player), _curObj, [1,1,0,1] ];     };    };         if ( (str OPTRE_HUD_PersonalBecon) != '[0,0,0]' AND OPTRE_HUD_PersonalBecons_Wanted ) then {     _ctrl drawArrow [_pos, OPTRE_HUD_PersonalBecon, [1,0,0,1] ];    };       if OPTRE_HUD_GroupWaypointsWanted then {     _noWaypoint = count (waypoints player);      _grpPlayer = group player;      _lastWaypoint = _pos;     if (_noWaypoint > 1) then {      for '_i' from 0 to (_noWaypoint - 1) do {        _wp = waypointPosition [_grpPlayer, _i];       _ctrl drawArrow [_lastWaypoint, _wp, [0,0,1,1] ];        _lastWaypoint = _wp;         };       };     };        ""];     ";
			onMouseButtonClick = "onMapSingleClick ""if (!_shift AND !_alt) then {OPTRE_HUD_PersonalWaypoints = OPTRE_HUD_PersonalWaypoints + [_pos];}; if (_alt) then {OPTRE_HUD_PersonalBecon = _pos;};"";";
			onMouseButtonDblClick = "if (_this select 4  AND (count OPTRE_HUD_PersonalWaypoints > 0)) then {OPTRE_HUD_PersonalWaypoints = OPTRE_HUD_PersonalWaypoints - [(OPTRE_HUD_PersonalWaypoints select (count OPTRE_HUD_PersonalWaypoints - 1))];};";			
		};
		
		
		/*class i7: OPTRE_UNSCMENU_RscPicture
		{
			idc = 7;
			text = "\A3\ui_f\data\igui\cfg\simpleTasks\types\exit_ca.paa";//"\A3\ui_f\data\igui\cfg\simpleTasks\types\intel_ca.paa";
			x = 0.520625 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			onMouseEnter  = "(_this select 0) ctrlSetTextColor [1,0,0,1]; hint 'in';";
			onMouseExit  = "(_this select 0) ctrlSetTextColor [1,1,1,1]; hint 'out';";		
		};
		class i6: OPTRE_UNSCMENU_RscPicture
		{
			idc = 6;
			text = "\A3\ui_f\data\igui\cfg\simpleTasks\types\search_ca.paa";
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};*/
		
		
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////			
		class i5: OPTRE_UNSCMENU_RscPicture
		{
			idc = 5;
			text = "\A3\ui_f\data\igui\cfg\simpleTasks\types\walk_ca.paa";
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class i5b: OPTRE_UNSCMENU_ButtonInvisible
		{
			idc = -1;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			onMouseEnter  = "((findDisplay 5602) displayCtrl 5) ctrlSetTextColor [0.85,0,0,1];";
			onMouseExit   = "((findDisplay 5602) displayCtrl 5) ctrlSetTextColor [1,1,1,1];";		
			onMouseButtonClick = "OPTRE_HUD_PersonalBecon = nil;";
			tooltip = "Remove Personal Beacon";
		};		
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////	

		
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////	
		class i42: OPTRE_UNSCMENU_RscPicture
		{
			idc = 44;
			text = "\A3\ui_f\data\igui\cfg\simpleTasks\types\navigate_ca.paa";
			x = 0.597969 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};		
		class i41: OPTRE_UNSCMENU_RscPicture
		{
			idc = 4;
			text = "\A3\ui_f\data\igui\cfg\simpleTasks\types\attack_ca.paa";
			x = 0.597969 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};	
		class i4b: OPTRE_UNSCMENU_ButtonInvisible
		{
			idc = -1;
			x = 0.597969 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			onMouseEnter  = "((findDisplay 5602) displayCtrl 4) ctrlSetTextColor [0.85,0,0,1]; ((findDisplay 5602) displayCtrl 44) ctrlSetTextColor [0.85,0,0,1];";
			onMouseExit   = "((findDisplay 5602) displayCtrl 4) ctrlSetTextColor [1,1,1,1]; ((findDisplay 5602) displayCtrl 44) ctrlSetTextColor [1,1,1,1];";		
			onMouseButtonClick = "OPTRE_HUD_PersonalWaypoints = [];";
			tooltip = "Delete All Waypoints Placed";
		};
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////	

		
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////		
		class i3: OPTRE_UNSCMENU_RscPicture
		{
			idc = 3;
			text = "\A3\ui_f\data\igui\cfg\simpleTasks\types\navigate_ca.paa";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		}; 
		class i3b: OPTRE_UNSCMENU_ButtonInvisible
		{
			idc = -1;
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			onMouseEnter  = "((findDisplay 5602) displayCtrl 3) ctrlSetTextColor [0.85,0,0,1];";
			onMouseExit   = "((findDisplay 5602) displayCtrl 3) ctrlSetTextColor [1,1,1,1];";		
			onMouseButtonClick = "if (count OPTRE_HUD_PersonalWaypoints > 0) then {OPTRE_HUD_PersonalWaypoints = OPTRE_HUD_PersonalWaypoints - [(OPTRE_HUD_PersonalWaypoints select (count OPTRE_HUD_PersonalWaypoints - 1))];};";
			tooltip = "Delete Last Waypoint Placed";
		};
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////

		
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////
		class i2: OPTRE_UNSCMENU_RscPicture
		{
			idc = 2;
			text = "\OPTRE_Modules\data\picture\empty_ca.paa";//"\A3\ui_f\data\igui\cfg\simpleTasks\types\navigate_ca.paa";
			x = 0.649531 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class i2b: OPTRE_UNSCMENU_ButtonInvisible
		{
			idc = -1;
			x = 0.649531 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			onMouseEnter  = "((findDisplay 5602) displayCtrl 2) ctrlSetTextColor [0.85,0,0,1];";
			onMouseExit   = "((findDisplay 5602) displayCtrl 2) ctrlSetTextColor [1,1,1,1];";		
			onMouseButtonClick = "((findDisplay 5602) displayCtrl 9999) ctrlMapAnimAdd [1, 0.2, (getPos player)]; ctrlMapAnimCommit ((findDisplay 5602) displayCtrl 9999);";
			tooltip = "Centre Map On Yourself";
		};
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////
		
		
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////		
		class i1: OPTRE_UNSCMENU_RscPicture
		{
			idc = 1;
			text = "\A3\ui_f\data\igui\cfg\simpleTasks\types\exit_ca.paa";
			x = 0.675312 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class i1b: OPTRE_UNSCMENU_ButtonInvisible
		{
			idc = -1;
			x = 0.675312 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			onMouseEnter  = "((findDisplay 5602) displayCtrl 1) ctrlSetTextColor [0.85,0,0,1];";
			onMouseExit   = "((findDisplay 5602) displayCtrl 1) ctrlSetTextColor [1,1,1,1];";		
			onMouseButtonClick = "closeDialog 0;";
			tooltip = "Exit Menu";
		};
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////
		
		
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////	
		class infoButtonPicture: OPTRE_UNSCMENU_RscPicture
		{
			idc = 0;
			text = "\A3\ui_f\data\igui\cfg\simpleTasks\types\whiteboard_ca.paa";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class infoButton: OPTRE_UNSCMENU_ButtonInvisible
		{
			idc = -1;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			onMouseEnter  = "((findDisplay 5602) displayCtrl 0) ctrlSetTextColor [0.85,0,0,1];";
			onMouseExit   = "((findDisplay 5602) displayCtrl 0) ctrlSetTextColor [1,1,1,1];";		
			onMouseButtonClick = "['Place WP: 1xMapClick.<br/>Remove Last WP: Shift + 2xMapClick.<br/>Place Personal Beacon: Alt + 1xMapClick.<br/>','Personal Navigation Assistant Map Shortcuts',true,false] spawn BIS_fnc_guiMessage;";
			tooltip = "Show Personal Navigation Assistant Instructions";
		};
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////

		
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////		
		class OPTRE_UNSCMENU_RscStructuredText_1003: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = 1003;
			text = "Personal Navigation Assistant:"; //--- ToDo: Localize;
			x = 0.716563 * safezoneW + safezoneX;
			y = 0.181 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class OPTRE_UNSCMENU_RscCheckbox_2800: OPTRE_UNSCMENU_RscCheckbox
		{
			idc = 2800;
			x = 0.716563 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
			onCheckedChanged = "if OPTRE_HUD_CurrentObjective_Wanted then {OPTRE_HUD_CurrentObjective_Wanted = false;} else {OPTRE_HUD_CurrentObjective_Wanted = true;};";
			OnLoad = "(_this select 0) cbSetChecked OPTRE_HUD_CurrentObjective_Wanted;";
		};
		class OPTRE_UNSCMENU_RscStructuredText_1000: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = 1000;
			text = "Show Your Current Objective "; //--- ToDo: Localize;
			x = 0.732031 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class OPTRE_UNSCMENU_RscCheckbox_2801: OPTRE_UNSCMENU_RscCheckbox
		{
			idc = 2801;
			x = 0.716563 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
			onCheckedChanged = "if OPTRE_HUD_PersonalBecons_Wanted then {OPTRE_HUD_PersonalBecons_Wanted = false;} else {OPTRE_HUD_PersonalBecons_Wanted = true;};";
			OnLoad = "(_this select 0) cbSetChecked OPTRE_HUD_PersonalBecons_Wanted;";
		};
		class OPTRE_UNSCMENU_RscStructuredText_1001: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = 1001;
			text = "Show Your Personal Beacon"; //--- ToDo: Localize;
			x = 0.732031 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class OPTRE_UNSCMENU_RscCheckbox_2802: OPTRE_UNSCMENU_RscCheckbox
		{
			idc = 2802;
			x = 0.716563 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
			onCheckedChanged = "if OPTRE_HUD_GroupWaypointsWanted then {OPTRE_HUD_GroupWaypointsWanted = false;} else {OPTRE_HUD_GroupWaypointsWanted = true;};";
			OnLoad = "(_this select 0) cbSetChecked OPTRE_HUD_GroupWaypointsWanted;";
		};		
		class OPTRE_UNSCMENU_RscStructuredText_1002: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = 1002;
			text = "Show Your Groups Waypoints"; //--- ToDo: Localize;
			x = 0.732031 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.022 * safezoneH;
		};		
		class PNA_ZoomLevlWIP: OPTRE_UNSCMENU_RscCombo
		{
			idc = 2100;
			x = 0.716563 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Personal Navigation Assistant map zoom."; //--- ToDo: Localize;
			onLBSelChanged = "_scale = [] call OPTRE_Fnc_MapScale; OPTRE_Hud_MapScale = ((lbCurSel (_this select 0) + 1) * (2 * _scale)); if OPTRE_Hud_On then {303 cutRsc [OPTRE_Hud_LHDCurrent,""PLAIN"",-1, false];};";
			OnLoad = "private '_scale'; _scale = [] call OPTRE_Fnc_MapScale; _steps = round (1 / _scale); for '_i' from 1 to (_steps - 1) do { _index = (_this select 0) lbAdd (format [""PNA Map Zoom: %1m"",(_i * 200)]); }; (_this select 0) lbSetCurSel (if !(isNil ""OPTRE_Hud_MapScale"") then {(((OPTRE_Hud_MapScale / (2 * _scale))) - 1)} else {0});";
		};
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////		
		
		
		class radarText: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = 1004;
			text = "Friend or Foe Radar:"; //--- ToDo: Localize;
			x = 0.716563 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class radarZoom: OPTRE_UNSCMENU_RscCombo
		{
			idc = 2101;
			x = 0.716563 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Set FOF radars range 50m-500m."; //--- ToDo: Localize;
			onLBSelChanged = "_scale = [] call OPTRE_Fnc_MapScale; OPTRE_Hud_RadarScale = ((lbCurSel (_this select 0)) * _scale) + _scale; if OPTRE_Hud_On then {303 cutRsc [OPTRE_Hud_LHDCurrent,""PLAIN"",-1, false];};";
			OnLoad = "private '_scale'; _scale = [] call OPTRE_Fnc_MapScale; for '_i' from _scale to ((round (1 / _scale)) * _scale) step _scale do {_index = (_this select 0) lbAdd (format ['FOF Radar Zoom: %1m',((_i / _scale) * 50)]);}; (_this select 0) lbSetCurSel ( if !(isNil ""OPTRE_Hud_RadarScale"") then { (OPTRE_Hud_RadarScale / _scale) - 1 } else { 0 } );";
		
		};
		class radarMode: OPTRE_UNSCMENU_RscCombo
		{
			idc = 2102;
			x = 0.716563 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "What information will be displayed in a pictorial form by your FOF radar. "; //--- ToDo: Localize;
			onLBSelChanged = "OPTRE_Hud_RadarMode = (lbCurSel (_this select 0)); if OPTRE_Hud_On then {303 cutRsc [OPTRE_Hud_LHDCurrent,""PLAIN"",-1, false];};";
			OnLoad = "if (isNil 'OPTRE_Hud_RadarMode2Allowed') then {OPTRE_Hud_RadarMode2Allowed = 2;}; { if !((_x select 1) > OPTRE_Hud_RadarMode2Allowed) then {_index = (_this select 0) lbAdd (format ['FOF Radar Shows: %1',(_x select 0)]) ; };  } forEach [ ['Group',0], ['Side',1], ['Side & Known Enemy',2] ] ; (_this select 0) lbSetCurSel OPTRE_Hud_RadarMode;";
		};
		
		
		class CameraText: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = 1005;
			text = "Team Shoulder Cameras:"; //--- ToDo: Localize;
			x = 0.716563 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class CameraPerson: OPTRE_UNSCMENU_RscCombo
		{
			idc = 2103;
			x = 0.716563 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Whose camera in your group do you want to view when in shoulder camera mode."; //--- ToDo: Localize;
			onLBSelChanged = "OPTRE_LHD_PIPSel = (lbCurSel (_this select 0)); if OPTRE_Hud_On then {303 cutRsc [OPTRE_Hud_LHDCurrent,""PLAIN"",-1, false];}; ";
			OnLoad = "{   _index = (_this select 0) lbAdd (format ['View: %1 %2',rank _x, name _x]) ;  } forEach units group player - [player];  (_this select 0) lbSetCurSel OPTRE_LHD_PIPSel;";
		};
		class CameraMode: OPTRE_UNSCMENU_RscCombo
		{
			idc = 2104;
			x = 0.716563 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Switching between the cameras vision modes can help you see whats going on better. "; //--- ToDo: Localize;
			onLBSelChanged = "OPTRE_HUD_PIP_NVGTI = lbCurSel (_this select 0); if OPTRE_Hud_On then {303 cutRsc [OPTRE_Hud_LHDCurrent,""PLAIN"",-1, false];}; ";
			OnLoad = "{ (_this select 0) lbSetCurSel OPTRE_LHD_PIPSel; (_this select 0) lbAdd (format ['Mode: %1',(_x select 0)]) ;  } forEach [   ['Normal',0],   ['Night Vision',1],   ['Thermal Vision',2]  ];   (_this select 0) lbSetCurSel OPTRE_HUD_PIP_NVGTI;";
		};
		

		//////////////////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////////////////		
		class OPTRE_UNSCMENU_RscStructuredText_1007: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = 1007;
			text = "General Settings:"; //--- ToDo: Localize;
			x = 0.716563 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_UNSCMENU_RscStructuredText_1006: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = 1006;
			text = "Show Compass"; //--- ToDo: Localize;
			x = 0.732031 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_UNSCMENU_RscCheckbox_2803: OPTRE_UNSCMENU_RscCheckbox
		{
			idc = 2803;
			x = 0.716563 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "May lead to a slight performance increase when HUDs are switched on."; //--- ToDo: Localize;
			onCheckedChanged = "if OPTRE_HUD_CompassWanted then {OPTRE_HUD_CompassWanted = false;} else {OPTRE_HUD_CompassWanted = true;};  0 = [] execVM 'OPTRE_FunctionsLibrary\Scripts\UpdateMenusIf.sqf';";
			OnLoad = "(_this select 0) cbSetChecked OPTRE_HUD_CompassWanted;";
		};
		//////////////////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////////////////
		
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////////////////
		class podList: OPTRE_UNSCMENU_RscListbox
		{
			idc = 1500;
			x = 0.17 * safezoneW + safezoneX;
			y = 0.182 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.242 * safezoneH;
			
		};		
		class OPTRE_UNSCMENU_RscButton_1600: OPTRE_UNSCMENU_RscButton
		{
			idc = -1;
			type = 1; 
			text = "Switch Menu"; //--- ToDo: Localize;
			x = 0.17 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "closeDialog 0; _function = getText	(configfile >> ""cfgOptreUNSCmenus"" >> (OPTRE_UNSC_Console_MenusAllowed select (lbCurSel 1500)) >> ""Function""); 0 = [OPTRE_CurrentConsole,OPTRE_CurrentConsoleString] spawn (missionNamespace getVariable _function);";
		};
		//////////////////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////////////////


		//////////////////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////////////////		
		class LHD_Mode_Text: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = -1;
			text = "HUDs LHD Mode:"; //--- ToDo: Localize;
			x = 0.175156 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class LHD_Mode_ModeOptions: OPTRE_UNSCMENU_RscListbox
		{
			idc = 1501;
			x = 0.175156 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.231 * safezoneH;
			onLBSelChanged = "OPTRE_LHD_Function = (lbCurSel (_this select 0)); 0 = [] execVM 'OPTRE_FunctionsLibrary\Scripts\UpdateMenusIf.sqf';";
			OnLoad = " {_index = (_this select 0) lbAdd (format ['%1',(_x select 0)]) ;  } forEach [   ['Off',0],   ['Friend or Foe Radar',1],   ['Squad Shoulder Cameras',2],   ['Navigation Assistant Map',3]  ];   (_this select 0) lbSetCurSel OPTRE_LHD_Function;";
		};	
		//////////////////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////////////////

		class OPTRE_UNSCMENU_RscText_1: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = 1;
			//text = ""; //--- ToDo: Localize;
			onLoad = "(_this select 0) ctrlSetStructuredText parseText (""<img image='\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa'/> ""+""Logged In: ""+(name player));";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.192 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.022 * safezoneH;
			class Attributes
			{
				align = "left";
			};
		};
		class OPTRE_UNSCMENU_RscText_2: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = 2;
			//text = ""; //--- ToDo: Localize;
			onLoad = "(_this select 0) ctrlSetText (format [""%1"",OPTRE_CurrentConsoleString]); ";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.192 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.022 * safezoneH;
			class Attributes
			{
				align = "right";
			};
		};

		/*class OPTRE_UNSCMENU_RscButton_1601: OPTRE_UNSCMENU_RscButton
		{
			idc = 1601;
			text = "Configure ODST Compass"; //--- ToDo: Localize;
			x = 0.711406 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.055 * safezoneH;
			onButtonClick = "";
		};*/
		class OPTRE_UNSCMENU_RscButton_1602: OPTRE_UNSCMENU_RscButton
		{
			idc = 1602;
			text = "Update Current HUD"; //--- ToDo: Localize;
			x = 0.711406 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.055 * safezoneH;
			onButtonClick = " 0 = [] execVM 'OPTRE_FunctionsLibrary\Scripts\UpdateMenusIf.sqf';";
		};

		// Menu System
		class MenuList: OPTRE_UNSCMENU_RscListbox
		{
			idc = 15;
			x = 0.17 * safezoneW + safezoneX;
			y = 0.182 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.242 * safezoneH;
			OnLoad = "{_menuName = getText (configfile >> 'cfgOptreUNSCmenus' >> _x >> 'MenuName');_function = getText (configfile >> 'cfgOptreUNSCmenus' >> _x >> 'Function');_securityValue = getNumber (configfile >> 'cfgOptreUNSCmenus' >> _x >> 'Security');_i = (_this select 0) lbAdd _menuName;(_this select 0) lbSetData [_i, _function];(_this select 0) lbSetValue [_i, _securityValue];(_this select 0) lbSetPicture [_i,(getText (configfile >> 'cfgOptreUNSCmenus' >> _x >> 'icon'))];if (_x == 'UNSC_HUD_Settings') then {(_this select 0) lbSetCurSel _i;};} forEach OPTRE_UNSC_Console_MenusAllowed;";
		};		
		class MenuListSwitch: OPTRE_UNSCMENU_RscButton
		{
			idc = -1;
			type = 1; 
			text = "Switch Menu"; //--- ToDo: Localize;
			x = 0.17 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "closeDialog 0; _function = getText	(configfile >> ""cfgOptreUNSCmenus"" >> (OPTRE_UNSC_Console_MenusAllowed select (lbCurSel 15)) >> ""Function""); if (_function != """") then {0 = [OPTRE_CurrentConsole,OPTRE_CurrentConsoleString] spawn (missionNamespace getVariable _function);} else {createDialog (getText	(configfile >> ""cfgOptreUNSCmenus"" >> (OPTRE_UNSC_Console_MenusAllowed select (lbCurSel 15)) >> ""Dialog""));};";
		};
		
	};			
};