class OPTRE_ODST_Main_1_red_NoHex {
	
		idd = 8000; 
		duration = 99999; 
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
		//onLoad = "_this execVM (OPTRE_HUD_PATH + 'Scripts\HudLoaders\Fn_HudLoad_ODST1.sqf')";
		
		class Objects
				{
				
					class Compass { 
					//-0.45 // bar, heli quad
					//ONLOAD = "BW_Zone = [0.5,1.2,-0.1]; (_this select 0) spawn {_c = _this; while {true} do { _c ctrlSetPosition BW_Zone;  _c ctrlCommit 0; _c ctrlSetModelDirAndUp [(vectorDir player),[0,0,1]]; sleep 0.01; };};"; // [[ 0,-0.35, ( direction player  * (1 / 360) )],[0, 0.65, -0.35]]
					//colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};		
					
					idc = 880; 
					type = 82; 
					model = "\OPTRE_Hud\compass_mark_org.p3d";
					//model = "\OPTRE_Hud\compass_mark_1.p3d";
					scale = 3; // 3 is good to fit centre of health bar. 
					
					direction[] = {0,0,0}; 
					up[] = {0,0,0}; 
					position[] = {0.5,1.2,0.5};
					
					x = 0.5;
					y = 0.5; 
					z = 0.5; 
					//positionBack[] = {0,0,1.2}; optional 
					
					xBack = 0.5; 
					yBack = 0.5; 
					zBack = 1.2; 
					inBack = 1; 
					
					enableZoom = 0; 
					zoomDuration = 0;				
					
				};
				class Compass3 { 
					//-0.45 // bar, heli quad
					//ONLOAD = "BW_Zone = [0.5,1.2,-0.1]; (_this select 0) spawn {_c = _this; while {true} do { _c ctrlSetPosition BW_Zone;  _c ctrlCommit 0; _c ctrlSetModelDirAndUp [(vectorDir player),[0,0,1]]; sleep 0.01; };};"; // [[ 0,-0.35, ( direction player  * (1 / 360) )],[0, 0.65, -0.35]]
					
					idc = 881; 
					type = 82; 
					model = "\OPTRE_Hud\compass_mark_1_org.p3d";// model = "\OPTRE_Hud\compass_mark_1_org.p3d"; 
					//model = "\OPTRE_Hud\compass_mark_1.p3d";
					scale = 3; // 3 is good to fit centre of health bar. 
					
					direction[] = {0,0,0}; 
					up[] = {0,0,0}; 
					position[] = {0.5,1.2,0.5};
					
					x = 0.5;
					y = 0.5; 
					z = 0.5; 
					//positionBack[] = {0,0,1.2}; optional 
					
					xBack = 0.5; 
					yBack = 0.5; 
					zBack = 1.2; 
					inBack = 1; 
					
					enableZoom = 0; 
					zoomDuration = 0;				
					
				};
				class Compass2 { 
					//-0.45 // bar, heli quad
					//ONLOAD = "BW_Zone = [0.5,1.2,-0.1]; (_this select 0) spawn {_c = _this; while {true} do { _c ctrlSetPosition BW_Zone;  _c ctrlCommit 0; _c ctrlSetModelDirAndUp [(vectorDir player),[0,0,1]]; sleep 0.01; };};"; // [[ 0,-0.35, ( direction player  * (1 / 360) )],[0, 0.65, -0.35]]
					
					idc = 882; 
					type = 82; 
					model = "\OPTRE_Hud\compass_mark_2_org.p3d";
					//model = "\OPTRE_Hud\compass_mark_1.p3d";
					scale = 3; // 3 is good to fit centre of health bar. 
					
					direction[] = {0,0,0}; 
					up[] = {0,0,0}; 
					position[] = {0.5,1.2,0.5};
					
					x = 0.5;
					y = 0.5; 
					z = 0.5; 
					//positionBack[] = {0,0,1.2}; optional 
					
					xBack = 0.5; 
					yBack = 0.5; 
					zBack = 1.2; 
					inBack = 1; 
					
					enableZoom = 0; 
					zoomDuration = 0;				
					
				};
				class Compass1 { 
					//-0.45 // bar, heli quad
					//ONLOAD = "BW_Zone = [0.5,1.2,-0.1]; (_this select 0) spawn {_c = _this; while {true} do { _c ctrlSetPosition BW_Zone;  _c ctrlCommit 0; _c ctrlSetModelDirAndUp [(vectorDir player),[0,0,1]]; sleep 0.01; };};"; // [[ 0,-0.35, ( direction player  * (1 / 360) )],[0, 0.65, -0.35]]
					
					idc = 883; 
					type = 82; 
					model = "\OPTRE_Hud\compass_mark_3_org.p3d"; 
					//model = "\OPTRE_Hud\compass_mark_1.p3d";
					scale = 3; // 3 is good to fit centre of health bar. 
					
					direction[] = {0,0,0}; 
					up[] = {0,0,0}; 
					position[] = {0.5,1.2,0.5};
					
					x = 0.5;
					y = 0.5; 
					z = 0.5; 
					//positionBack[] = {0,0,1.2}; optional 
					
					xBack = 0.5; 
					yBack = 0.5; 
					zBack = 1.2; 
					inBack = 1; 
					
					enableZoom = 0; 
					zoomDuration = 0;				
					
				};				
				
		}; 
		
		class controls {
		
			// Main Frame 
			
			// Load Annim Only //
			/*class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;

				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_edges.paa"; //--- ToDo: Localize; 
				x = -0.000156274 * safezoneW + safezoneX;
				y = -0.00599999 * safezoneH + safezoneY;
				w = 1.00031 * safezoneW;
				h = 1.012 * safezoneH;
				colorText[] = {1,0,0,1};
				//onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame; if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade .5; (_this select 0) ctrlCommit 0; _this spawn { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 1;  (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 1; };} else { (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 0; };";
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade .5; (_this select 0) ctrlCommit 0; _this spawn { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 1;  (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 1; };} else { (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 0; };";
			};*/
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;

				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa"; //--- ToDo: Localize;
				x = -0.000156274 * safezoneW + safezoneX;
				y = -0.00599999 * safezoneH + safezoneY;
				w = 1.00031 * safezoneW;
				h = 1.012 * safezoneH;
				colorText[] = {1,0,0,1};
				//onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame; if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			};
			// Load Annim Only //
			
			
			// Main Frame //
			/*class RscPicture_122: OPTRE_HUD_RscPicture
			{
				idc = 3;

				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_edges.paa"; //--- ToDo: Localize;
				x = -0.000156274 * safezoneW + safezoneX;
				y = -0.00599999 * safezoneH + safezoneY;
				w = 1.00031 * safezoneW;
				h = 1.012 * safezoneH;
				colorText[] = {1,0,0,1};
				onLoad = "(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;";
			};*/
			class RscPicture_123: OPTRE_HUD_RscPicture
			{
				idc = 4;

				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_edges.paa"; //--- ToDo: Localize;
				x = -0.000156274 * safezoneW + safezoneX;
				y = -0.00599999 * safezoneH + safezoneY;
				w = 1.00031 * safezoneW;
				h = 1.012 * safezoneH;
				colorText[] = {1,0.1,0.1,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
			};
			
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Kaxaju)
			////////////////////////////////////////////////////////

			class RscText_1000: OPTRE_HUD_RscPicture
			{
				idc = 10001;
				text = ""; //--- ToDo: Localize;
				x = 0.484531 * safezoneW + safezoneX;
				y = 0.112 * safezoneH + safezoneY;
				w = 0.0103125 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class RscText_10002: OPTRE_HUD_RscPicture
			{
				idc = 10002;
				text = ""; //--- ToDo: Localize;
				x = 0.494844 * safezoneW + safezoneX;
				y = 0.112 * safezoneH + safezoneY;
				w = 0.0103125 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class RscText_10003: OPTRE_HUD_RscPicture
			{
				idc = 10003;
				text = ""; //--- ToDo: Localize;
				x = 0.505156 * safezoneW + safezoneX;
				y = 0.112 * safezoneH + safezoneY;
				w = 0.0103125 * safezoneW;
				h = 0.022 * safezoneH;
			};
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT END
			////////////////////////////////////////////////////////

					
			// Icon Displays
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				//text = "#(argb,8,8,3)color(1,1,1,1)";
				x = 0.876406 * safezoneW + safezoneX;
				y = 0.786 * safezoneH + safezoneY;
				w = 0.12375 * safezoneW;
				h = 0.088 * safezoneH;
				//onLoad = "(_this select 0) ctrlSetText (getText (configFile >> 'CfgWeapons' >> (currentWeapon player) >> 'picture')); (_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures;";
			};			
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				//text = "#(argb,8,8,3)color(1,0,0,1)";
				x = 0.938281 * safezoneW + safezoneX;
				y = 0.918 * safezoneH + safezoneY;
				w = 0.061875 * safezoneW;
				h = 0.055 * safezoneH;
				//onLoad = "(_this select 0) ctrlSetText (if (currentWeapon player == primaryWeapon player) then { (getText (configFile >> 'CfgWeapons' >> (handgunWeapon player) >> 'picture')) } else { (getText (configFile >> 'CfgWeapons' >> (primaryWeapon player) >> 'picture')) }); (_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures;";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				//text = "#(argb,8,8,3)color(0,1,0,1)";
				x = 0.891875 * safezoneW + safezoneX;
				y = 0.918 * safezoneH + safezoneY;
				w = 0.04125 * safezoneW;
				h = 0.066 * safezoneH;
				//onLoad = "_grenDetail = currentThrowable player; if (count _grenDetail > 0) then { _gren = _grenDetail select 0; (_this select 0) ctrlSetText (getText (configFile >> 'CfgMagazines' >> _gren >> 'picture')); }; (_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures;";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				//text = "#(argb,8,8,3)color(0,0,1,1)";
				x = 0.752656 * safezoneW + safezoneX;
				y = 0.885 * safezoneH + safezoneY;
				w = 0.0825 * safezoneW;
				h = 0.066 * safezoneH;
				//onLoad = "(_this select 0) ctrlSetText (getText (configFile >> 'CfgWeapons' >> (secondaryWeapon player) >> 'picture')); (_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures;";
			};			
			
			
			// Ammo Count
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				//text = "Data\Numbers\1.paa";
				x = 0.850625 * safezoneW + safezoneX;
				y = 0.808 * safezoneH + safezoneY;
				w = 0.0257812 * safezoneW;
				h = 0.044 * safezoneH;
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				//text = "Data\Numbers\2.paa";
				x = 0.824844 * safezoneW + safezoneX;
				y = 0.808 * safezoneH + safezoneY;
				w = 0.0257812 * safezoneW;
				h = 0.044 * safezoneH;
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				//text = "Data\Numbers\3.paa";
				x = 0.799062 * safezoneW + safezoneX;
				y = 0.808 * safezoneH + safezoneY;
				w = 0.0257812 * safezoneW;
				h = 0.044 * safezoneH;
			};

			class RscPicture_104: OPTRE_HUD_RscPicture
			{
				idc = 104;
				//text = "Data\Numbers\4.paa";
				x = 0.866094 * safezoneW + safezoneX;
				y = 0.918 * safezoneH + safezoneY;
				w = 0.0257812 * safezoneW;
				h = 0.044 * safezoneH;
			};
			class RscPicture_105: OPTRE_HUD_RscPicture
			{
				idc = 105;
				//text = "Data\Numbers\5.paa";
				x = 0.840312 * safezoneW + safezoneX;
				y = 0.918 * safezoneH + safezoneY;
				w = 0.0257812 * safezoneW;
				h = 0.044 * safezoneH;
			};
			
			
			// Info: 
			class RscText_300: OPTRE_HUD_SructuredText
			{
				idc = 300;
				//text = "Semi  300m"; //--- ToDo: Localize;
				x = 0.876406 * safezoneW + safezoneX;
				y = 0.775 * safezoneH + safezoneY;
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
				//text = "Smoke Grenade Whilte"; //--- ToDo: Localize;
				x = 0.396875 * safezoneW + safezoneX;
				y = 0.962 * safezoneH + safezoneY;
				w = 0.495 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class RscText_302: OPTRE_HUD_SructuredText
			{
				idc = 302;
				//text = "RID: Cpt Big_Wilk LOC: 000000 TIME: 00:00:00"; //--- ToDo: Localize;
				x = -0.000156496 * safezoneW + safezoneX;
				y = 0.962 * safezoneH + safezoneY;
				w = 1.00547 * safezoneW;
				h = 0.022 * safezoneH;
				 class Attributes {
					align = "center";
					color = "#070103"; 	
				  };
			};
			class RscText_303: OPTRE_HUD_SructuredText
			{
				idc = 303;
				x = 0.29375 * safezoneW + safezoneX;
				y = 0.110 * safezoneH + safezoneY;
				w = 0.4125 * safezoneW;
				h = 0.021 * safezoneH;
				//size = 0.025;
				class Attributes {
					align = "center";
					color = "#070103"; 	
				};
			};

		};
	
	};