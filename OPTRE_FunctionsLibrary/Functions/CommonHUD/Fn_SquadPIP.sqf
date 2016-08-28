if (!isNil "OPTRE_HUD_CAM1") then {camDestroy OPTRE_HUD_CAM1; OPTRE_HUD_CAM1 cameraEffect ['terminate','back'];};

_unitsArray = units group player - [player]; 
if (count _unitsArray < 1) exitWith { ((_this select 0) displayCtrl 1000) ctrlSetText ""; 303 cutFadeOut 1;};
_numberOfUnitsInArray = (count _unitsArray) - 1; 

OPTRE_LHD_Units removeAllEventHandlers "Killed"; 
_unit = _unitsArray select OPTRE_LHD_PIPSel;
OPTRE_LHD_Units = _unit;

_unit addEventHandler ["Killed",{
	if (!isNil "OPTRE_HUD_CAM1") then {camDestroy OPTRE_HUD_CAM1; OPTRE_HUD_CAM1 cameraEffect ['terminate','back'];};
	OPTRE_HUD_CAM1 = 'camera' camCreate [0,0,0]; 
	OPTRE_HUD_CAM1 attachTo [(_this select 0), [0.40, 0.16, 0.12],"hlava"];
	OPTRE_HUD_CAM1 cameraEffect ['External', 'Right BACK', 'OPTRE_HUD_REND1'];
	OPTRE_HUD_CAM1 camSetFov 1;
	OPTRE_HUD_CAM1 camSetRelPos [-0,0,0];
	OPTRE_HUD_CAM1 camCommitPrepared 0; 
	"OPTRE_HUD_REND1" setPiPEffect [OPTRE_HUD_PIP_NVGTI];
}];

OPTRE_HUD_CAM1 = 'camera' camCreate [0,0,0]; 
OPTRE_HUD_CAM1 attachTo [_unit, [0.40, 0.16, 1.57],"hlava"];
OPTRE_HUD_CAM1 cameraEffect ['External', 'Right BACK', 'OPTRE_HUD_REND1'];
OPTRE_HUD_CAM1 camSetFov 1;
OPTRE_HUD_CAM1 camSetRelPos [-500,0,0];
OPTRE_HUD_CAM1 camCommitPrepared 0; 
"OPTRE_HUD_REND1" setPiPEffect [OPTRE_HUD_PIP_NVGTI];

((_this select 0) displayCtrl 1000) ctrlSetTextColor OPTRE_Hud_ColorScheme_Text;
((_this select 0) displayCtrl 1000) ctrlSetText format ["%1: %2",rank _unit, name _unit];

((_this select 0) displayCtrl 1001) ctrlSetTextColor OPTRE_Hud_ColorScheme_Text;
((_this select 0) displayCtrl 1001) ctrlSetText (groupID group _unit);