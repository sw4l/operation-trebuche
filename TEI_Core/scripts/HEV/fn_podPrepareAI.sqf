_AIpod = "TEI_HEV" createVehicle [0,0,10000];
_AIpod setPos [getmarkerPos "AIDrop" select 0, getmarkerPos "AIDrop" select 1, 500];
_AIpod setdir (random 360);
_AI = (group _unit) createUnit ["TEI_UNSC_ODST_Soldier", [0,0,10000], [], 20, "FORM"];
_AI moveindriver _AIpod;
[_AIPod, _AI] call TEI_HEV_fnc_podLaunchAI;
_unit addaction [("<t color=""#81BEF7"">" + ("Request ODST Support") +"</t>"),TEI_HEV_fnc_podCallAI, "", 7, true, true, "", "_this == _target"];
deletemarker "AIDrop";