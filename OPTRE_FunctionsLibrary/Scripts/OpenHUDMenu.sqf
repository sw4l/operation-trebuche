		_helmet = headgear player; 
		
		_varHelmetArray = ( getArray (configfile >> "CfgWeapons" >> _helmet >> "optreVarietys") ); // optreVarietys[] = {"_dp","","_broken"};
		_hudStyle = (getText (configfile >> "CfgWeapons" >> _helmet >> "optreHUDStyle") ); // "ODST_1"
		_hel = true;

		if (_hudStyle == "") then {
			if (str (findDisplay 11000) == "No display") then { (findDisplay 46) createDisplay "OPTRE_HUD_ARM_Menu" }; 
		} else {
			if (str (findDisplay 11000) == "No display") then { (findDisplay 46) createDisplay "OPTRE_HUD_ODST_Menu" }; 
		};