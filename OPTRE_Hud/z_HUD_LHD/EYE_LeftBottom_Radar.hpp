class Marrine_1_LHD_LeftBottom_Radar {
	
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
				x = 0.783594 * safezoneW + safezoneX;
				y = 0.203 * safezoneH + safezoneY;
				w = 0.159844 * safezoneW;
				h = 0.253 * safezoneH;
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures;"; //progressSetPosition (1 - damage player)
			};
			class RscPicture_201: OPTRE_HUD_rscMapControl_HUD_1
			{
				idc = 201;
				x = 0.783594 * safezoneW + safezoneX;
				y = 0.203 * safezoneH + safezoneY;
				w = 0.159844 * safezoneW;
				h = 0.253 * safezoneH;
				onLoad = " 0 = _this spawn OPTRE_fnc_Radar;";//0 = (_this select 0) call OPTRE_fnc_Radar;";
			};			
	
		};
	
	};