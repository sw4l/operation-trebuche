class OPTRE_ODST_HealthBar {
	
	idd = 8001; 
	duration = 99999; 
	onLoad = "";
		
	class controls {
		
		class RscPicture_1200: OPTRE_HUD_RscProgress
		{
			idc = 1200;
			onLoad = "(_this select 0) progressSetPosition (1 - damage player);   _string = ((getArray (configfile >> 'CfgOptreHudSchemes' >> 'ODST_1' >> 'MainDialogs' >> (profileNamespace getVariable ['OPTRE_ODST_HUDColourMain','orange']) >> 'value')) select 2);  _array = _string call OPTRE_fnc_StringToArrayOfString;  (_this select 0) ctrlSetTextColor [(parseNumber (_array select 0)),(parseNumber (_array select 1)),(parseNumber (_array select 2)),(parseNumber (_array select 3))];";
			
			x = 0.262813 * safezoneW + safezoneX;
			y = 0.093 * safezoneH + safezoneY;
			w = 0.474375 * safezoneW;
			h = 0.066 * safezoneH;
			
			texture = "OPTRE_Hud\Data\Hud_ODST_1\hud_healthBar.paa";
			colorBar[] = {1,0.32,0,0.28};
			
		};
	};
	
}; 