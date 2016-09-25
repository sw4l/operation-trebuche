class OPTRE_ODST_HUD_AmmoCount_BR
{
	//onLoad = "";
	
	idd = 8000; 
	duration = 99999; 
	
	class controls {

		class RscPicture_1200: OPTRE_HUD_RscPicture
		{
			idc = 1200;
			text = "\OPTRE_Hud\data\Bullets\18pip.paa";
			onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
	/*x = 0.87125 * safezoneW + safezoneX;
	y = 0.852 * safezoneH + safezoneY;
	w = 0.0773437 * safezoneW;
	h = 0.011 * safezoneH;*/
	x = 0.866094 * safezoneW + safezoneX;
	y = 0.874 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.011 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RscPicture_1201: OPTRE_HUD_RscPicture
		{
			idc = 1201;
			text = "\OPTRE_Hud\data\Bullets\18pip.paa";
			onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
	/*x = 0.87125 * safezoneW + safezoneX;
	y = 0.863 * safezoneH + safezoneY;
	w = 0.0773437 * safezoneW;
	h = 0.011 * safezoneH;*/
	x = 0.866094 * safezoneW + safezoneX;
	y = 0.885 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.011 * safezoneH;
			colorText[] = {1,1,1,1};
		};

		
		class RscPicture_120: OPTRE_HUD_RscProgress
		{
			idc = 120;
			//text = "OPTRE_Hud\Data\Hud_ODST_1\hud_healthBar.paa";
			texture = "\OPTRE_Hud\data\Bullets\18pip.paa";
	/*x = 0.87125 * safezoneW + safezoneX;
	y = 0.852 * safezoneH + safezoneY;
	w = 0.0773437 * safezoneW;
	h = 0.011 * safezoneH;*/
	x = 0.866094 * safezoneW + safezoneX;
	y = 0.874 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.011 * safezoneH;
			colorText[] = {1,1,1,1};
			onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);"; 
			colorBar[] = {1,1,1,1}; 
		};
		class RscPicture_121: OPTRE_HUD_RscProgress
		{
			idc = 121;
			//text = "OPTRE_Hud\Data\Hud_ODST_1\hud_healthBar.paa";
			texture = "\OPTRE_Hud\data\Bullets\18pip.paa";
	/*x = 0.87125 * safezoneW + safezoneX;
	y = 0.863 * safezoneH + safezoneY;
	w = 0.0773437 * safezoneW;
	h = 0.011 * safezoneH;*/
	x = 0.866094 * safezoneW + safezoneX;
	y = 0.885 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.011 * safezoneH;
			colorText[] = {1,1,1,1};
			onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_2',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
			colorBar[] = {1,1,1,1};
		};
			
	};
	
};

/*

////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Wajaxa)
////////////////////////////////////////////////////////

class RscPicture_1200: RscPicture
{
	idc = 1200;
	text = "\OPTRE_Hud\data\Bullets\18pip.paa";
	x = 0.87125 * safezoneW + safezoneX;
	y = 0.852 * safezoneH + safezoneY;
	w = 0.0773437 * safezoneW;
	h = 0.011 * safezoneH;
};
class RscPicture_1201: RscPicture
{
	idc = 1201;
	text = "\OPTRE_Hud\data\Bullets\18pip.paa";
	x = 0.87125 * safezoneW + safezoneX;
	y = 0.863 * safezoneH + safezoneY;
	w = 0.0773437 * safezoneW;
	h = 0.011 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////


////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Jawyda)
////////////////////////////////////////////////////////

class RscPicture_1200: RscPicture
{
	idc = 1200;
	text = "\OPTRE_Hud\data\Bullets\BR.paa";
	x = 0.891875 * safezoneW + safezoneX;
	y = 0.854062 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.0241906 * safezoneH;
};
class RscPicture_1201: RscPicture
{
	idc = 1201;
	text = "\OPTRE_Hud\data\Bullets\BR.paa";
	x = 0.891875 * safezoneW + safezoneX;
	y = 0.880452 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.0241906 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////

////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Pejibi)
////////////////////////////////////////////////////////

class RscPicture_1200: RscPicture
{
	idc = 1200;
	text = "\OPTRE_Hud\data\Bullets\SMG.paa";
	x = 0.897031 * safezoneW + safezoneX;
	y = 0.851863 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class RscPicture_1201: RscPicture
{
	idc = 1201;
	text = "\OPTRE_Hud\data\Bullets\SMG.paa";
	x = 0.897031 * safezoneW + safezoneX;
	y = 0.873854 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.0219914 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
