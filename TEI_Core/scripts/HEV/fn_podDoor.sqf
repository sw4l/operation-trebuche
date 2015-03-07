_door = createVehicle ["TEI_HEV_Door", [0,0,10000], [], 0, ""];
_door attachto [_pod,[0,3,0.5]];
detach _door;
_door setdir (_dir - 180);
[_pod, "TEI_HEV_Pop",200] call CBA_fnc_globalSay3d;
_vel = velocity _door;
_dir = direction _door;
_speed = 20;
_door setVelocity [
	(_vel select 0) - (sin _dir * _speed), 
	(_vel select 1) - (cos _dir * _speed), 
	(_vel select 2)
];
_unit disableCollisionWith _door;