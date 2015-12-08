if (!isNil "OPTRE_HUD_CAM1") then {camDestroy OPTRE_HUD_CAM1; OPTRE_HUD_CAM1 cameraEffect ['terminate','back'];};

_unitsArray = units group player - [player]; 
_numberOfUnitsInArray = (count _unitsArray) - 1; 
//if (_numberOfUnitsInArray > OPTRE_LHD_PIPSel) then {OPTRE_LHD_PIPSel = _numberOfUnitsInArray; hint "here";};
_unit = _unitsArray select OPTRE_LHD_PIPSel;

OPTRE_HUD_CAM1 = 'camera' camCreate [0,0,0]; 
OPTRE_HUD_CAM1 attachTo [_unit, [0.40, 0.16, 1.57],"hlava"];
OPTRE_HUD_CAM1 cameraEffect ['External', 'Right BACK', 'OPTRE_HUD_REND1'];
OPTRE_HUD_CAM1 camSetFov 1;
OPTRE_HUD_CAM1 camSetRelPos [-500,0,0];
OPTRE_HUD_CAM1 camCommitPrepared 0; 

//((_this select 0) displayCtrl 1200) ctrlSetTooltipColorBox [1, 0, 0, 1];
((_this select 0) displayCtrl 1000) ctrlSetTextColor OPTRE_Hud_ColorScheme_Text;
((_this select 0) displayCtrl 1000) ctrlSetText ( format ["%1: %2",rank _unit, name _unit] );