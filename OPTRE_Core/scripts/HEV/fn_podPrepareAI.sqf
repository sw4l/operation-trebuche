_unit = _this select 0;
hint "Friendly ODST Inbound";
_AIpod = "OPTRE_HEV" createVehicle [0,0,10000];
_AIpod setPos [getmarkerPos "AIDrop" select 0, getmarkerPos "AIDrop" select 1, 500];
_AIpod setdir (random 360);

_classArray = ["OPTRE_UNSC_ODST_Soldier_Rifleman_AR","OPTRE_UNSC_ODST_Soldier_Rifleman_BR","OPTRE_UNSC_ODST_Soldier_Automatic_Rifleman","OPTRE_UNSC_ODST_Soldier_Scout_Sniper","OPTRE_UNSC_ODST_Soldier_Rifleman_AT","OPTRE_UNSC_ODST_Soldier_Scout"];
_classNum = round (random(5));
_class = (_roleArray select _roleNum);
	
_AI = (group _unit) createUnit [_class, [0,0,10000], [], 20, "FORM"];
_AI moveindriver _AIpod;
[_AIPod, _AI] spawn OPTRE_HEV_fnc_podLaunchAI;
deletemarker "AIDrop";