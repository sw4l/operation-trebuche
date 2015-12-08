// [[_HEV,_x],"OPTRE_fnc_AssignAsDriverRemotely",_x,false,true] call BIS_fnc_MP; ==
// [[ player, t1],"assignAsDriver",player,false,true] call BIS_fnc_MP; 
// [[ player, t1],"moveInDriver",player,false,true] call BIS_fnc_MP; 

_HEV = _this select 0;
_unit = _this select 1;

_unit assignAsDriver _HEV; 
_unit moveInDriver _HEV;