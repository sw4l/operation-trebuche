_pod = _this select 0;
_unit = _this select 1;
_chute = _this select 2;
_impact = _this select 3;
_fire = _this select 4;

resetCamShake;
detach _impact;
detach _chute;
detach _fire;
deletevehicle _chute;
deletevehicle _fire;

_pos = getposATL _pod;
_dir = getdir _pod;
if (_height < 3) then
{
	_crater = createVehicle ["CraterLong_Small", [_pos select 0,_pos select 1,-0.35], [], 0, ""];
	_crater attachto [_pod,[0,0,-1.5]];
	_crater setdir _dir;
	_crater setVectorUp surfaceNormal position _crater;
	detach _crater;
	_pod attachto _crater;
	_pod setVectorUp [0,0,1];
} else {	
	_attach = createVehicle ["Sign_Sphere10cm_F", [_pos select 0,_pos select 1,_pos select 2], [], 0, ""];
	_attach hideObjectGlobal true;
	_attach attachto [_pod,[0,0,0]];
	detach _attach;
	_attach setdir _dir;
	_pod attachto [_attach,[0,0,0]];
	_pod setdir 0;
	_pod setVectorUp [0,0,1];
};
if (_fire != objNull) then {detach _fire; deletevehicle _fire;};
_light setLightAmbient[0,1,0];
_light setLightColor[0,1,0];

sleep 1;

//_unit addaction [("<t color=""#DF0101"">" + ("/// EMERGENCY DOOR EJECT ///") +"</t>"),"\tei_vehicles\hev\scripts\ODST_POD_Door.sqf", "", 7, true, true, "", "_this == driver _target"];

_pod setvehiclelock "UNLOCKED";
_pod allowdamage true;
waitUntil {vehicle _unit == _unit};
sleep 1;
_unit allowdamage true;