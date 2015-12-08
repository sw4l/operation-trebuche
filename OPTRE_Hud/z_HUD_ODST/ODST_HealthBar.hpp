class OPTRE_ODST_HealthBar {
	
	idd = 8001; 
	duration = 99999; 
	onLoad = "";
		
	class controls {
		
		class RscPicture_1200: OPTRE_HUD_RscProgress
		{
			idc = 1200;
			texture = "OPTRE_Hud\Data\Hud_ODST_1\hud_health_org2.paa";
			x = 0.262813 * safezoneW + safezoneX;
			y = 0.093 * safezoneH + safezoneY;
			w = 0.474375 * safezoneW;
			h = 0.066 * safezoneH;
			onLoad = "(_this select 0) progressSetPosition (1 - damage player);";
			colorFrame[] = {0,0,0,0};
			colorBar[] = {1,1,1,1};//{0.81,0.7,0,0.7};
			colorBackground[] = {1,1,1,1};
		};
		class RscPicture_1201: OPTRE_HUD_RscProgress
		{
			idc = 1201;
			texture = "OPTRE_Hud\Data\Hud_ODST_1\hud_health_org2.paa";
			x = 0.262813 * safezoneW + safezoneX;
			y = 0.093 * safezoneH + safezoneY;
			w = 0.474375 * safezoneW;
			h = 0.066 * safezoneH;
			onLoad = "(_this select 0) progressSetPosition (1 - damage player);";
			colorFrame[] = {0,0,0,0};
			colorBar[] = {1,1,1,1};//{0.81,0.7,0,0.7};
			colorBackground[] = {1,1,1,1};
		};		
	};
	
}; 