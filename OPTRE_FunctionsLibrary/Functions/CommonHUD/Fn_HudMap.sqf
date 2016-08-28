/* disableSerialization;    

if (isNil "OPTRE_Hud_MapScale") then {
	OPTRE_Hud_MapScale = 0.02
};    

( _this select 0 ) ctrlAddEventHandler ["Draw", "
     _ctrl = _this select 0;    
	 _pos = getPos player;       
	 _ctrl ctrlMapAnimAdd [0, OPTRE_Hud_MapScale, _pos ];   
	 ctrlMapAnimCommit _ctrl;      
"];    

true */

disableSerialization;    

if (isNil "OPTRE_Hud_MapScale") then {
	OPTRE_Hud_MapScale = (2 * ([] call OPTRE_Fnc_MapScale));
};    

	( _this select 0 ) ctrlAddEventHandler ["Draw", "
	
		 _ctrl = _this select 0;    
		 _pos = getPos player;    
		 
		_ctrl ctrlMapAnimAdd [0, OPTRE_Hud_MapScale, _pos ];   
		 ctrlMapAnimCommit _ctrl; 
		 
		 if (count OPTRE_HUD_PersonalWaypoints > 0) then {
			_lastWaypoint = (OPTRE_HUD_PersonalWaypoints select 0);
			_ctrl drawArrow [_pos, _lastWaypoint, [0,0,0,0] ];
			{
				_ctrl drawArrow [_lastWaypoint, _x, [0,0,0,1] ]; 
				_lastWaypoint = _x;
			} forEach OPTRE_HUD_PersonalWaypoints;
		 };
		 
		if OPTRE_HUD_CurrentObjective_Wanted then {
			_nameObj = ([player] call BIS_fnc_taskCurrent);
			if (_nameObj != '') then {
				_curObj = (_nameObj call BIS_fnc_taskDestination);		
				_ctrl drawArrow [ (getPos player), _curObj, [1,1,0,1] ];
			};
		};
		 
		if ( (str OPTRE_HUD_PersonalBecon) != '[0,0,0]' AND OPTRE_HUD_PersonalBecons_Wanted ) then {
			_ctrl drawArrow [_pos, OPTRE_HUD_PersonalBecon, [1,0,0,1] ];
		};	

		if OPTRE_HUD_GroupWaypointsWanted then {
			_noWaypoint = count (waypoints player); 
			_grpPlayer = group player; 
			_lastWaypoint = waypointPosition [_grpPlayer, 0];;
			if (_noWaypoint > 1) then {
				for '_i' from 1 to (_noWaypoint - 1) do {	
					_wp = waypointPosition [_grpPlayer, _i];
					_ctrl drawArrow [_lastWaypoint, _wp, [0,0,1,1] ]; 
					_lastWaypoint = _wp;			
				};		
			};	
		};
		 
	"];

true;