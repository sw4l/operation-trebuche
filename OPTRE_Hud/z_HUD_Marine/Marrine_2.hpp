class OPTRE_MarrineGlasses_Main {
	
		idd = 8000; 
		duration = 99999; 
		onLoad = "_this spawn OPTRE_fnc_HudLoad_MarrineGlass1;";
		//onLoad = "_this execVM (OPTRE_HUD_PATH + 'Scripts\HudLoaders\Fn_HudLoad_MarrineGlass1.sqf')";
		
		class Objects
		{

		}; 
		
		class controls {

				class RscPicture_120: OPTRE_HUD_RscPicture
				{
					idc = 1;

					text = "OPTRE_Hud\Data\Marine_2\hud_edges_mar_2.paa"; //--- ToDo: Localize;hud_edges_mar.paa
					x = -0.000156274 * safezoneW + safezoneX;
					y = -0.01 * safezoneH + safezoneY;
					w = 1.00031 * safezoneW;
					h = 1.27 * safezoneH;
					onLoad = "(_this select 0) ctrlSetTextColor [1,0.8,0,0.2]; if !OPTRE_Hud_On then {_ctrl = (_this select 0);   _pos = ctrlPosition _ctrl;      _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2];   _ctrl ctrlCommit 0;     _ctrl ctrlSetPosition _pos;   _ctrl ctrlCommit 2;};";
				};
				class RscPicture_122: OPTRE_HUD_RscPicture
				{
					idc = 2;

					text = "OPTRE_Hud\Data\Marine_2\hud_edges_mar_tabs.paa"; //--- ToDo: Localize;hud_edges_mar.paa
					x = -0.000156274 * safezoneW + safezoneX;
					y = -0.01 * safezoneH + safezoneY;
					w = 1.00031 * safezoneW;
					h = 1.27 * safezoneH;
					onLoad = "(_this select 0) ctrlSetTextColor [1,1,1,1]; if !OPTRE_Hud_On then {_ctrl = (_this select 0);   _pos = ctrlPosition _ctrl;      _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2];   _ctrl ctrlCommit 0;     _ctrl ctrlSetPosition _pos;   _ctrl ctrlCommit 2;};";
				};
				class RscPicture_121: OPTRE_HUD_RscPicture
				{
					idc = 2;
					onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame; if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 4;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";

					text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa"; //--- ToDo: Localize;
					x = -0.000156274 * safezoneW + safezoneX;
					y = -0.00599999 * safezoneH + safezoneY;
					w = 1.00547 * safezoneW;
					h = 1.012 * safezoneH;
				};
				class primeWeaponIcon: OPTRE_HUD_RscPicture
				{
					idc = 120;

					x = 0.876406 * safezoneW + safezoneX;
					y = 0.038 * safezoneH + safezoneY;
					w = 0.0773437 * safezoneW;
					h = 0.066 * safezoneH;
				};
				class secondaryWeaponIcon: OPTRE_HUD_RscPicture
				{
					idc = 121;

					x = 0.95375 * safezoneW + safezoneX;
					y = 0.038 * safezoneH + safezoneY;
					w = 0.04125 * safezoneW;
					h = 0.033 * safezoneH;
				};
				class throwIcon: OPTRE_HUD_RscPicture
				{
					idc = 122;

					x = 0.0153125 * safezoneW + safezoneX;
					y = 0.027 * safezoneH + safezoneY;
					w = 0.0257812 * safezoneW;
					h = 0.044 * safezoneH;
				};
				class atIcon: OPTRE_HUD_RscPicture
				{
					idc = 123;

					x = 0.95375 * safezoneW + safezoneX;
					y = 0.071 * safezoneH + safezoneY;
					w = 0.04125 * safezoneW;
					h = 0.033 * safezoneH;
				};
				class RscPicture_101: OPTRE_HUD_RscPicture
				{
					idc = 101;

					x = 0.860937 * safezoneW + safezoneX;
					y = 0.049 * safezoneH + safezoneY;
					w = 0.0154688 * safezoneW;
					h = 0.033 * safezoneH;
				};
				class RscPicture_102: OPTRE_HUD_RscPicture
				{
					idc = 102;

					x = 0.845468 * safezoneW + safezoneX;
					y = 0.049 * safezoneH + safezoneY;
					w = 0.0154688 * safezoneW;
					h = 0.033 * safezoneH;
				};
				class RscPicture_103: OPTRE_HUD_RscPicture
				{
					idc = 103;

					x = 0.83 * safezoneW + safezoneX;
					y = 0.049 * safezoneH + safezoneY;
					w = 0.0154688 * safezoneW;
					h = 0.033 * safezoneH;
				};
				class RscPicture_104: OPTRE_HUD_RscPicture
				{
					idc = 104;

					x = 0.0410937 * safezoneW + safezoneX;
					y = 0.038 * safezoneH + safezoneY;
					w = 0.0154688 * safezoneW;
					h = 0.033 * safezoneH;
				};
				class RscPicture_105: OPTRE_HUD_RscPicture
				{
					idc = 105;

					x = 0.0565625 * safezoneW + safezoneX;
					y = 0.038 * safezoneH + safezoneY;
					w = 0.0154688 * safezoneW;
					h = 0.033 * safezoneH;
				};
				class RscText_300: OPTRE_HUD_SructuredText
				{
					idc = 300;

					x = 0.876406 * safezoneW + safezoneX;
					y = 0.016 * safezoneH + safezoneY;
					w = 0.118594 * safezoneW;
					h = 0.022 * safezoneH;
								   class Attributes {
									align = "center";
									color = "#070103"; 	
								 };
				};
				class RscText_301: OPTRE_HUD_SructuredText
				{
					idc = 301;

					x = 0.004 * safezoneW + safezoneX;
					y = 0.082 * safezoneH + safezoneY;
					w = 0.0670312 * safezoneW;
					h = 0.044 * safezoneH;

				/*
					x = 0.00499997 * safezoneW + safezoneX;
					y = 0.08 * safezoneH + safezoneY;
					w = 0.495 * safezoneW;
					h = 0.022 * safezoneH;*/
							   class Attributes {
									align = "center";
									color = "#070103"; 	
								 };
								 
				};
				class RscText_302: OPTRE_HUD_SructuredText
				{
					idc = 302;

					x = -0.000156274 * safezoneW + safezoneX;
					y = 0.962 * safezoneH + safezoneY;
					w = 1.00547 * safezoneW;
					h = 0.022 * safezoneH;
				};
				class RscText_303: OPTRE_HUD_SructuredText
				{
					idc = 303;

					x = 0.005 * safezoneW + safezoneX;
					y = 0.181 * safezoneH + safezoneY;
					w = 0.433125 * safezoneW;
					h = 0.561 * safezoneH;
								   class Attributes {
									align = "left";
									color = "#070103"; 	
								 };
				};

		};
	
	};