_pod = _this select 0;
_unit = _this select 1;
_action = _this select 2;
_launchloading = 1;
_counter = 1;
_chutedeployed = false;
_pod removeaction _action;

while {_launchloading == 1} do
{
	hint format["HEV Insertion Initiating.\n\nPlease keep hands and feet inside the pod until you have safely reached the surface\n\nUse W/A/S/D to control the course correction boosters\n\nExpect hostile forces to greet you upon arrival\n\nHave a nice day!\n\n%1", _counter];
	sleep 1;
	if (_counter == 0) then
	{
		_launchloading = 0;
		hint "LAUNCHING";
		if (isNull attachedTo _pod) then {
			hintSilent "Oh shit you've already launched! lolwoops";
		} else {
			detach _pod;
			_pod setVectorUp [0,0,0.1];
		}
	} else {
		_counter = _counter - 1;
	};
};

_unit allowdamage false;
_pod allowdamage false;

_vel = velocity _pod;
_pod setVelocity [
	(_vel select 0),
	(_vel select 1),
	(_vel select 2) - 30
];

_pod setvehiclelock "LOCKED";
addCamShake [5, 999999, 20];
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
_ODST_POD_DrawDown = createVehicle ["Sign_Sphere10cm_F", [_pos select 0,_pos select 1,0], [], 0, ""];
_ODST_POD_DrawUp hideObjectGlobal true;
_ODST_POD_DrawDown hideObjectGlobal true;
_ODST_POD_DrawUp attachto [_pod,[0,0,2]];
_landed = false;

/*
[17, [false, false, false], 
{
	_steerpod = vehicle player;
	_steerpos = getposASL _steerpod;
	_steerdir = getdir _steerpod; 
	_steerpod setVelocity [0,0,0];
	_steervel = velocity _steerpod;
	_steerpod setVelocity [
	(_steervel select 0) + (sin _steerdir * 0.5),
	(_steervel select 1) + (cos _steerdir * 0.5),
	(_steervel select 2) - 0.1
	];
}, "keyDown", "ODST_POD_AdjustForwards"] call CBA_fnc_addKeyHandler;

[31, [false, false, false], 
{
	_steerpod = vehicle player;
	_steerpos = getposASL _steerpod;
	_steerdir = getdir _steerpod; 
	_steerpod setVelocity [0,0,0];
	_steervel = velocity _steerpod;
	_steerpod setVelocity [
	(_steervel select 0) - (sin _steerdir * 0.5),
	(_steervel select 1) - (cos _steerdir * 0.5),
	(_steervel select 2) - 0.1
	];
}, "keyDown", "ODST_POD_AdjustBackwards"] call CBA_fnc_addKeyHandler;

[40, [false, false, false], 
{
	_steerpod = vehicle player;
	_steerpos = getposASL _steerpod;
	_steerdir = getdir _steerpod; 
	_steerpod setVelocity [0,0,0];
	_steervel = velocity _steerpod;
	_steerpod setVelocity [
	(_steervel select 0) + (cos _steerdir * 0.5),
	(_steervel select 1) + (sin _steerdir * 0.5),
	(_steervel select 2) - 0.1
	];
}, "keyDown", "ODST_POD_AdjustLeft"] call CBA_fnc_addKeyHandler;

[32, [false, false, false], 
{
	_steerpod = vehicle player;
	_steerpos = getposASL _steerpod;
	_steerdir = getdir _steerpod;
	_steerpod setVelocity [0,0,0];
	_steervel = velocity _steerpod;
	_steerpod setVelocity [
	(_steervel select 0) + (cos _steerdir * 0.5),
	(_steervel select 1) + (sin _steerdir * 0.5),
	(_steervel select 2) - 0.1
	];
}, "keyDown", "ODST_POD_AdjustRight"] call CBA_fnc_addKeyHandler;

[18, [false, false, false], 
{
	_steerpod = vehicle player;
	_steerdir = getdir _steerpod;
	_steerpod setdir (_steerdir + 5);
	_steerpos = getposATL _Steerpod;
	_steerpod setpos [(_steerpos select 0),(_steerpos select 1),(_steerpos select 2)-4];
}, "keyDown", "ODST_POD_TurnRight"] call CBA_fnc_addKeyHandler;

[16, [false, false, false], 
{
	_steerpod = vehicle player;
	_steerdir = getdir _steerpod;
	_steerpod setdir (_steerdir - 5);
	_steervel = velocity _steerpod;
	_steerpos = getposATL _Steerpod;
	_steerpod setpos [(_steerpos select 0),(_steerpos select 1),(_steerpos select 2)-4];
}, "keyDown", "ODST_POD_TurnLeft"] call CBA_fnc_addKeyHandler;
*/

while {!(_landed)} do
{
	_pos = getposATL _pod;
	_waterpos = getposASL _pod;
	_height = round (_pos select 2);
	_waterheight = round (_waterpos select 2);
	_collision = lineIntersects [getposATL _ODST_POD_DrawUp, getposATL _ODST_POD_DrawDown, _ODST_POD_DrawUp, _ODST_POD_DrawDown];
	hintSilent format["ALTITUDE (ATL) = %1\nALTITUDE(ASL) = %2\nMagnetic Locks = %3", _height, _waterheight, _collision];
	
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

resetCamShake;
detach _impact;
detach _chute;
deletevehicle _chute;

_pos = getposATL _pod;
_dir = getdir _pod;
if (_height < 3) then
{
	_crater = createVehicle ["CraterLong_Small", [_pos select 0,_pos select 1,-0.35], [], 0, ""];
	_crater attachto [_pod,[0,0,-1.5]];
	_crater setdir _dir;
	_crater setVectorUp surfaceNormal position _crater;
	detach _crater;
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

sleep 1;

_unit addaction [("<t color=""#DF0101"">" + ("/// EMERGENCY DOOR EJECT ///") +"</t>"),"\tei_vehicles\hev\scripts\ODST_POD_Door.sqf", "", 7, true, true, "", "_this == driver _target"];

_pod setvehiclelock "UNLOCKED";
_pod allowdamage true;
_unit allowdamage true;