_unit = _this select 0;
hint "Friendly ODST Inbound";
_AIpod = "TEI_HEV" createVehicle [0,0,10000];
_AIpod setPos [getmarkerPos "AIDrop" select 0, getmarkerPos "AIDrop" select 1, 500];
_AIpod setdir (random 360);
_AI = (group _unit) createUnit ["TEI_UNSC_ODST_Scout", [0,0,10000], [], 20, "FORM"];
_AI moveindriver _AIpod;
[_AIPod, _AI] spawn xt_TEI_HEV_fnc_podLaunchAI;
deletemarker "AIDrop";