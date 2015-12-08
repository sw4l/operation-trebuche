class OPTRE_Marrine_2_AmmoCount {
	
	idd = 8000; 
	duration = 99999; 
	
	class controls {
			
			class RscText_1003: OPTRE_HUD_SructuredText
			{
				idc = 1003;
				text = ""; //--- ToDo: Localize;
				x = 0.866094 * safezoneW + safezoneX;
				y = 0.082 * safezoneH + safezoneY;
				w = 0.0825 * safezoneW;
				h = 0.025 * safezoneH;
				class Attributes {
					align = "left";
					color = "#80000000"; 
					size = ".80";
				};
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Text; _mag = currentMagazine player; (_this select 0) ctrlSetText (if ((['Grenade', _mag, false] call BIS_fnc_inString) OR (_mag == '')) then {(getText (configfile >> 'CfgMagazines' >> _mag >> 'displayName'))} else {(str (player ammo currentWeapon player) + '/' + str (getNumber (configfile >> 'CfgMagazines' >> (currentMagazine player) >> 'count')) )})";
			};			
		
	};
			
};	