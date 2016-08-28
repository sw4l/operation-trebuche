waitUntil {time > 0};

#include "\a3\editor_f\Data\Scripts\dikCodes.h"
	
// 1
["Operation Trebuchet & First Contact", "OPTRE_Hud_HudTog", ["Switch HUD On / Off", "Loads the appropriate HUD for the player"], { false call OPTRE_fnc_ToggleVisor }, { }, [DIK_APPS, [false, false, false]], false, -1, false] call cba_fnc_addKeybind;
// 2
["Operation Trebuchet & First Contact", "OPTRE_Hud_Settings", ["Open HUD Settings Menu", "Opens The Settings Menu For the HUD"], { [ objNull, player, -1, ["UNSC_HUD_Settings","UNSC_HUD_ODST","UNSC_HUD_Glass","UNSC_DATABASE"] ] call OPTRE_fnc_Menu; }, { }, [DIK_APPS, [true, false, false]], false, -1, false] call cba_fnc_addKeybind;
// 3
["Operation Trebuchet & First Contact", "OPTRE_Hud_TN", ["HUD Toggle Function Next", "Toggles the current Left Hand Displays functionality for example in radar mode zooms in"], {true call OPTRE_fnc_ToggleLHDFnc;}, { }, [DIK_H, [true, false, false]], false, -1, false] call cba_fnc_addKeybind;
// 4
["Operation Trebuchet & First Contact", "OPTRE_Hud_TP", ["HUD Toggle Function Previous", "Toggles the current Left Hand Displays functionality for example in radar mode zooms out"], {false call OPTRE_fnc_ToggleLHDFnc;}, { }, [DIK_Y, [true, false, false]], false, -1, false] call cba_fnc_addKeybind;
// 5
["Operation Trebuchet & First Contact", "OPTRE_Hud_LowLight", ["HUD ODST Low Light Toggle", "Toggles the low light vision mode of ODST helmets."], { [] call OPTRE_Fnc_ToggleLowLight }, { }, [DIK_L, [true, false, false]], false, -1, false] call cba_fnc_addKeybind;
// 6
["Operation Trebuchet & First Contact", "OPTRE_Hud_JetPackOn", ["Toggle Jet Pack On / Off", "Switches Jet Pack On if equipped"], { if !OPTRE_JetPackOn then { 77 cutRsc ["OPTRE_JetPackProgress", "PLAIN", 3, false]; true } else { OPTRE_JetPackOn = false; false }; },  { }, [DIK_APPS, [false, false, false]], false, -1, false] call cba_fnc_addKeybind;

_helmet = (headgear player);
_hudStyle = ( getText (configfile >> "CfgWeapons" >> _helmet >> "optreHUDStyle") ); 
OPTRE_JetPackOn = false; 

if (_hudStyle == "ODST_1") then {

	_varHelmetArray = ( getArray (configfile >> "CfgWeapons" >> _helmet >> "optreVarietys") ); 
	
	_helmet = [_helmet, (_varHelmetArray select 1), ""] call CBA_fnc_replace; 
	_helmet = [_helmet, (_varHelmetArray select 2), ""] call CBA_fnc_replace; 
	_helmet = (_helmet + (_varHelmetArray select 0));
	
	removeHeadgear player;
	
	player addHeadgear _helmet;
	
};

0 = false call OPTRE_fnc_ToggleVisor;