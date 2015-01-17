waitUntil {!isNull player && player == player};

#include "\TEI_UNSC_Units\ODST\userconfig\TEI\ODST.hpp"
if (!TEI_ODST_HUD_Enabled) exitWith {};
_helmet = (headgear player);
TEI_UNSC_ODST_HUD_MainCheck = ["TEI_UNSC_ODST_helmet", _helmet, true] call BIS_fnc_inString;
TEI_UNSC_ODST_HUD_NVOn = 0;
TEI_UNSC_ODST_HUD_VisorSwitch_Action = player addaction [("<t color=""#81BEF7"">" + ("Switch Helmet Visor") +"</t>"),"TEI_UNSC_Units\ODST\scripts\ODST_HUD_VisorSwitch.sqf", "", 1, false, false, "", "(_target == _this) && (UNSC_ODST_HUD_MainCheck)"];
TEI_UNSC_ODST_HUD_VisorNV_Action = player addaction [("<t color=""#81BEF7"">" + ("Switch Lowlight Vision") +"</t>"),"TEI_UNSC_Units\ODST\scripts\ODST_HUD_VisorNV.sqf", "", 1, false, false, "", "(_target == _this) && (UNSC_ODST_HUD_MainCheck)"];

sleep 0.5;

while {player == player} do {
	_helmet = (headgear player);
	TEI_UNSC_ODST_HUD_MainCheck = ["TEI_UNSC_ODST_helmet", _helmet, true] call BIS_fnc_inString;
	TEI_UNSC_ODST_HUD_DepCheck = ["_dp", _helmet, true] call BIS_fnc_inString;
	if ((TEI_UNSC_ODST_HUD_MainCheck) && (!TEI_UNSC_ODST_HUD_DepCheck)) then {TEI_UNSC_ODST_HUD_Type = 1};
	if ((TEI_UNSC_ODST_HUD_MainCheck) && (TEI_UNSC_ODST_HUD_DepCheck)) then {TEI_UNSC_ODST_HUD_Type = 2};
	if ((!TEI_UNSC_ODST_HUD_MainCheck) && (!TEI_UNSC_ODST_HUD_DepCheck)) then {TEI_UNSC_ODST_HUD_Type = 0};
	if ((TEI_UNSC_ODST_HUD_Type == 1) && !(cameraView == "EXTERNAL")) then {
		105 cutRsc ["TEI_UNSC_ODST_HUD", "PLAIN", 0, true];
	} else {
		105 cutText ["", "PLAIN"];
	};
};