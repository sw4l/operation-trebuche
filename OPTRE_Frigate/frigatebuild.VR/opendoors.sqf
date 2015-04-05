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
	while {_height > 0} ///define elevation where it stops
 	do {
	 _elev setposASL [getposasl _elev select 0, getposASL _elev select 1, ((getposasl _elev select 2) -.1)]; /// last number determines speed
//	 _object setposASL [_obx, _oby, ((getposasl _object select 2) -.1)]; /// last number determines speed
	 _height = (getposASL _elev select 2);
	 sleep .01;
	};
	act = _object addAction ["Raise Elevator", "elevup.sqf",elev,7,TRUE];
};