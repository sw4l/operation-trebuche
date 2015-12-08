class OPTRE_ODST_WeaponProgress {
	
	idd = 8000; 
	duration = 99999; 
	
	class controls {

			class ammoLeftProgress: OPTRE_HUD_SructuredText
			{
				idc = 1000;
				text = ""; //--- ToDo: Localize;
				x = 0.876406 * safezoneW + safezoneX;
				y = 0.863 * safezoneH + safezoneY;
				w = 0.118594 * safezoneW;
				h = 0.022 * safezoneH;
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Text; _mag = currentMagazine player; (_this select 0) ctrlSetText (if ((['Grenade', _mag, false] call BIS_fnc_inString) OR (_mag == '')) then {(getText (configfile >> 'CfgMagazines' >> _mag >> 'displayName'))} else {(str (player ammo currentWeapon player) + '/' + str (getNumber (configfile >> 'CfgMagazines' >> (currentMagazine player) >> 'count')) )})";
				class Attributes {
					align = "left";
				};
			};
		
	};
			
};	