_helmet = (headgear player);
OPTRE_HUD_MainCheck = ["OPTRE_UNSC_ODST_Helmet", _helmet, true] call BIS_fnc_inString;
OPTRE_HUD_DepCheck = ["_dp", _helmet, true] call BIS_fnc_inString;
if ((OPTRE_HUD_MainCheck) && (!OPTRE_HUD_DepCheck)) then {OPTRE_HUD_Type = 1}; //Polarized Helmet
if ((OPTRE_HUD_MainCheck) && (OPTRE_HUD_DepCheck)) then {OPTRE_HUD_Type = 2}; //Depolarized Helmet
if ((!OPTRE_HUD_MainCheck) && (!OPTRE_HUD_DepCheck)) then {OPTRE_HUD_Type = 0}; //No Helmet