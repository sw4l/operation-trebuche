class RscTitles
{


	class OPTRE_LoadScreen_20_Seconds {
		
		idd = -1; 
		fadein = 0;
		fadeout = 2;
		duration = 20;
			
		onLoad = "[] spawn {0 fadeSound 0; sleep 20; 2 fadeSound 1;};";
		//onUnload = "";
			
		class Objects
		{
					
		};			
		class controls 
		{	
			class BACKGROUND: OPTRE_UNSCMENU_RscPicture
			{
				idc = -1;
				x = -0.000156274 * safezoneW + safezoneX;
				y = -0.00599999 * safezoneH + safezoneY;
				w = 1.00547 * safezoneW;
				h = 1.012 * safezoneH;
				colorText[] = {1,1,1,1};
				OnLoad = "(_this select 0) ctrlSetText (getText (configfile >> 'cfgOptreLoadScreens' >> (((configfile >> 'cfgOptreLoadScreens') call Bis_fnc_getCfgSubClasses) call BIS_fnc_selectRandom) >> 'picture'));;";
			};	
			class TEXTMESSAGE: OPTRE_UNSCMENU_RscStructuredText
			{
				idc = -1;
				text = "Stand By, Loading..."; //--- ToDo: Localize;
				x = 0.29375 * safezoneW + safezoneX;
				y = 0.709 * safezoneH + safezoneY;
				w = 0.4125 * safezoneW;
				h = 0.044 * safezoneH;
				class Attributes
				{
					align = "center";
				};
			};
			
		};
		
	};
	
	class OPTRE_LoadScreen {
		
		idd = -1; 
		fadein = 2;
		fadeout = 2;
		duration = 5;
			
		onLoad = "[] spawn {2 fadeSound 0; sleep 5; 2 fadeSound 1;};";
		//onUnload = "";
			
		class Objects
		{
					
		};			
		class controls 
		{	
			class BACKGROUND: OPTRE_UNSCMENU_RscPicture
			{
				idc = -1;
				x = -0.000156274 * safezoneW + safezoneX;
				y = -0.00599999 * safezoneH + safezoneY;
				w = 1.00547 * safezoneW;
				h = 1.012 * safezoneH;
				colorText[] = {1,1,1,1};
				OnLoad = "(_this select 0) ctrlSetText (getText (configfile >> 'cfgOptreLoadScreens' >> (((configfile >> 'cfgOptreLoadScreens') call Bis_fnc_getCfgSubClasses) call BIS_fnc_selectRandom) >> 'picture'));;";
			};	
			class TEXTMESSAGE: OPTRE_UNSCMENU_RscStructuredText
			{
				idc = -1;
				text = "Stand By, Loading..."; //--- ToDo: Localize;
				x = 0.29375 * safezoneW + safezoneX;
				y = 0.709 * safezoneH + safezoneY;
				w = 0.4125 * safezoneW;
				h = 0.044 * safezoneH;
				class Attributes
				{
					align = "center";
				};
			};
			
		};
		
	};

	class OPTRE_A2SplashScreenInterLance {
		
		idd = -1; 
		fadein = 0;
		fadeout = 2;
		duration = 3;
			
		//onLoad = "";
		//onUnload = "";
			
		class Objects
		{
					
		};			
		class controls 
		{	
			class blackLayer: OPTRE_UNSCMENU_RscPicture // Full Screen 
			{
				idc = -1;
				text = "#(argb,8,8,3)color(0,0,0,1)";
				backgroundColor[] = {0,0,0,1};
				x = -0.7125;
				y = -0.42;
				w = 2.4375;
				h = 1.84;
			};			
			class logo: OPTRE_UNSCMENU_RscPicture
			{
				idc = -1;
				text = "\OPTRE_Modules\a2_logo_big.paa";
				x = 0.29375 * safezoneW + safezoneX;
				y = 0.225 * safezoneH + safezoneY;
				w = 0.4125 * safezoneW;
				h = 0.55 * safezoneH;
			};				
			class interlacingLayer: OPTRE_UNSCMENU_RscPicture // Full Screen 
			{
				idc = -1;
				fadein = 3;
				text = "a3\ui_f\data\igui\rsctitles\interlacing\interlacing_ca.paa";
				x = -0.7125;
				y = -0.42;
				w = 2.4375;
				h = 1.84;
			};		
		};
		
	};
	
	/*class OPTRE_SplashScreenLogo {
		
		idd = -1; 
		fadein = 0;
		fadeout = 2;
		duration = 3;
			
		//onLoad = "";
		//onUnload = "";
			
		class Objects
		{
					
		};			
		class controls 
		{

			
		};
		
	};
	
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Wyvyqi)
////////////////////////////////////////////////////////

class RscPicture_1200: RscPicture
{
	idc = 1200;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.886719 * safezoneW + safezoneX;
	y = 0.126 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.022 * safezoneH;
};
class RscPicture_1201: RscPicture
{
	idc = 1201;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.886719 * safezoneW + safezoneX;
	y = 0.115 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.011 * safezoneH;
};
class RscPicture_1202: RscPicture
{
	idc = 1202;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.886719 * safezoneW + safezoneX;
	y = 0.148 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.011 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Jexole)
////////////////////////////////////////////////////////

class top: RscPicture
{
	idc = 1200;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.5825 * safezoneW + safezoneX;
	y = 0.225 * safezoneH + safezoneY;
	w = 0.12375 * safezoneW;
	h = 0.0055 * safezoneH;
};
class fuel: RscPicture
{
	idc = 1201;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.5825 * safezoneW + safezoneX;
	y = 0.2338 * safezoneH + safezoneY;
	w = 0.12375 * safezoneW;
	h = 0.011 * safezoneH;
};
class bot: RscPicture
{
	idc = 1202;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.5825 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.12375 * safezoneW;
	h = 0.0055 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Waxyci)
////////////////////////////////////////////////////////

class T: RscPicture
{
	idc = 1200;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.876406 * safezoneW + safezoneX;
	y = 0.137 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.0055 * safezoneH;
};
class F: RscPicture
{
	idc = 1201;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.876406 * safezoneW + safezoneX;
	y = 0.148 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.0055 * safezoneH;
};
class B: RscPicture
{
	idc = 1202;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.876406 * safezoneW + safezoneX;
	y = 0.159 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.0055 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////

	
	*/
	
	class OPTRE_JetPackProgress {
		
		idd = 8999; 
		duration = 99999; 
		onLoad = "0 = _this spawn OPTRE_fnc_JetPack;";
		
		class controls {
		
			class HeatTop: OPTRE_UNSCMENU_RscProgress
			{
				idc = 1200;
				text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.876406 * safezoneW + safezoneX;
	y = 0.137 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.0055 * safezoneH;
				colorBar[] = {1,0,0,0.4};
				//onLoad = "_this select 0 progressSetPosition 1;";
			};
			class fuelTotal: OPTRE_UNSCMENU_RscProgress
			{
				idc = 1201;
				text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.876406 * safezoneW + safezoneX;
	y = 0.148 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.0055 * safezoneH;
				colorBar[] = {0,0.15,1,0.4};
				//onLoad = "_this select 0 progressSetPosition 1;";
			};
			class HeatBottom: OPTRE_UNSCMENU_RscProgress
			{
				idc = 1202;
				text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.876406 * safezoneW + safezoneX;
	y = 0.159 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.0055 * safezoneH;
				colorBar[] = {1,0,0,0.4};
				//onLoad = "_this select 0 progressSetPosition 1;";
			};
		
		};
				
	};	
	
};