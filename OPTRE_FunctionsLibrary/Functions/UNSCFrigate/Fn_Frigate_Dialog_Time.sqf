_ctrl = (_this select 0);

While {dialog} do {
	_ctrl ctrlSetText ("Time: " +([daytime] call BIS_fnc_timeToString));
	sleep 1;
};