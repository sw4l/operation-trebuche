class OPTRE_ODST_HealthBar {
	
	idd = 8001; 
	duration = 99999; 
	onLoad = "";
		
	class controls {
		
		class RscPicture_1200: OPTRE_HUD_RscProgress
		{
			idc = 1200;
			onLoad = "(_this select 0) progressSetPosition (1 - damage player); (_this select 0) ctrlSetTextColor (switch (profileNamespace getVariable [""OPTRE_ODST_HUDColourMain"",'blue']) do { case 'blue': { [0.1,0.1,1,0.28] }; case 'white': { [1,1,1,0.28] }; case 'orange': { [1,0.32,0,0.28] }; } );";
		
			x = 0.262813 * safezoneW + safezoneX;
			y = 0.093 * safezoneH + safezoneY;
			w = 0.474375 * safezoneW;
			h = 0.066 * safezoneH;
			
			texture = "OPTRE_Hud\Data\Hud_ODST_1\hud_healthBar.paa";
			colorBar[] = {1,0.32,0,0.28};
			
		};
	};
	
}; 