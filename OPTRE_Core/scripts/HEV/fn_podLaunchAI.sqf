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

_chute = createVehicle ["OPTRE_HEV_Chute", [0,0,10000], [], 0, ""];

_impact = createVehicle ["G_40mm_HE", [0,0,10000], [], 0, ""];
_impact attachto [_pod,[0,0,0]];

_ODST_POD_DrawUp = createVehicle ["Sign_Sphere10cm_F", [_pos select 0,_pos select 1,0], [], 0, ""];
_ODST_POD_DrawDown = createVehicle ["Sign_Sphere10cm_F", [_pos select 0,_pos select 1,0], [], 0, ""];
_ODST_POD_DrawUp hideObjectGlobal true;
_ODST_POD_DrawDown hideObjectGlobal true;
_ODST_POD_DrawUp attachto [_pod,[0,0,2]];
_landed = false;

while {!(_landed)} do
{
	_pos = getposATL _pod;
	_waterpos = getposASL _pod;
	_height = round (_pos select 2);
	_waterheight = round (_waterpos select 2);
	_collision = lineIntersects [getposATL _ODST_POD_DrawUp, getposATL _ODST_POD_DrawDown, _ODST_POD_DrawUp, _ODST_POD_DrawDown];
	
	if ((_height < 125) && (_height > 75) && !(_chutedeployed)) then
	{
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
	
	if ((_height < 2) || (_collision) || (_waterheight < 2)) then
	{
		_landed = true;
	};
};

[_pod, _unit, _chute, _impact, _fire, _height, _light] spawn OPTRE_HEV_fnc_podLandAI;