_unit = _this select 0;
hint "Friendly ODST Inbound";
_AIpod = "OPTRE_HEV" createVehicle [0,0,10000];
_AIpod setPos [getmarkerPos "AIDrop" select 0, getmarkerPos "AIDrop" select 1, 500];
_AIpod setdir (random 360);
_AI = (group _unit) createUnit ["OPTRE_UNSC_ODST_Scout", [0,0,10000], [], 20, "FORM"];
_AI moveindriver _AIpod;
[_AIPod, _AI] spawn OPTRE_HEV_fnc_podLaunchAI;
deletemarker "AIDrop";