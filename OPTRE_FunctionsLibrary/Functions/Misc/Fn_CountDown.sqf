if isDedicated exitWith {};

_timeTotal = [_this,0,5] call BIS_fnc_param;
_text = [_this,1,"Launch In"] call BIS_fnc_param;

/*for "_i" from 0 to _timeTotal do { 
	 playSound "FD_Finish_F"; 
	 sleep 1;  
	 [(format ["<t color='#ff0000' size = '.55'>%2: %1</t>",(_timeTotal - _i),_text]),0,1.35,4,1,0,789] spawn BIS_fnc_dynamicText;
};*/

while {alive player AND _timeTotal > 0} do {
	 playSound "FD_Finish_F"; 
	 sleep 1;  
	 [(format ["<t color='#ff0000' size = '.55'>%2: %1</t>",_timeTotal,_text]),0,1.35,4,1,0,789] spawn BIS_fnc_dynamicText;
	 _timeTotal = _timeTotal - 1; 
}; 

sleep 1; 

playSound "FD_Start_F";
[(format ["<t color='#ff0000' size = '.55'>%2: %1</t>",0,_text]),0,1.35,4,1,0,789] spawn BIS_fnc_dynamicText;