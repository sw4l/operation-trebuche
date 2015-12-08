class OPTRE_ODST_Main_1_Broken {
	
		idd = 8000; 
		duration = 99999; 
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		
		class Objects {}; 
		
		class controls {
		
			// Main Frame 
			
			// Load Annim Only //
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;

				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_cracked.paa"; //--- ToDo: Localize;
				x = -0.000156274 * safezoneW + safezoneX;
				y = -0.00599999 * safezoneH + safezoneY;
				w = 1.00031 * safezoneW;
				h = 1.012 * safezoneH;
				//colorText[] = {1,1,1,1};
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
			
		};
	
	};