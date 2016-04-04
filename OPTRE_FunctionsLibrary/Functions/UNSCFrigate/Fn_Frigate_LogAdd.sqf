//0 = [part_1, (format ["%1 %2 %3",([daytime] call BIS_fnc_timeToString), name player, "Moved Hanger Service Lift Up"])] call OPTRE_fnc_Frigate_LogAdd;
// [[part_1, (format ["%1 %2 %3",([daytime] call BIS_fnc_timeToString), name player, "Moved Hanger Service Lift Up"])],"OPTRE_fnc_Frigate_LogAdd",false,false,true] call BIS_fnc_MP;

_frigate = _this select 0;

_date = date; 
_day = _date select 2; 
_mounth = _date select 1; 
		
_frigate setVariable ["OPTRE_Frigate_ComputerEventLog",(
		(format ['%1/%2/%3', (if (_day < 10) then {('0' + str _day)} else {_day}), (if (_mounth < 10) then {('0' + str _mounth)} else {_mounth}), _date select 0]) + " " + 
		([daytime] call BIS_fnc_timeToString) + " " +
		(_this select 1) + 
		"<br/>" + 
		(_frigate getVariable "OPTRE_Frigate_ComputerEventLog")
	)
,true];