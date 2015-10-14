_getHelmet_preprocess = compile preprocessFileLineNumbers "\OPTRE_Core\scripts\HUD\fn_getHelmet.sqf";
_setHelmet_preprocess = compile preprocessFileLineNumbers "\OPTRE_Core\scripts\HUD\fn_setHelmet.sqf";
_LowLightToggle_preprocess = compile preprocessFileLineNumbers "\OPTRE_Core\scripts\HUD\fn_LowLightToggle.sqf";
_VisorToggle_preprocess = compile preprocessFileLineNumbers "\OPTRE_Core\scripts\HUD\fn_VisorToggle.sqf";

if (isServer && isDedicated) exitWith {};
if (isMultiplayer) then {player addMPEventHandler ["MPRespawn", {[] spawn OPTRE_HUD_fnc_InitRespawn}];} else {player addEventHandler ["Respawn", {[] spawn OPTRE_HUD_fnc_InitRespawn}];};
OPTRE_HUD_NVOn = 0;
OPTRE_HUD_Type = 0;
OPTRE_HUD_DepCheck = false;
OPTRE_HUD_MainCheck = false;
_getHelmet_fnc = [] spawn OPTRE_HUD_fnc_getHelmet;
OPTRE_ODST_Helmet_HUD_VisorToggle_Action = player addaction [("<t color=""#81BEF7"">" + ("Toggle Helmet Visor") +"</t>"), OPTRE_HUD_fnc_VisorToggle, "", 1, false, false, "", "(_target == _this) && (OPTRE_HUD_MainCheck)"];
OPTRE_ODST_Helmet_HUD_LowLightToggle_Action = player addaction [("<t color=""#81BEF7"">" + ("Toggle Lowlight Vision") +"</t>"), OPTRE_HUD_fnc_LowLightToggle, "", 1, false, false, "", "(_target == _this) && (OPTRE_HUD_MainCheck)"];

waitUntil {time > 0};
while {time > 0} do {
	 _getHelmet_fnc = [] spawn OPTRE_HUD_fnc_getHelmet;
	if ((OPTRE_HUD_Type == 1) && (cameraView != "EXTERNAL") && (cameraOn == player)) then {
		117 cutRsc ["OPTRE_ODST_HUD_blue", "PLAIN", 0, true];
	} else {
		117 cutText ["", "PLAIN"];
	};
	if (!OPTRE_HUD_MainCheck) then {
		setAperture -1;
		OPTRE_HUD_NVOn = 0;
	};
	sleep 0.1;
};