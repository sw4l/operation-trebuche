_pod = _this select 0;
_unit = _this select 1;
_action = _this select 2;
_launchloading = 1;
_counter = 5;
_chutedeployed = false;
_pod removeaction _action;

OPTRE_HEV_fnc_WindSounds =
{
	[(_this select 0), "OPTRE_Sounds_HEV_Wind1", 50] call CBA_fnc_globalSay3d;
	sleep 0.05;
	[(_this select 0), "OPTRE_Sounds_HEV_Wind2", 50] call CBA_fnc_globalSay3d;
	sleep 0.25;
};

while {_launchloading == 1} do
{
	hint format["HEV Insertion Initiating.\n\nPlease keep hands and feet inside the pod until you have safely reached the surface\n\nExpect hostile forces to greet you upon arrival\n\nHave a nice day!\n\n%1", _counter];
	sleep 1;
	if (_counter == 0) then
	{
		_launchloading = 0;
		hint "LAUNCHING";
		if (isNull attachedTo _pod) then {
			hintSilent "Oh shit you've already launched! lolwoops";
		} else {
			detach _pod;
			_pod setVectorUp [0,0,1];
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
	
	[_pod] spawn OPTRE_HEV_fnc_WindSounds;
	
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