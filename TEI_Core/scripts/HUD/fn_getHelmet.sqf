_helmet = (headgear player);
TEI_HUD_MainCheck = ["TEI_UNSC_ODST_helmet", _helmet, true] call BIS_fnc_inString;
TEI_HUD_DepCheck = ["_dp", _helmet, true] call BIS_fnc_inString;
if ((TEI_HUD_MainCheck) && (!TEI_HUD_DepCheck)) then {TEI_HUD_Type = 1}; //Polarized Helmet
if ((TEI_HUD_MainCheck) && (TEI_HUD_DepCheck)) then {TEI_HUD_Type = 2}; //Depolarized Helmet
if ((!TEI_HUD_MainCheck) && (!TEI_HUD_DepCheck)) then {TEI_HUD_Type = 0}; //No Helmet