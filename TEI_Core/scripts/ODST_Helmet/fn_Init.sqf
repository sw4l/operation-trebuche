waitUntil {!isNull player && player == player};

#include "\userconfig\TEI\TEI.hpp"
if (!TEI_ODST_Helmet_HUD_Enabled) exitWith {};
if (isServer && isDedicated) exitWith {};
TEI_ODST_Helmet_HUD_NVOn = 0;
TEI_ODST_Helmet_HUD_Type = 0;
call TEI_fnc_ODST_Helmet_getHelmet;
TEI_ODST_Helmet_HUD_VisorToggle_Action = player addaction [("<t color=""#81BEF7"">" + ("Toggle Helmet Visor") +"</t>"), TEI_fnc_ODST_Helmet_VisorToggle, "", 1, false, false, "", "(_target == _this) && (TEI_ODST_Helmet_HUD_MainCheck)"];
TEI_ODST_Helmet_HUD_LowLightToggle_Action = player addaction [("<t color=""#81BEF7"">" + ("Toggle Lowlight Vision") +"</t>"), TEI_fnc_ODST_Helmet_LowLightToggle, "", 1, false, false, "", "(_target == _this) && (TEI_ODST_Helmet_HUD_MainCheck)"];

sleep 0.01;

while {player == player} do {
	if ((TEI_ODST_Helmet_HUD_Type == 1) && !(cameraView == "EXTERNAL")) then {
		117 cutRsc ["TEI_ODST_Helmet_HUD", "PLAIN", 0, true];
	} else {
		117 cutText ["", "PLAIN"];
	};
};