class OPTRE_Marine_Main_1 {
	
		idd = 8000; 
		duration = 99999; 
		onLoad = "_this spawn OPTRE_fnc_HudLoad_MarrineEyeDisplay1;";
		//onLoad = "_this execVM (OPTRE_HUD_PATH + 'Scripts\HudLoaders\Fn_HudLoad_MarrineEyeDisplay1.sqf')";
		
		class Objects {}; 
		
		class controls {

			class RscPicture_1: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "OPTRE_Hud\Data\Marine_1\hud_glass.paa";
				x = 0.592812 * safezoneW + safezoneX;
				y = 0.071 * safezoneH + safezoneY;
				w = 0.4125 * safezoneW;
				h = 0.55 * safezoneH;
				colorBackground[] = {1,1,1,1};
				colorText[] = {0,1,0,0.25};
			};
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Marine_1\hud_mount.paa";
				x = 0.587656 * safezoneW + safezoneX;
				y = 0.071 * safezoneH + safezoneY;
				w = 0.4125 * safezoneW;
				h = 0.55 * safezoneH;
				colorBackground[] = {1,1,1,1};
				colorText[] = {1,1,1,1};
			};
			
			
			class primeWeapon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				text = "";
				x = 0.70625 * safezoneW + safezoneX;
				y = 0.225 * safezoneH + safezoneY;
				w = 0.0721875 * safezoneW;
				h = 0.055 * safezoneH;
				colorText[] = {0,0,0,0.3};
			};			
			class wep2: OPTRE_HUD_RscPicture
			{
				idc = 121;
				text = "";
				x = 0.701094 * safezoneW + safezoneX;
				y = 0.357 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.033 * safezoneH;
				colorText[] = {0,0,0,0.3};
			};			
			class grenadeIcon: OPTRE_HUD_RscPicture				
			{
				idc = 122;
				text = "";
				x = 0.7475 * safezoneW + safezoneX;
				y = 0.291 * safezoneH + safezoneY;
				w = 0.0309375 * safezoneW;
				h = 0.055 * safezoneH;
				colorText[] = {0,0,0,0.3};
			};		
			class wep3: OPTRE_HUD_RscPicture
			{
				idc = 123;
				text = "";
				x = 0.742344 * safezoneW + safezoneX;
				y = 0.357 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.033 * safezoneH;
				colorText[] = {0,0,0,0.3};
			};
			
			
			class RscText_1000: OPTRE_HUD_SructuredText
			{
				idc = 1000;
				text = "";//text = "DIR: 360"; //--- ToDo: Localize;
				x = 0.804219 * safezoneW + safezoneX;
				y = 0.46 * safezoneH + safezoneY;
				w = 0.0567187 * safezoneW;
				h = 0.04 * safezoneH;
				class Attributes {
					align = "left"; 	
					color = "#80000000"; 
					size = "1.2";							
				};
			};
			class RscText_1001: OPTRE_HUD_SructuredText
			{
				idc = 1001;
				text = "";//text = "OBJ: 360"; //--- ToDo: Localize;
				x = 0.860937 * safezoneW + safezoneX;
				y = 0.46 * safezoneH + safezoneY;
				w = 0.0567187 * safezoneW;
				h = 0.04 * safezoneH;
				class Attributes {
					align = "left";
					color = "#80000000"; 
					size = "1.2";					
				};
			};
			class RscText_1002: OPTRE_HUD_SructuredText
			{
				idc = 1002;
				text = "";//text = "SEMI 300m"; //--- ToDo: Localize;
				x = 0.701094 * safezoneW + safezoneX;
				y = 0.203 * safezoneH + safezoneY;
				w = 0.0825 * safezoneW;
				h = 0.022 * safezoneH;
				class Attributes {
					align = "center";
					color = "#80000000"; 
				};
			};
			class RscText_1004: OPTRE_HUD_SructuredText
			{
				idc = 1004;
				text = "";//text = "99"; //--- ToDo: Localize;
				x = 0.680469 * safezoneW + safezoneX;
				y = 0.225 * safezoneH + safezoneY;
				w = 0.0257812 * safezoneW;
				h = 0.022 * safezoneH;
				class Attributes {
					align = "center";
					color = "#80000000"; 
					size = "1.5";
				};
			};
			class RscText_1005: OPTRE_HUD_SructuredText
			{
				idc = 1005;
				text = "";//text = "Smoke Grenade (White)"; //--- ToDo: Localize;
				x = 0.659844 * safezoneW + safezoneX;
				y = 0.324 * safezoneH + safezoneY;
				w = 0.0876563 * safezoneW;
				h = 0.042 * safezoneH;
				class Attributes {
					align = "right";
					color = "#80000000"; 
					size = "1.1";
				};
			};
			class RscText_1006: OPTRE_HUD_SructuredText
			{
				idc = 1006;
				text = "";//text = "10"; //--- ToDo: Localize;
				x = 0.659844 * safezoneW + safezoneX;
				y = 0.291 * safezoneH + safezoneY;
				w = 0.0876563 * safezoneW;
				h = 0.022 * safezoneH;
				class Attributes {
					align = "right";
					color = "#80000000"; 
					size = "1.5";
				};
			};

			
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Lugemy)
			////////////////////////////////////////////////////////
			/*
			class LHD: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "#(argb,8,8,3)color(1,1,1,1)";
				x = 0.783594 * safezoneW + safezoneX;
				y = 0.203 * safezoneH + safezoneY;
				w = 0.159844 * safezoneW;
				h = 0.253 * safezoneH;
			};
			class healthIcon: OPTRE_HUD_RscPicture
			{
				idc = 1205;
				text = "#(argb,8,8,3)color(1,1,1,1)";
				x = 0.757813 * safezoneW + safezoneX;
				y = 0.401 * safezoneH + safezoneY;
				w = 0.020625 * safezoneW;
				h = 0.033 * safezoneH;
			};
			*/
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT END
			////////////////////////////////////////////////////////

		};
	
};