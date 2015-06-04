_logic = _this select 0;
_activated = _this select 2;
if (_activated) then {
	_pos = position _logic;
	_dir = _logic getvariable ["dir",random 360];
	sleep 0.1;
	_round = "OPTRE_MAC_Round" createvehicle [100,100,100];
	_round setdir _dir;
	_round setpos [(_pos select 0),(_pos select 1),(_pos select 2)+5000];
	[_round, -90, 0] call BIS_fnc_setPitchBank;
	
	if (count objectcurators _logic > 0) then {
		deletevehicle _logic;
	};
};