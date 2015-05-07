_unit = _this select 0;
_pod = _this select 1;
_pod setobjecttextureglobal [0,""];
_pod setobjecttextureglobal [1,""];
_pod setobjecttextureglobal [2,""];
_pod setobjecttextureglobal [3,""];
_door = createVehicle ["OPTRE_Sounds_HEV_Door", [0,0,10000], [], 0, ""];
_door attachto [_pod,[0,3,0.5]];
detach _door;
_dir = getdir _pod;
_door setdir (_dir - 180);
[_pod, "OPTRE_Sounds_HEV_Pop",200] call CBA_fnc_globalSay3d;
_vel = velocity _door;
_dir = direction _door;
_speed = 20;
_door setVelocity [
	(_vel select 0) - (sin _dir * _speed), 
	(_vel select 1) - (cos _dir * _speed), 
	(_vel select 2)
];
_unit disableCollisionWith _door;