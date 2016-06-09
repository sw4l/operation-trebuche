#define true 1
#define false 0

class OPTRE_HUD_GenralSettings
{
	idd = 11000;                      // set to -1, because we don't require a unique ID
	movingEnable = true;           // the dialog can be moved with the mouse (see "moving" below)
	enableSimulation = true;      // freeze the game
	controlsBackground[] = { };    // no background controls needed
	
	//onLoad = "OPTRE_Hud_SettingsOpen = True;";
	onUnLoad = "0 = [] execVM 'OPTRE_FunctionsLibrary\Scripts\UpdateMenusIf.sqf';";
	
 	class Objects {
	
	};   
	
    class Controls
    {

		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Ligyso)
		////////////////////////////////////////////////////////
		class RscListbox_1500: OPTRE_HUD_RscListbox
		{
			idc = 1500;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.341 * safezoneH;
			onLoad = "{   _i = (_this select 0) lbAdd (_x select 0);   (_this select 0) lbSetData [_i,(_x select 1)];  } forEach OPTRE_HUD_ListOfAvalibleMenus; (_this select 0) lbSetCurSel OPTRE_HUD_CurrentSelectedMenu;";
			onLBSelChanged = "_n = (_this select 1); if (_n > OPTRE_HUD_CurrentSelectedMenu OR _n < OPTRE_HUD_CurrentSelectedMenu) then { [_n] spawn {OPTRE_HUD_CurrentSelectedMenu = (_this select 0); closeDialog 0; waitUntil {!dialog}; createDialog (OPTRE_HUD_ListOfAvalibleMenus select OPTRE_HUD_CurrentSelectedMenu select 1);}; }; ";
		};
		class RscButton_m1: OPTRE_HUD_RscButton
		{
			idc = -1;
			text = "Update HUD Settings";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "0 = [] execVM 'OPTRE_FunctionsLibrary\Scripts\UpdateMenusIf.sqf';";	
		};
		class BW_OPTRE_HUD_RscText_1000: OPTRE_HUD_RscText
		{
			idc = 1000;

			text = "General Settings"; //--- ToDo: Localize;
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCheckbox_2800: OPTRE_HUD_RscCheckBox
		{
			idc = 2800;
			onCheckedChanged = "if OPTRE_HUD_CompassWanted then {OPTRE_HUD_CompassWanted = false;} else {OPTRE_HUD_CompassWanted = true;};";
			OnLoad = "(_this select 0) cbSetChecked OPTRE_HUD_CompassWanted;";
			
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class BW_OPTRE_HUD_RscText_1001: OPTRE_HUD_RscText
		{
			idc = 1001;

			text = "Show Compass "; //--- ToDo: Localize;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_RscCombo_1503: OPTRE_HUD_RscCombo
		{
			idc = 1503;
			onLBSelChanged = "OPTRE_LHD_Function = (lbCurSel (_this select 0)); 0 = [] execVM 'OPTRE_FunctionsLibrary\Scripts\UpdateMenusIf.sqf';";
			OnLoad = " {_index = (_this select 0) lbAdd (format ['Left Hand Display Mode: %1',(_x select 0)]) ;  } forEach [   ['Off',0],   ['IFF System',1],   ['Squad Shoulder Cameras',2],   ['Tactical Map / Route Card Display',3]  ];   (_this select 0) lbSetCurSel OPTRE_LHD_Function;";

			x = 0.432969 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class BW_OPTRE_HUD_RscText_1002: OPTRE_HUD_RscText
		{
			idc = 1002;

			text = "Radar Settings: "; //--- ToDo: Localize;
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class BW_OPTRE_HUD_RscText_1003: OPTRE_HUD_RscText
		{
			idc = 1003;
			onLoad = "(_this select 0) ctrlSetText (format ['Radar Zoom: %1m',round ((OPTRE_Hud_RadarScale / 0.01) * 50)]);";
			
			text = "Radar Zoom: 50m"; //--- ToDo: Localize;
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscSlider_1900: OPTRE_HUD_RscSlider
		{
			idc = 1900;
			onSliderPosChanged = "OPTRE_Hud_RadarScale = sliderPosition ( ( findDisplay 11000 ) displayCtrl 1900 ); ( ( findDisplay 11000 ) displayCtrl 1003 ) ctrlSetText (format ['Radar Zoom: %1m',round ((OPTRE_Hud_RadarScale / 0.01) * 50)]); ";
			OnLoad = "(_this select 0) sliderSetRange [0.01, 0.1]; (_this select 0) sliderSetSpeed [0.01, 0.01]; (_this select 0) sliderSetPosition OPTRE_Hud_RadarScale;";
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_RscCombo_1504: OPTRE_HUD_RscCombo
		{
			idc = 1504;
			onLBSelChanged = "OPTRE_Hud_RadarMode = (lbCurSel (_this select 0)); ";
			OnLoad = "if (isNil 'OPTRE_Hud_RadarMode2Allowed') then {OPTRE_Hud_RadarMode2Allowed = 2;}; { if !((_x select 1) > OPTRE_Hud_RadarMode2Allowed) then {_index = (_this select 0) lbAdd (format ['Radar Shows: %1',(_x select 0)]) ; };  } forEach [ ['Group',0], ['Side',1], ['Side & Known Enemy',2] ] ; (_this select 0) lbSetCurSel OPTRE_Hud_RadarMode;";
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class BW_OPTRE_HUD_RscText_1004: OPTRE_HUD_RscText
		{
			idc = 1004;

			text = "Squad PIP "; //--- ToDo: Localize;
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_RscCombo_1505: OPTRE_HUD_RscCombo
		{
			idc = 1505;
			onLBSelChanged = "OPTRE_LHD_PIPSel = (lbCurSel (_this select 0)); ";
			OnLoad = "{   _index = (_this select 0) lbAdd (format ['Should Camera Vein: %1 %2',rank _x, name _x]) ;  } forEach units group player - [player];  (_this select 0) lbSetCurSel OPTRE_LHD_PIPSel;";
			
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_RscCombo_1506: OPTRE_HUD_RscCombo
		{
			idc = 1506;
			onLBSelChanged = "OPTRE_HUD_PIP_NVGTI = lbCurSel (_this select 0); ";
			OnLoad = "{   _index = {   _index = (_this select 0) lbAdd (format ['Should Camera Vein: %1 %2',rank _x, name _x]) ;  } forEach units group player - [player];  (_this select 0) lbSetCurSel OPTRE_LHD_PIPSel; (_this select 0) lbAdd (format ['Shoulder Camera Mode: %1',(_x select 0)]) ;  } forEach [   ['Normal',0],   ['Night Vision',1],   ['Thermal Vision',2]  ];   (_this select 0) lbSetCurSel OPTRE_HUD_PIP_NVGTI;";

			x = 0.432969 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};

		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////

	/*
	////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Ryxygo)
////////////////////////////////////////////////////////
			class RscPicture_1: OPTRE_HUD_RscPicture
			{
				idc = 1;

				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_hex.paa"; //--- ToDo: Localize;
				x = -0.000156274 * safezoneW + safezoneX;
				y = -0.00599999 * safezoneH + safezoneY;
				w = 1.00031 * safezoneW;
				h = 1.012 * safezoneH;
				//colorText[] = {1,1,1,1};
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame; (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 0; (_this select 0) ctrlSetFade 0.75; (_this select 0) ctrlCommit 1;";
			};
			class RscPicture_2: OPTRE_HUD_RscPicture
			{
				idc = 2;

				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_edges_hex.paa"; //--- ToDo: Localize;
				x = -0.000156274 * safezoneW + safezoneX;
				y = -0.00599999 * safezoneH + safezoneY;
				w = 1.00031 * safezoneW;
				h = 1.012 * safezoneH;
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame; (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0; ";
			};

			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Ridely)
			////////////////////////////////////////////////////////

			class OPTRE_HUD_RscText_991: OPTRE_HUD_RscText
			{
				idc = 991;
				OnLoad = "(_this select 0) ctrlSetText format ['NOTE JUST LIKE THE HUD SYSTEM, THIS MENU IS A W.I.P. AS SUCH SOME FEATURES WONT WORK OR ARE MISSING INCLUDEING THE ARTWORK.       FUTURE PLANS INCLUDE:       * We will replace the weapon icons with custom icons, for now we d recommend using the colour black with pictures and text icons. (Anything but black will look crap for now, the options are just there for testing purposes.. though you can use them if you wish.).     * A custom, more stylised text font.     * More custom models for Marines / Army GLASSES.     * A Custom Model for Marines / Army Eye Piece.     * Custom ONI hud.     * Custom ODST Sniper hud.     * Custom Pilot hud. '];";
				size = 0.04;

				x = 0.716562 * safezoneW + safezoneX;
				y = 0.148 * safezoneH + safezoneY;
				w = 0.278437 * safezoneW;
				h = 0.385 * safezoneH;
				colorBackground[] = {0,0,0,0.9};
			};
			class BW_OPTRE_HUD_RscText_1000: OPTRE_HUD_RscText
			{
				idc = 1000;

				text = "General Settings"; //--- ToDo: Localize;
				x = 0.510312 * safezoneW + safezoneX;
				y = 0.225 * safezoneH + safezoneY;
				w = 0.195937 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class OPTRE_RscCombo_1500: OPTRE_HUD_RscCombo
			{
				idc = 1500;
				onLBSelChanged = "_c = ((_this select 0) lbData (lbCurSel (_this select 0))); profileNamespace setVariable ['OPTRE_ODST_HUDColourPict', _c];";
				
				x = 0.510312 * safezoneW + safezoneX;
				y = 0.621 * safezoneH + safezoneY;
				w = 0.195937 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class OPTRE_RscCombo_1501: OPTRE_HUD_RscCombo
			{
				idc = 1501;
				onLBSelChanged = "_c = ((_this select 0) lbData (lbCurSel (_this select 0))); profileNamespace setVariable ['OPTRE_ODST_HUDColourText', _c];";

				x = 0.510312 * safezoneW + safezoneX;
				y = 0.588 * safezoneH + safezoneY;
				w = 0.195937 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class OPTRE_RscCombo_1502: OPTRE_HUD_RscCombo
			{
				idc = 1502;
				onLBSelChanged = "_c = ((_this select 0) lbData (lbCurSel (_this select 0))); profileNamespace setVariable ['OPTRE_ODST_HUDColourMain', _c];";
				
				x = 0.29375 * safezoneW + safezoneX;
				y = 0.258 * safezoneH + safezoneY;
				w = 0.20625 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class RscCheckbox_2800: OPTRE_HUD_RscCheckBox
			{
				idc = 2800;
				onCheckedChanged = "if OPTRE_HUD_CompassWanted then {OPTRE_HUD_CompassWanted = false;} else {OPTRE_HUD_CompassWanted = true;};";

				x = 0.510312 * safezoneW + safezoneX;
				y = 0.291 * safezoneH + safezoneY;
				w = 0.0103125 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class BW_OPTRE_HUD_RscText_1001: OPTRE_HUD_RscText
			{
				idc = 1001;

				text = "Show Compass "; //--- ToDo: Localize;
				x = 0.525781 * safezoneW + safezoneX;
				y = 0.291 * safezoneH + safezoneY;
				w = 0.180469 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class OPTRE_RscCombo_1503: OPTRE_HUD_RscCombo
			{
				idc = 1503;
				onLBSelChanged = "OPTRE_LHD_Function = (lbCurSel ((findDisplay 11000) displayCtrl 1503));";

				x = 0.510312 * safezoneW + safezoneX;
				y = 0.258 * safezoneH + safezoneY;
				w = 0.195937 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class BW_OPTRE_HUD_RscText_1002: OPTRE_HUD_RscText
			{
				idc = 1002;

				text = "Radar Settings: "; //--- ToDo: Localize;
				x = 0.510312 * safezoneW + safezoneX;
				y = 0.324 * safezoneH + safezoneY;
				w = 0.195937 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class BW_OPTRE_HUD_RscText_1003: OPTRE_HUD_RscText
			{
				idc = 1003;

				text = "Radar Zoom: 50m"; //--- ToDo: Localize;
				x = 0.510312 * safezoneW + safezoneX;
				y = 0.357 * safezoneH + safezoneY;
				w = 0.195937 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class RscSlider_1900: OPTRE_HUD_RscSlider
			{
				idc = 1900;
				onSliderPosChanged = "OPTRE_Hud_RadarScale = sliderPosition ( ( findDisplay 11000 ) displayCtrl 1900 ); ( ( findDisplay 11000 ) displayCtrl 1003 ) ctrlSetText (format ['Radar Zoom: %1m',round ((OPTRE_Hud_RadarScale / 0.01) * 50)]);";

				x = 0.510312 * safezoneW + safezoneX;
				y = 0.39 * safezoneH + safezoneY;
				w = 0.195937 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class OPTRE_RscCombo_1504: OPTRE_HUD_RscCombo
			{
				idc = 1504;
				onLBSelChanged = "OPTRE_Hud_RadarMode = (lbCurSel ((findDisplay 11000) displayCtrl 1504));";

				x = 0.510312 * safezoneW + safezoneX;
				y = 0.423 * safezoneH + safezoneY;
				w = 0.195937 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class BW_OPTRE_HUD_RscText_1004: OPTRE_HUD_RscText
			{
				idc = 1004;

				text = "Squad PIP "; //--- ToDo: Localize;
				x = 0.505156 * safezoneW + safezoneX;
				y = 0.456 * safezoneH + safezoneY;
				w = 0.195937 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class OPTRE_RscCombo_1505: OPTRE_HUD_RscCombo
			{
				idc = 1505;
				onLBSelChanged = "OPTRE_LHD_PIPSel = (lbCurSel ((findDisplay 11000) displayCtrl 1505));";

				x = 0.510312 * safezoneW + safezoneX;
				y = 0.489 * safezoneH + safezoneY;
				w = 0.195937 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class OPTRE_RscCombo_1506: OPTRE_HUD_RscCombo
			{
				idc = 1506;
				onLBSelChanged = "OPTRE_HUD_PIP_NVGTI = lbCurSel (_this select 0);";

				x = 0.510312 * safezoneW + safezoneX;
				y = 0.522 * safezoneH + safezoneY;
				w = 0.195937 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class OPTRE_HUD_RscText_91: OPTRE_HUD_RscText
			{
				idc = 91;

				text = "Text"; //--- ToDo: Localize;
				x = 0.29375 * safezoneW + safezoneX;
				y = 0.291 * safezoneH + safezoneY;
				w = 0.0464063 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class OPTRE_HUD_RscText_92: OPTRE_HUD_RscText
			{
				idc = 92;

				text = "Pictures"; //--- ToDo: Localize;
				x = 0.345312 * safezoneW + safezoneX;
				y = 0.291 * safezoneH + safezoneY;
				w = 0.0464063 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class OPTRE_HUD_RscText_93: OPTRE_HUD_RscText
			{
				idc = 93;

				text = "Map / GPS"; //--- ToDo: Localize;
				x = 0.510312 * safezoneW + safezoneX;
				y = 0.555 * safezoneH + safezoneY;
				w = 0.195937 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class RscListbox_1500: OPTRE_HUD_RscListBox
			{
				idc = -1;
				x = 0.314375 * safezoneW + safezoneX;
				y = 0.368 * safezoneH + safezoneY;
				w = 0.149531 * safezoneW;
				h = 0.264 * safezoneH;
				onLoad = "{_i = (_this select 0) lbAdd (_x select 0); (_this select 0) lbSetData [_i, (_x select 1)];} forEach OPTRE_HUD_ListOfAvalibleMenus;";
				onLBSelChanged = "_n = (_this select 1); if ( (_n > OPTRE_HUD_CurrentSelectedMenu) OR (_n < OPTRE_HUD_CurrentSelectedMenu) ) then {createDialog (OPTRE_HUD_ListOfAvalibleMenus select _n select 1);} else {hint 'no change';};";
			};	*/
	};
	
};