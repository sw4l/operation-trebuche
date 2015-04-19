

_elev = elev;
_vehicle = "TEI_Pelican_unarmed_black"  createVehicle getPos _elev; _vehicle setPos [getPos _vehicle select 0, getPos _vehicle select 1, 0];
_vehicle enablesimulation false;
_vehicle allowdamage false;
_vehicle attachTo [elev, [0, .5, -22.8] ];

// everything bellow is the original elevator script

_object = _this select 0;
	_obx = (getposasl _object select 0);
	_oby = (getposasl _object select 1);
_caller = _this select 1;
_id = _this select 2;
_elev = _this select 3;

if (isServer) then 
{
	_object removeaction _id;
	_height = (getposASL _elev select 2);
	while {_height > 21} ///define elevation where it stops
 	do {
	 _elev setposASL [getposasl _elev select 0, getposASL _elev select 1, ((getposasl _elev select 2) -.1)]; /// last number determines speed
//	 _object setposASL [_obx, _oby, ((getposasl _object select 2) -.1)]; /// last number determines speed
	 _height = (getposASL _elev select 2);
	 sleep 0.01;
	};
	_vehicle enablesimulation true;
	detach _vehicle;
	sleep 5;
	_vehicle allowdamage true;
};	
