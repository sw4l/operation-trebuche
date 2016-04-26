class OPTRE_ODST_HUD_AmmoCount_AR 
{
	//onLoad = "";
	
	idd = 8000; 
	duration = 99999; 
	
	class controls {

		class RscPicture_1200: OPTRE_HUD_RscPicture
		{
			idc = 1200;
			text = "\OPTRE_Hud\data\Bullets\30pip.paa";
			onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
	x = 0.866094 * safezoneW + safezoneX;
	y = 0.863 * safezoneH + safezoneY;
	w = 0.128906 * safezoneW;
	h = 0.011 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RscPicture_1201: OPTRE_HUD_RscPicture
		{
			idc = 1201;
			text = "\OPTRE_Hud\data\Bullets\30pip.paa";
			onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
	x = 0.866094 * safezoneW + safezoneX;
	y = 0.874 * safezoneH + safezoneY;
	w = 0.128906 * safezoneW;
	h = 0.011 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		
		class RscPicture_120: OPTRE_HUD_RscProgress
		{
			idc = 120;
			//text = "OPTRE_Hud\Data\Hud_ODST_1\hud_healthBar.paa";
			texture = "\OPTRE_Hud\data\Bullets\30pip.paa";
	x = 0.866094 * safezoneW + safezoneX;
	y = 0.863 * safezoneH + safezoneY;
	w = 0.128906 * safezoneW;
	h = 0.011 * safezoneH;
			colorText[] = {1,1,1,1};
			onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);"; 
			colorBar[] = {1,1,1,1}; 
		};
		class RscPicture_121: OPTRE_HUD_RscProgress
		{
			idc = 121;
			//text = "OPTRE_Hud\Data\Hud_ODST_1\hud_healthBar.paa";
			texture = "\OPTRE_Hud\data\Bullets\30pip.paa";
	x = 0.866094 * safezoneW + safezoneX;
	y = 0.874 * safezoneH + safezoneY;
	w = 0.128906 * safezoneW;
	h = 0.011 * safezoneH;
			colorText[] = {1,1,1,1};
			onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_2',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
			colorBar[] = {1,1,1,1};
		};

	};
	
};
/*
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Nacojy)
////////////////////////////////////////////////////////

class RscPicture_1200: RscPicture
{
	idc = 1200;
	text = "\OPTRE_Hud\data\Bullets\30pip.paa";
	x = 0.866094 * safezoneW + safezoneX;
	y = 0.863 * safezoneH + safezoneY;
	w = 0.128906 * safezoneW;
	h = 0.011 * safezoneH;
};
class RscPicture_1201: RscPicture
{
	idc = 1201;
	text = "\OPTRE_Hud\data\Bullets\30pip.paa";
	x = 0.866094 * safezoneW + safezoneX;
	y = 0.874 * safezoneH + safezoneY;
	w = 0.128906 * safezoneW;
	h = 0.011 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
