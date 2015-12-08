class Marrine_1_LHD_LeftBottom_PIP {
	
		idd = 7000; 
		duration = 99999; 
		onLoad = "_this call OPTRE_fnc_SquadPIP;";
		onUnload = "if (!isNil 'OPTRE_HUD_CAM1') then { {camDestroy _x; _x cameraEffect ['terminate','back'];} forEach [OPTRE_HUD_CAM1,OPTRE_HUD_CAM2,OPTRE_HUD_CAM3,OPTRE_HUD_CAM4]; };";
	
		class Objects	{
	
		}; 
		
		class controls {

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
			};

		};
	
	};
	
	/*
	
				class RscText_1003: OPTRE_HUD_SructuredText
			{
				idc = 1003;
				text = ""; //--- ToDo: Localize;
				x = 0.659844 * safezoneW + safezoneX;
				y = 0.247 * safezoneH + safezoneY;
				w = 0.0464063 * safezoneW;
				h = 0.022 * safezoneH;
				class Attributes {
					align = "center";
					color = "#80000000"; 
					size = "1.2";
				};