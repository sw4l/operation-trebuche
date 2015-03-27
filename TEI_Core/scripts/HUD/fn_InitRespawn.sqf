#include "\userconfig\TEI\TEI.hpp"
if (!TEI_HUD_Enabled) exitWith {};
if (isServer && isDedicated) exitWith {};
TEI_HUD_NVOn = 0;
TEI_HUD_Type = 0;
TEI_HUD_DepCheck = false;
TEI_HUD_MainCheck = false;
_getHelmet_fnc = [] spawn TEI_HUD_fnc_getHelmet;
TEI_ODST_Helmet_HUD_VisorToggle_Action = player addaction [("<t color=""#81BEF7"">" + ("Toggle Helmet Visor") +"</t>"), TEI_HUD_fnc_VisorToggle, "", 1, false, false, "", "(_target == _this) && (TEI_HUD_MainCheck)"];
TEI_ODST_Helmet_HUD_LowLightToggle_Action = player addaction [("<t color=""#81BEF7"">" + ("Toggle Lowlight Vision") +"</t>"), TEI_HUD_fnc_LowLightToggle, "", 1, false, false, "", "(_target == _this) && (TEI_HUD_MainCheck)"];

waitUntil {time > 0};
while {time > 0} do {
	 _getHelmet_fnc = [] spawn TEI_HUD_fnc_getHelmet;
	if ((TEI_HUD_Type == 1) && (cameraView != "EXTERNAL") && (cameraOn == player)) then {
		117 cutRsc [TEI_HUD_Color, "PLAIN", 0, true];
	} else {
		117 cutText ["", "PLAIN"];
	};
	if (!TEI_HUD_MainCheck) then {
		setAperture -1;
		TEI_HUD_NVOn = 0;
	};
	sleep 0.1;
};