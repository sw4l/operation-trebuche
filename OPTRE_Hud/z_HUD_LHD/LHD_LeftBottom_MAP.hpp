class OPTRE_LHD_LeftBottom_HudMap {
	
		idd = 7000; 
		duration = 99999; 
		//onLoad = "_this call OPTRE_fnc_HudMap;";
		//onUnload = "";
	
		class Objects	{
	
		}; 
		
		class controls {
			
			class RscFrame_1200: OPTRE_HUD_MapNormal
			{
				idc = 1200;
				//text = "#(argb,256,256,1)r2t(OPTRE_HUD_REND1,1.0)";
				x = 0.0307812 * safezoneW + safezoneX;
				y = 0.819 * safezoneH + safezoneY;
				w = 0.134062 * safezoneW;
				h = 0.149 * safezoneH;
				onLoad = "0 = [(_this select 0)] call OPTRE_fnc_HudMap;";
			};
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "\OPTRE_Hud\data\PIP\hemetCam_frame.paa";
				x = -0.03625 * safezoneW + safezoneX;
				y = 0.744 * safezoneH + safezoneY;
				w = 0.268125 * safezoneW;
				h = 0.299 * safezoneH;
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures; ";
			};
			class RscText_1000: OPTRE_HUD_SructuredText
			{
				idc = 1000;
				//text = "RANK GIVENNAME FAMNAME"; //--- ToDo: Localize;
				x = 0.005 * safezoneW + safezoneX;
				y = 0.780 * safezoneH + safezoneY;
				w = 0.134062 * safezoneW;
				h = 0.022 * safezoneH;
				size = 0.035;
				class Attributes {
				  align = "left";
				};	
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures; ";
			};
			class RscText_1001: OPTRE_HUD_SructuredText
			{
				idc = 1001;
				//text = "Group Name"; //--- ToDo: Localize;
				x = 0.0565625 * safezoneW + safezoneX;
				y = 0.973 * safezoneH + safezoneY;
				w = 0.134062 * safezoneW;
				h = 0.022 * safezoneH;
				size = 0.035;
				class Attributes {
				  align = "right";
				};	
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures; (_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures; _OPTRE_Hud_ScaleMeters = ( (round ( OPTRE_Hud_MapScale / ([] call OPTRE_Fnc_MapScale) ) ) * 100); _OPTRE_Hud_ScaleMetersString = ( str _OPTRE_Hud_ScaleMeters + 'm' ); _this select 0 ctrlSetText _OPTRE_Hud_ScaleMetersString";
			};
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT END
			////////////////////////////////////////////////////////

		};
	
	};
