waitUntil {time > 0};

#include "\a3\editor_f\Data\Scripts\dikCodes.h"
	
// 1
["Operation Trebuchet & First Contact", "OPTRE_Hud_HudTog", ["Switch HUD On / Off", "Loads the appropriate HUD for the player"], { false call OPTRE_fnc_ToggleVisor }, { }, [DIK_APPS, [false, false, false]], false, -1, false] call cba_fnc_addKeybind;
// 2
["Operation Trebuchet & First Contact", "OPTRE_Hud_Settings", ["Open HUD Settings Menu", "Opens The Settings Menu For the HUD"], { [] execVM "OPTRE_FunctionsLibrary\Scripts\OpenHUDMenu.sqf" }, { }, [DIK_APPS, [true, false, false]], false, -1, false] call cba_fnc_addKeybind;
// 3
["Operation Trebuchet & First Contact", "OPTRE_Hud_TN", ["HUD Toggle Function Next", "Toggles the current Left Hand Displays functionality for example in radar mode zooms in"], {true call OPTRE_fnc_ToggleLHDFnc;}, { }, [DIK_H, [true, false, false]], false, -1, false] call cba_fnc_addKeybind;
// 4
["Operation Trebuchet & First Contact", "OPTRE_Hud_TP", ["HUD Toggle Function Previous", "Toggles the current Left Hand Displays functionality for example in radar mode zooms out"], {false call OPTRE_fnc_ToggleLHDFnc;}, { }, [DIK_Y, [true, false, false]], false, -1, false] call cba_fnc_addKeybind;
