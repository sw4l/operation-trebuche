class Marrine_1_LHD_LeftBottom_PIP {
	
		idd = 7000; 
		duration = 99999; 
		onLoad = "_this call OPTRE_fnc_SquadPIP;";
		onUnload = "if (!isNil 'OPTRE_HUD_CAM1') then { {camDestroy _x; _x cameraEffect ['terminate','back'];} forEach [OPTRE_HUD_CAM1,OPTRE_HUD_CAM2,OPTRE_HUD_CAM3,OPTRE_HUD_CAM4]; };";
	
		class Objects	{
	
		}; 
		
		class controls {
			/*
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "#(argb,256,256,1)r2t(OPTRE_HUD_REND1,1.0)"; 
				x = 0.78875 * safezoneW + safezoneX;
				y = 0.247 * safezoneH + safezoneY;
				w = 0.154687 * safezoneW;
				h = 0.165 * safezoneH;
				//colorBackground[] = {.1,.1,.1,0.05};
			};
			class RscText_1000: OPTRE_HUD_SructuredText
			{
				idc = 1000;
				text = "PVT: Shame Bobman The 3rd Of Lenister"; //--- ToDo: Localize;
				x = 0.78875 * safezoneW + safezoneX;
				y = 0.214 * safezoneH + safezoneY;
				w = 0.154687 * safezoneW;
				h = 0.022 * safezoneH;
				class Attributes {
					align = "center";
					color = "#80000000"; 
					size = "1.25";
				};
			};*/

			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "#(argb,256,256,1)r2t(OPTRE_HUD_REND1,1.0)";
				x = 0.799062 * safezoneW + safezoneX;
				y = 0.258 * safezoneH + safezoneY;
				w = 0.12375 * safezoneW;
				h = 0.143 * safezoneH;
			};
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "\OPTRE_Hud\data\PIP\hemetCam_frame.paa";
				x = 0.742344 * safezoneW + safezoneX;
				y = 0.192 * safezoneH + safezoneY;
				w = 0.226875 * safezoneW;
				h = 0.275 * safezoneH;
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures;";
			};
			class RscText_1000: OPTRE_HUD_SructuredText
			{
				idc = 1000;
				x = 0.783593 * safezoneW + safezoneX;
				y = 0.225 * safezoneH + safezoneY;
				w = 0.108281 * safezoneW;
				h = 0.022 * safezoneH;
				class Attributes {
				  align = "left";
				};	
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures;";
			};
			class RscText_1001: OPTRE_HUD_SructuredText
			{
				idc = 1001;
				x = 0.819688 * safezoneW + safezoneX;
				y = 0.412 * safezoneH + safezoneY;
				w = 0.108281 * safezoneW;
				h = 0.022 * safezoneH;
				size = 0.035;
				class Attributes {
				  align = "right";
				};	
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures;";
			};

		};
	
	};
	
	
	
	
	
	
	/*
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Juvoju)
////////////////////////////////////////////////////////

class RscPicture_1200: RscPicture
{
	idc = 1200;
	text = "\OPTRE_Hud\data\PIP\hemetCam_frame.paa";
	x = 0.732031 * safezoneW + safezoneX;
	y = 0.17 * safezoneH + safezoneY;
	w = 0.2475 * safezoneW;
	h = 0.319 * safezoneH;
};
class RscPicture_1201: RscPicture
{
	idc = 1201;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.793906 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.12375 * safezoneW;
	h = 0.165 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
*/