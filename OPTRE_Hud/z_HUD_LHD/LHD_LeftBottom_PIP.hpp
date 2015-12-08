class OPTRE_LHD_LeftBottom_PIP {
	
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
				x = 0.00499997 * safezoneW + safezoneX;
				y = 0.797 * safezoneH + safezoneY;
				w = 0.185625 * safezoneW;
				h = 0.198 * safezoneH;
			};
			class RscText_1000: OPTRE_HUD_RscText
			{
				idc = 1000;
				text = "PVT: Shame Bobman The 3rd Of Lenister"; //--- ToDo: Localize;
				x = 0.00499997 * safezoneW + safezoneX;
				y = 0.775 * safezoneH + safezoneY;
				w = 0.448594 * safezoneW;
				h = 0.022 * safezoneH;
			};

		};
	
	};
