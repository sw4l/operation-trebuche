/*
	OPTRE_Fnc_ModuleCAS
	
	Author: BIS + Modified by Big_Wilk for OPTRE. 

	Description: WIP, will change. 

*/

private ["_isPelican"];

_logic = _this select 0;
_units = _this select 1;
_activated = _this select 2;
/*_logic = player;
_units = [player];
_activated = true;*/

if (isnull _logic) exitwith {};

if (!isserver && {local _x} count (objectcurators _logic) == 0) exitwith {};

if (_logic call bis_fnc_isCuratorEditable) then {
	waituntil {!isnil {_logic getvariable "vehicle"} || isnull _logic};
};

if ({local _x} count (objectcurators _logic) > 0) then {

_logic hideobject false;
_logic setpos position _logic;
};
if !(isserver) exitwith {};
if !(alive _logic) exitWith {};

_planeClass = _logic getvariable ["vehicle","OPTRE_Pelican_armed_black"];
_planeCfg = configfile >> "cfgvehicles" >> _planeClass;
if !(isclass _planeCfg) exitwith {["Vehicle class '%1' not found",_planeClass] call bis_fnc_error; false};

_fnc_scriptName = 'BIS_fnc_moduleCAS';
_dirVar = _fnc_scriptname + typeof _logic;
_logic setdir (missionnamespace getvariable [_dirVar,direction _logic]);

//_weaponTypesID = _logic getvariable ["type",getnumber (configfile >> "cfgvehicles" >> typeof _logic >> "moduleCAStype")];
_weaponTypes = switch 2 do {
	case 0: {["machinegun"]};
	case 1: {["missilelauncher"]};
	case 2: {["machinegun","missilelauncher"]};
	default {[]};
};
_weapons = [];
{
	if (tolower ((_x call bis_fnc_itemType) select 1) in _weaponTypes) then {
		_modes = getarray (configfile >> "cfgweapons" >> _x >> "modes");
		if (count _modes > 0) then {
			_mode = _modes select 0;
			if (_mode == "this") then {_mode = _x;};
			_weapons set [count _weapons,[_x,_mode]];
		};
	};
} foreach getarray (_planeCfg >> "weapons");

_isPelican = ["Pelican_armed",_planeClass,false] call BIS_fnc_inString;
if (count _weapons == 0 AND !_isPelican) exitwith {["No weapon of type 'MachineGun' wound on '%1'",_planeClass] call bis_fnc_error; false};

_posATL = getposatl _logic;
_pos = +_posATL;
_pos set [2,(_pos select 2) + getterrainheightasl _pos];
_dir = direction _logic;

_dis = 3000;
_alt = 1000;
_pitch = atan (_alt / _dis);
_speed = 400 / 3.6;
_duration = ([0,0] distance [_dis,_alt]) / _speed;

_planePos = [_pos,_dis,_dir + 180] call bis_fnc_relpos;
_planePos set [2,(_pos select 2) + _alt];
_planeSide = (getnumber (_planeCfg >> "side")) call bis_fnc_sideType;
_planeArray = [_planePos,_dir,_planeClass,_planeSide] call bis_fnc_spawnVehicle;
_plane = _planeArray select 0;
_plane setposasl _planePos;
_plane move ([_pos,_dis,_dir] call bis_fnc_relpos);
_plane disableai "move";
_plane disableai "target";
_plane disableai "autotarget";
_plane setcombatmode "blue";

_vectorDir = [_planePos,_pos] call bis_fnc_vectorFromXtoY;
_velocity = [_vectorDir,_speed] call bis_fnc_vectorMultiply;
_plane setvectordir _vectorDir;
[_plane,-90 + atan (_dis / _alt),0] call bis_fnc_setpitchbank;
_vectorUp = vectorup _plane;

_currentWeapons = weapons _plane;
{
	if !(tolower ((_x call bis_fnc_itemType) select 1) in (_weaponTypes + ["countermeasureslauncher"])) then {
		_plane removeweapon _x;
	};
} foreach _currentWeapons;

_ehFired = _plane addeventhandler [
	"fired",
	{
		_this spawn {
			_plane = _this select 0;
			_plane removeeventhandler ["fired",_plane getvariable ["ehFired",-1]];
			_projectile = _this select 6;
			waituntil {isnull _projectile};
			[[0.005,4,[_plane getvariable ["logic",objnull],200]],"bis_fnc_shakeCuratorCamera"] call bis_fnc_mp;
		};
	}
];
_plane setvariable ["ehFired",_ehFired];
_plane setvariable ["logic",_logic];

[[["Curator","PlaceOrdnance"],nil,nil,nil,nil,nil,nil,true],"bis_fnc_advHint",objectcurators _logic] call bis_fnc_mp;

[_plane,"CuratorModuleCAS"] call bis_fnc_curatorSayMessage;

if (false) then {
	BIS_draw3d = [];

	_m = createmarker [str _logic,_pos];
	_m setmarkertype "mil_dot";
	_m setmarkersize [1,1];
	_m setmarkercolor "colorgreen";
	_plane addeventhandler [
		"fired",
		{
			_projectile = _this select 6;
			[_projectile,position _projectile] spawn {
			_projectile = _this select 0;
			_posStart = _this select 1;
			_posEnd = _posStart;
			_m = str _projectile;
			_mColor = "colorred";
			_color = [1,0,0,1];
			if (speed _projectile < 1000) then {
			_mColor = "colorblue";
			_color = [0,0,1,1];
			};
			while {!isnull _projectile} do {
				_posEnd = position _projectile;
				sleep 0.01;
			};
			createmarker [_m,_posEnd];
			_m setmarkertype "mil_dot";
			_m setmarkersize [1,1];
			_m setmarkercolor _mColor;
			BIS_draw3d set [count BIS_draw3d,[_posStart,_posEnd,_color]];
			};
		}
	];
	if (isnil "BIS_draw3Dhandler") then {
		BIS_draw3Dhandler = addmissioneventhandler ["draw3d",{{drawline3d _x;} foreach (missionnamespace getvariable ["BIS_draw3d",[]]);}];
	};
};

_fire = [] spawn {waituntil {false}};
_fireNull = true;
_time = time;
_offset = if ({_x == "missilelauncher"} count _weaponTypes > 0) then {20} else {0};

waituntil {
	_fireProgress = _plane getvariable ["fireProgress",0];

	if ((getposatl _logic distance _posATL > 0 || direction _logic != _dir) && _fireProgress == 0) then {
		_posATL = getposatl _logic;
		_pos = +_posATL;
		_pos set [2,(_pos select 2) + getterrainheightasl _pos];
		_dir = direction _logic;
		missionnamespace setvariable [_dirVar,_dir];

		_planePos = [_pos,_dis,_dir + 180] call bis_fnc_relpos;
		_planePos set [2,(_pos select 2) + _alt];
		_vectorDir = [_planePos,_pos] call bis_fnc_vectorFromXtoY;
		_velocity = [_vectorDir,_speed] call bis_fnc_vectorMultiply;
		_plane setvectordir _vectorDir;

		_vectorUp = vectorup _plane;

		_plane move ([_pos,_dis,_dir] call bis_fnc_relpos);
	};

	_plane setVelocityTransformation [
		_planePos, [_pos select 0,_pos select 1,(_pos select 2) + _offset + _fireProgress * 12],
		_velocity, _velocity,
		_vectorDir,_vectorDir,
		_vectorUp, _vectorUp,
		(time - _time) / _duration
	];
	_plane setvelocity velocity _plane;

	if ((getposasl _plane) distance _pos < 1000 && _fireNull) then {
			_fireNull = false;
			terminate _fire;
			_fire = [_plane,_weapons] spawn {
			_plane = _this select 0;
			_planeDriver = driver _plane;
			_weapons = _this select 1;
			_duration = 3;
			_time = time + _duration;
			_isPelican = ["Pelican_armed",(typeOf _plane),false] call BIS_fnc_inString; 
			waituntil { 
					if _isPelican then {
						{_planeDriver forceweaponfire _x;} foreach _weapons;//
						(gunner _plane) fireAtTarget [objNull];
						if _isPelican then { 0 = [_plane] spawn { _plane = (_this select 0); for "_i" from 0 to 9 do { _plane action ["useWeapon", _plane, driver _plane, 2]; sleep 0.05; }; }; };
					} else {
						{_planeDriver forceweaponfire _x;} foreach _weapons;
					};
					_plane setvariable ["fireProgress",(1 - ((_time - time) / _duration)) max 0 min 1];
					sleep 0.1;
					time > _time || isnull _plane
				};
			sleep 1;
			};
		};

		sleep 0.01;
		
		scriptdone _fire || isnull _logic || isnull _plane
		
};

if !(isnull _logic) then {
	sleep 1;
	deletevehicle _logic;
};

_plane setvelocity velocity _plane;
_plane flyinheight (_logic getVariable ["flyOutHeight",40]);

{_plane enableAI _x;} forEach ["move","target","autotarget"];
_group = _planeArray select 2;

_exitPos = [_pos, 15000, _dir] call OPTRE_fnc_MathsTriangulatePos;
_exitWP = _group addWaypoint [_exitPos, 0];
_exitWP setWaypointFormation "LINE";
_exitWP setWaypointTimeout [20, 20, 20];
_exitWP setWaypointType "MOVE";
_exitWP setWaypointBehaviour "CARELESS";
_exitWP setWaypointCombatMode "RED";
_exitWP setWaypointSpeed "FULL";
_exitWP setWaypointStatements ["true", "if isServer then {_veh = vehicle this; {deleteVehicle _x;} forEach [_veh] + thisList;};"];