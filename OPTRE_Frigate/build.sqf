if (isServer) then {
	_spawn = _this select 0;
	_dir = getdir _spawn;
	_spawnpoint = [getposASL _spawn select 0, getposASL _spawn select 1, getposASL _spawn select 2];
	deletevehicle _spawn;
	_parts = 
	[
		"OPTRE_Frigate_part_1",
		"OPTRE_Frigate_part_2_a",
		"OPTRE_Frigate_part_2_b",
		"OPTRE_Frigate_part_2_c",
		"OPTRE_Frigate_part_3_a",
		"OPTRE_Frigate_part_3_B",
		"OPTRE_Frigate_part_3_C",
		"OPTRE_Frigate_part_4_a",
		"OPTRE_Frigate_part_4_B",
		"OPTRE_Frigate_part_4_C",
		"OPTRE_Frigate_part_5_a",
		"OPTRE_Frigate_part_5_B",
		"OPTRE_Frigate_part_5_C",
		"OPTRE_Frigate_part_6_a",
		"OPTRE_Frigate_part_6_B",
		"OPTRE_Frigate_part_6_C",
		"OPTRE_Frigate_part_7_a",
		"OPTRE_Frigate_part_7_B1",
		"OPTRE_Frigate_part_7_B2",
		"OPTRE_Frigate_part_7_C",
		"OPTRE_Frigate_part_8_a",
		"OPTRE_Frigate_part_8_B",
		"OPTRE_Frigate_part_8_C",
		"OPTRE_Frigate_vehicle_lift",
		"OPTRE_Frigate_hangar_ground_doors",
		"OPTRE_Frigate_hangar_A",
		"OPTRE_Frigate_hangar_B1",
		"OPTRE_Frigate_hangar_B2",
		"OPTRE_Frigate_hangar_C",
		"OPTRE_Frigate_hangar_D",
		"OPTRE_Frigate_hangar_D2",
		"OPTRE_Frigate_hangar_door",
		"OPTRE_Frigate_hangar_lift_door",
		"OPTRE_Frigate_vehicle_lift2",
		"OPTRE_Frigate_lift_gate",
		"OPTRE_Frigate_cargo_door",
		"OPTRE_Frigate_interiorbuild",
		"OPTRE_Frigate_doorbuild"
	];
	{
		_dummy = _x createvehicle _spawnpoint;
		_dummy setdir _dir;
		_dummy setpos _spawnpoint;
	} foreach _parts;
};