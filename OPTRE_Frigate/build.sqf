if (isServer) then {
	_spawn = _this select 0;
	_dir = getdir _spawn;
	_spawnpoint = [getposASL _spawn select 0, getposASL _spawn select 1, getposASL _spawn select 2];
	deletevehicle _spawn;
	_parts = 
	[
		"OPTRE_Frigate_Experimental",
		"OPTRE_Frigate_1",
		"OPTRE_Frigate_2",
		"OPTRE_Frigate_3",
		"OPTRE_Frigate_4",
		"OPTRE_Frigate_5",
		"OPTRE_Frigate_6",
		"OPTRE_Frigate_7",
		"OPTRE_Frigate_8",
		"OPTRE_Frigate_9"
	];
	{
		_dummy = _x createvehicle _spawnpoint;
		_dummy setdir _dir;
		_dummy setpos _spawnpoint;
	} foreach _parts;
};