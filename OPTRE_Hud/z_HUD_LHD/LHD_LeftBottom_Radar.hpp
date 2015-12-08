class OPTRE_LHD_LeftBottom_Radar {
	
		idd = 7000; 
		duration = 99999; 
		//onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
		
		class Objects	{

			
			
		}; 
		
		class controls {
		
			// Map Starts here
			class RscPicture_200: OPTRE_HUD_RscPicture
			{
				idc = 200;
				text = "\A3\Ui_f\data\GUI\Rsc\RscSlingLoadAssistant\SLA_Circles_ca.paa";
				x = 0.0101562 * safezoneW + safezoneX;
				y = 0.764 * safezoneH + safezoneY;
				w = 0.144375 * safezoneW;
				h = 0.22 * safezoneH;
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures;"; //progressSetPosition (1 - damage player)
			};
			class RscPicture_201: OPTRE_HUD_rscMapControl_HUD_1
			{
				idc = 201;
				x = 0.0101562 * safezoneW + safezoneX;
				y = 0.764 * safezoneH + safezoneY;
				w = 0.144375 * safezoneW;
				h = 0.22 * safezoneH;
				onLoad = " 0 = _this spawn OPTRE_fnc_Radar;";//0 = (_this select 0) call OPTRE_fnc_Radar;";
			};			
	
		};
	
	};