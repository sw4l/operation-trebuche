_pod = _this select 0;
_unit = _this select 1;
_chutedeployed = false;

_pod enablesimulation false;
sleep 1;
_pod enablesimulation true;

_unit allowdamage false;
_pod allowdamage false;

_vel = velocity _pod;
_pod setVelocity [
	(_vel select 0),
	(_vel select 1),
	(_vel select 2) - 30
];

_pod setvehiclelock "LOCKED";
_pos = getposATL _pod;
_waterpos = getposASL _pod;
_height = _pos select 2;
_waterheight = _waterpos select 2;

_fire = createVehicle ["IncinerateShell", [0,0,10000], [], 15, "NONE"];
_fire attachTo [_pod,[0,0,0]];
_light = "#lightpoint" createVehicle [0,0,10000];
_light lightAttachObject [_pod, [0,0.75,0]];
_light setLightBrightness 50;
_light setLightAmbient[1,0,0];
_light setLightColor[1,0,0];
_light setLightDaylight false;
_light setLightUseFlare false;
_light setLightIntensity 50;

_chute = createVehicle ["TEI_HEV_Chute", [0,0,10000], [], 0, ""];

_impact = createVehicle ["G_40mm_HE", [0,0,10000], [], 0, ""];
_impact attachto [_pod,[0,0,0]];

_ODST_POD_DrawUp = createVehicle ["Sign_Sphere10cm_F", [_pos select 0,_pos select 1,0], [], 0, ""];
_ODST_POD_DrawDown = createVehicle ["Sign_Sphere10cm_F", [_pos select 0,_pos select 1,10000], [], 0, ""];
_ODST_POD_DrawUp hideObjectGlobal true;
_ODST_POD_DrawDown hideObjectGlobal true;
_ODST_POD_DrawUp attachto [_pod,[0,0,2]];

_collision = lineIntersects [getposATL _ODST_POD_DrawUp, getposATL _ODST_POD_DrawDown, _ODST_POD_DrawUp, _ODST_POD_DrawDown];
_landed = false;

while {!(_landed)} do
{
	_pos = getposATL _pod;
	_waterpos = getposASL _pod;
	_height = round (_pos select 2);
	_waterheight = round (_waterpos select 2);
	_collision = lineIntersects [getposATL _ODST_POD_DrawUp, getposATL _ODST_POD_DrawDown, _ODST_POD_DrawUp, _ODST_POD_DrawDown];
	
	[_pod, "ODST_POD_Wind1",50] call CBA_fnc_globalSay3d;
	[_pod, "ODST_POD_Wind2",50] call CBA_fnc_globalSay3d;
	
	if ((_height < 125) && (_height > 75) && !(_chutedeployed)) then
	{
		[_pod, "ODST_POD_Chute",100] call CBA_fnc_globalSay3d;
		
		_chute attachto [_pod,[0,0,0.6],"chute_attach"];
		_chutedeployed = true;
		
		detach _fire;
		deletevehicle _fire;
		
		_vel = velocity _pod;
		_pod setVelocity [
		(_vel select 0),
		(_vel select 1),
		(_vel select 2) + 40
		];
	};
	
	if ((_height < 3) || (_collision) || (_waterheight < 3)) then
	{
		_landed = true;
	};
};

detach _impact;
detach _chute;
deletevehicle _chute;

_pos = getposATL _pod;
_dir = getdir _pod;
if (_height < 3) then
{
	_crater = createVehicle ["CraterLong_Small", [_pos select 0,_pos select 1,-0.35], [], 0, ""];
	_crater setdir _dir;
	_crater setVectorUp surfaceNormal position _crater;
	_pod attachto [_crater,[0,0.75,1.5]];
	_pod setVectorUp [0,0,0.1];
	_unit disableCollisionWith _crater;
} else {	
	_attach = createVehicle ["Sign_Sphere10cm_F", [_pos select 0,_pos select 1,_pos select 2], [], 0, ""];
	_attach hideObjectGlobal true;
	_attach attachto [_pod,[0,0,0]];
	detach _attach;
	_attach setdir _dir;
	_pod attachto [_attach,[0,0,0]];
	_pod setdir 0;
	_pod setVectorUp [0,0,0.1];
};
if (_fire != objNull) then {detach _fire; deletevehicle _fire;};
_light setLightAmbient[0,1,0];
_light setLightColor[0,1,0];

sleep 2;

_pod setObjectTextureGlobal [1, ""];

_door = createVehicle ["TEI_HEV_Door", [0,0,10000], [], 0, ""];
_door attachto [_pod,[0,3,0.5]];
detach _door;
_door setdir (_dir - 180);
[_pod, "ODST_POD_Pop",200] call CBA_fnc_globalSay3d;
_vel = velocity _door;
_dir = direction _door;
_speed = 20;
_door setVelocity [
	(_vel select 0) - (sin _dir * _speed), 
	(_vel select 1) - (cos _dir * _speed), 
	(_vel select 2)
];
_unit disableCollisionWith _door;

sleep 1;

_pod setvehiclelock "UNLOCKED";
_pod allowdamage true;
_unit allowdamage true;
moveOut _unit;
sleep 1;
_pod setvehiclelock "LOCKED";