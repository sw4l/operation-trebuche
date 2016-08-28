class OPTRE_Marine_Main_1_Health {
	
		idd = -1; 
		duration = 99999; 
		
		class Objects {}; 
		
		class controls {

			class healthIcon: OPTRE_HUD_RscPicture
			{
				idc = 1205;
				text = "OPTRE_Hud\Data\Marine_2\Health.paa";
	x = 0.964063 * safezoneW + safezoneX;
	y = 0.159 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
				onLoad = "if !((damage player) > 0.25) then {(_this select 0) ctrlSetTextColor [0,0,0,0];};";
				colorBackground[] = {1,0,0,0.3};
				colorText[] = {1,0,0,0.3};
			};
		};
};