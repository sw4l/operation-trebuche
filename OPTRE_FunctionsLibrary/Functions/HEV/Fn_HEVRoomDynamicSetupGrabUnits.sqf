_array = _this select 0;
_console = _this select 1; 
	
if ((_console getVariable ["OPTRE_PodsLaunchIn",-1]) == -2) exitWith {playSound3d ["a3\missions_f_beta\data\sounds\firing_drills\checkpoint_not_clear.wss", _console,false, getPos _console, 0.5, 1, 300];}; // Cool Down in Progress. 
if ((_console getVariable ["OPTRE_PodsLaunchIn",-1]) >  -1) exitWith {playSound3d ["a3\missions_f_beta\data\sounds\firing_drills\checkpoint_not_clear.wss", _console,false, getPos _console, 0.5, 1, 300];}; // Count down in progress. 

_console setVariable ["OPTRE_PodsLaunchIn",30,true];
	
While {(_console getVariable ["OPTRE_PodsLaunchIn",-1]) > 0} do {
	_number = _console getVariable ["OPTRE_PodsLaunchIn",-1];
	_console setVariable ["OPTRE_PodsLaunchIn",(_number-1),true];
	playSound3d ["a3\missions_f_beta\data\sounds\firing_drills\timer.wss", _console,false, getPos _console, 0.5, 1, 300];
	sleep 1; 
};

if ((_console getVariable ["OPTRE_PodsLaunchIn",-1]) == -1) exitWith {playSound3d ["a3\missions_f_beta\data\sounds\firing_drills\drill_finish.wss", _console, false, getPos _console, 0.5, 1, 300];};
	
if ((_console getVariable ["OPTRE_PodsLaunchIn",-1]) == 0) then {
	
	
	{			
		//_x lock true;
		[_x,true] remoteExec ["lock", _X, false];
		_x animate ["main_door_rotation",0]; 
		_x animate ["left_door_rotation",0]; 
		_x animate ["right_door_rotation",0];
	} forEach (_console getVariable ["OPTRE_PodsLinkedToConsole",[]]);
		
	sleep 4;
		
	_units = [];

	{
		_driver = driver _x;
		if !(isNull _driver AND !alive _driver) then {
			_units pushBack _driver; 
			[0,["OPTRE_LoadScreen", "PLAIN"]] remoteExec ["cutRsc", _driver, false];
		};
	} forEach (_console getVariable ["OPTRE_PodsLinkedToConsole",[]]);

	sleep 2; 
		
	{
		[_x,[10,10,10000]] remoteExec ["setPos", _x, false];
	} forEach _units;
		
	sleep .5;
		
	if (count _units > 0) then {
		_array set [1, _units];
		_array spawn OPTRE_Fnc_HEV;
		_console setVariable ["OPTRE_PodsLaunchIn",-2,true];
		sleep 90;
	};
		
	playSound3d ["a3\missions_f_beta\data\sounds\firing_drills\drill_finish.wss", _console,false, getPos _console, 0.5, 1, 300];
		
	{			
			//_x lock false;
		[_x,false] remoteExec ["lock", _X, false];
		_x animate ["main_door_rotation",1]; 
		_x animate ["left_door_rotation",1]; 
		_x animate ["right_door_rotation",1];
	} forEach (_console getVariable ["OPTRE_PodsLinkedToConsole",[]]);
	_console setVariable ["OPTRE_PodsLaunchIn",-1,true];
		
};
