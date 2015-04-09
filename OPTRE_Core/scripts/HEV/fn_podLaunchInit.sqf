_pod = _this;
_unit = driver _this;
_pod enablesimulation false;
_unit allowdamage false;
_pod allowdamage false;
_chutedeployed = false;

waitUntil {player == player};

_vel = velocity _pod;
_pod setVelocity [
	(_vel select 0),
	(_vel select 1),
	(_vel select 2) - 40
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

_chute = createVehicle ["OPTRE_HEV_Chute", [0,0,10000], [], 0, ""];

_impact = createVehicle ["G_40mm_HE", [0,0,10000], [], 0, ""];
_impact attachto [_pod,[0,0,0]];

_landed = false;

while {!(_landed)} do
{
	_pos = getposATL _pod;
	_waterpos = getposASL _pod;
	_vel = velocity _pod;
	_height = round (_pos select 2);
	_waterheight = round (_waterpos select 2);
	_downvel = round (_vel select 2);
	hintSilent format["ALTITUDE (ATL) = %1\nALTITUDE(ASL) = %2\nVELOCITY = %3", _height, _waterheight, _downvel];
	
	[_pod, "OPTRE_Sounds_HEV_Wind1", 50] call CBA_fnc_globalSay3d;
	[_pod, "OPTRE_Sounds_HEV_Wind2", 50] call CBA_fnc_globalSay3d;
	
	if ((_height < 125) && (_height > 75) && !(_chutedeployed)) then
	{
		[_pod, "OPTRE_HEV_Chute",100] call CBA_fnc_globalSay3d;
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
	
	if (((_vel select 2) > -5) && (_height < 100)) then
	{
		_landed = true;
	};
};

[_pod, _unit, _chute, _impact, _fire, _height, _light] spawn OPTRE_HEV_fnc_podLand;