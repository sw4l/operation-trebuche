#define true 1
#define false 0

class OPTRE_HUD_ODST_Menu
{
	idd = 11000;                      // set to -1, because we don't require a unique ID
	movingEnable = true;           // the dialog can be moved with the mouse (see "moving" below)
	enableSimulation = true;      // freeze the game
	controlsBackground[] = { };    // no background controls needed
	
	onLoad = "OPTRE_Hud_On = false; 0 = _this spawn OPTRE_fnc_Menu;";
	onUnLoad = "0 = true spawn OPTRE_fnc_ToggleVisor; ";
	
 	class Objects {
	
	};   
	
    class Controls
    {

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
			
			
			
			
			
			
			
			
			class OPTRE_HUD_RscText_90: OPTRE_HUD_RscText
			{
				idc = 90;

				text = "ODST Coustomisation"; //--- ToDo: Localize;
				x = 0.29375 * safezoneW + safezoneX;
				y = 0.225 * safezoneH + safezoneY;
				w = 0.20625 * safezoneW;
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
			class OPTRE_HUD_RscText_94: OPTRE_HUD_SructuredText
			{
				idc = 94;

				text = "R"; //--- ToDo: Localize;
				x = 0.335 * safezoneW + safezoneX;
				y = 0.313 * safezoneH + safezoneY;
				w = 0.0103125 * safezoneW;
				h = 0.022 * safezoneH;
				size = 0.20;
				class Attributes {
					align = "centre";
					color = "#070103"; 
				};
			};
			class OPTRE_HUD_RscText_95: OPTRE_HUD_SructuredText
			{
				idc = 95;

				text = "G"; //--- ToDo: Localize;
				x = 0.335 * safezoneW + safezoneX;
				y = 0.346 * safezoneH + safezoneY;
				w = 0.0103125 * safezoneW;
				h = 0.022 * safezoneH;
				size = 0.20;
				class Attributes {
					align = "centre";
					color = "#070103"; 
				};
			};
			class OPTRE_HUD_RscText_96: OPTRE_HUD_SructuredText
			{
				idc = 96;

				text = "B"; //--- ToDo: Localize;
				x = 0.335 * safezoneW + safezoneX;
				y = 0.379 * safezoneH + safezoneY;
				w = 0.0103125 * safezoneW;
				h = 0.022 * safezoneH;
				size = 0.20;
				class Attributes {
					align = "centre";
					color = "#070103"; 
				};
			};
			class OPTRE_HUD_RscText_97: OPTRE_HUD_SructuredText
			{
				idc = 97;

				text = "A"; //--- ToDo: Localize;
				x = 0.335 * safezoneW + safezoneX;
				y = 0.412 * safezoneH + safezoneY;
				w = 0.0103125 * safezoneW;
				h = 0.022 * safezoneH;
				size = 0.20;
				class Attributes {
					align = "centre";
					color = "#070103"; 
				};
			};
			
			
			class OPTRE_HUD_RscListBox_150: OPTRE_HUD_RscListBox
			{
				idc = 150;
				x = 0.391718 * safezoneW + safezoneX;
				y = 0.291 * safezoneH + safezoneY;
				w = 0.108281 * safezoneW;
				h = 0.143 * safezoneH;
				colorDisabled[] = {1,1,1,0.2};				
				OnLoad = "{_i = ((_this select 0) lbAdd (_x select 0));} forEach (profileNameSpace getVariable ['OPTRE_ODST_HUDSavedSchemes',[]]); lbSort (_this select 0);";
			
			};


			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "#(argb,8,8,3)color(1,1,1,1)";
				x = 0.29375 * safezoneW + safezoneX;
				y = 0.313 * safezoneH + safezoneY;
				w = 0.0103125 * safezoneW;
				h = 0.121 * safezoneH;
				OnLoad = "(_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[0.5,0,0,1]]);";
			};			
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "#(argb,8,8,3)color(1,1,1,1)";
				x = 0.37625 * safezoneW + safezoneX;
				y = 0.313 * safezoneH + safezoneY;
				w = 0.0103125 * safezoneW;
				h = 0.121 * safezoneH;
				OnLoad = "(_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourPictNEW"",[0.5,0,0,1]]);";
			};
			
			class OPTRE_HUD_RscEdit_140: OPTRE_HUD_RscEdit
			{
				idc = 140;
				x = 0.391719 * safezoneW + safezoneX;
				y = 0.434 * safezoneH + safezoneY;
				w = 0.108281 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class OPTRE_HUD_RscEdit_1401: OPTRE_HUD_RscEdit
			{
				idc = 141;
				text = ""; //--- ToDo: Localize;
				x = 0.309219 * safezoneW + safezoneX;
				y = 0.313 * safezoneH + safezoneY;
				w = 0.0257812 * safezoneW;
				h = 0.022 * safezoneH;
				onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));} forEach [141,142,143,144]; profileNamespace setVariable [""OPTRE_ODST_HUDColourTextNEW"",_colourArray]; (( findDisplay 11000 ) displayCtrl 1200) ctrlSetTextColor _colourArray;";
				onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[0.5,0,0,1]]) select 0);";
			};
			class OPTRE_HUD_RscEdit_1402: OPTRE_HUD_RscEdit
			{
				idc = 142;
				text = "12"; //--- ToDo: Localize;
				x = 0.309219 * safezoneW + safezoneX;
				y = 0.346 * safezoneH + safezoneY;
				w = 0.0257812 * safezoneW;
				h = 0.022 * safezoneH;
				onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));} forEach [141,142,143,144]; profileNamespace setVariable [""OPTRE_ODST_HUDColourTextNEW"",_colourArray]; (( findDisplay 11000 ) displayCtrl 1200) ctrlSetTextColor _colourArray;";
				onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[0.5,0,0,1]]) select 1);";
			};
			class OPTRE_HUD_RscEdit_1403: OPTRE_HUD_RscEdit
			{
				idc = 143;
				text = "13"; //--- ToDo: Localize;
				x = 0.309219 * safezoneW + safezoneX;
				y = 0.379 * safezoneH + safezoneY;
				w = 0.0257812 * safezoneW;
				h = 0.022 * safezoneH;
				onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));} forEach [141,142,143,144]; profileNamespace setVariable [""OPTRE_ODST_HUDColourTextNEW"",_colourArray]; (( findDisplay 11000 ) displayCtrl 1200) ctrlSetTextColor _colourArray;";
				onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[0.5,0,0,1]]) select 2);";
			};
			class OPTRE_HUD_RscEdit_1404: OPTRE_HUD_RscEdit
			{
				idc = 144;
				text = "14"; //--- ToDo: Localize;
				x = 0.309219 * safezoneW + safezoneX;
				y = 0.412 * safezoneH + safezoneY;
				w = 0.0257812 * safezoneW;
				h = 0.022 * safezoneH;
				onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));} forEach [141,142,143,144]; profileNamespace setVariable [""OPTRE_ODST_HUDColourTextNEW"",_colourArray]; (( findDisplay 11000 ) displayCtrl 1200) ctrlSetTextColor _colourArray;"; 
				onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[0.5,0,0,1]]) select 3);";
			};
			class OPTRE_HUD_RscEdit_1405: OPTRE_HUD_RscEdit
			{
				idc = 1405;
				text = "21"; //--- ToDo: Localize;
				x = 0.345312 * safezoneW + safezoneX;
				y = 0.313 * safezoneH + safezoneY;
				w = 0.0257812 * safezoneW;
				h = 0.022 * safezoneH;
				onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));} forEach [1405,1406,1407,1408]; profileNamespace setVariable [""OPTRE_ODST_HUDColourPictNEW"",_colourArray]; (( findDisplay 11000 ) displayCtrl 1201) ctrlSetTextColor _colourArray;";	
				onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable [""OPTRE_ODST_HUDColourPictNEW"",[0.5,0,0,1]]) select 0);";	
			};
			class OPTRE_HUD_RscEdit_1406: OPTRE_HUD_RscEdit
			{
				idc = 1406;
				text = "22"; //--- ToDo: Localize;
				x = 0.345312 * safezoneW + safezoneX;
				y = 0.346 * safezoneH + safezoneY;
				w = 0.0257812 * safezoneW;
				h = 0.022 * safezoneH;
				onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));} forEach [1405,1406,1407,1408]; profileNamespace setVariable [""OPTRE_ODST_HUDColourPictNEW"",_colourArray]; (( findDisplay 11000 ) displayCtrl 1201) ctrlSetTextColor _colourArray;"; 
				onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable [""OPTRE_ODST_HUDColourPictNEW"",[0.5,0,0,1]]) select 1);";
			};
			class OPTRE_HUD_RscEdit_1407: OPTRE_HUD_RscEdit
			{
				idc = 1407;
				text = "23"; //--- ToDo: Localize;
				x = 0.345312 * safezoneW + safezoneX;
				y = 0.379 * safezoneH + safezoneY;
				w = 0.0257812 * safezoneW;
				h = 0.022 * safezoneH;
				onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));} forEach [1405,1406,1407,1408]; profileNamespace setVariable [""OPTRE_ODST_HUDColourPictNEW"",_colourArray]; (( findDisplay 11000 ) displayCtrl 1201) ctrlSetTextColor _colourArray;"; 
				onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable [""OPTRE_ODST_HUDColourPictNEW"",[0.5,0,0,1]]) select 2);";
			};
			class OPTRE_HUD_RscEdit_1408: OPTRE_HUD_RscEdit
			{
				idc = 1408;
				text = "24"; //--- ToDo: Localize;
				x = 0.345312 * safezoneW + safezoneX;
				y = 0.412 * safezoneH + safezoneY;
				w = 0.0257812 * safezoneW;
				h = 0.022 * safezoneH;
				onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));} forEach [1405,1406,1407,1408]; profileNamespace setVariable [""OPTRE_ODST_HUDColourPictNEW"",_colourArray]; (( findDisplay 11000 ) displayCtrl 1201) ctrlSetTextColor _colourArray;"; 
				onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable [""OPTRE_ODST_HUDColourPictNEW"",[0.5,0,0,1]]) select 3);";
			};
			
			class OPTRE_HUD_RscButton_1600: OPTRE_HUD_RscButton
			{
				idc = 160;
				text = "Save"; //--- ToDo: Localize;
				x = 0.391719 * safezoneW + safezoneX;
				y = 0.467 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.022 * safezoneH;
				onButtonClick = "   _savedVariable = profileNameSpace getVariable ['OPTRE_ODST_HUDSavedSchemes',[]];   _colourArrayText = [];    _colourArrayPict = [];    _savedName = (ctrlText (( findDisplay 11000 ) displayCtrl 140));     if !(_savedName == '' OR _savedName == 'Enter A Valid Name' OR _savedName == 'Name Used') then {      if !({_savedName == (_x select 0)} count _savedVariable > 0) then {         {      _colourArrayText pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));     } forEach [1405,1406,1407,1408];           {      _colourArrayPict pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));     } forEach [141,142,143,144];         _savedVariable pushBack [       _savedName,       ((( findDisplay 11000 ) displayCtrl 1502) lbText (lbCurSel (( findDisplay 11000 ) displayCtrl 1502))),       _colourArrayText,       _colourArrayPict     ];       profileNameSpace setVariable ['OPTRE_ODST_HUDSavedSchemes',_savedVariable];     profileNamespace setVariable ['OPTRE_ODST_HUDColourTextNEW',_colourArrayText];     profileNamespace setVariable ['OPTRE_ODST_HUDColourPictNEW',_colourArrayPict];       _ctrlList = (( findDisplay 11000 ) displayCtrl 150);     lbClear _ctrlList;      {_i = (_ctrlList lbAdd (_x select 0));} forEach (profileNameSpace getVariable ['OPTRE_ODST_HUDSavedSchemes',[]]);        lbSort _ctrlList;   playSound 'AddItemOK';     (( findDisplay 11000 ) displayCtrl 140) ctrlSetTextColor [1,1,1,1];     (( findDisplay 11000 ) displayCtrl 140) ctrlSetText "";         } else {       (( findDisplay 11000 ) displayCtrl 140) ctrlSetText 'Name Used';     (( findDisplay 11000 ) displayCtrl 140) ctrlSetTextColor [1,0,0,1];     playSound 'AddItemFailed';         };     } else {      (( findDisplay 11000 ) displayCtrl 140) ctrlSetText 'Enter A Valid Name';    (( findDisplay 11000 ) displayCtrl 140) ctrlSetTextColor [1,0,0,1];    playSound 'AddItemFailed';       };   ";
			};
			class OPTRE_HUD_RscButton_1601: OPTRE_HUD_RscButton
			{
				idc = 161;
				text = "Load"; //--- ToDo: Localize;
				x = 0.469062 * safezoneW + safezoneX;
				y = 0.467 * safezoneH + safezoneY;
				w = 0.0309375 * safezoneW;
				h = 0.022 * safezoneH;
				onButtonClick = " _savedVariableFull = (profileNameSpace getVariable ['OPTRE_ODST_HUDSavedSchemes',[]]);   _savedVariable = _savedVariableFull select (lbCurSel (( findDisplay 11000 ) displayCtrl 150));      _listBoxText = _savedVariable select 1;   _textArray = _savedVariable select 2;   _pictArray = _savedVariable select 3;      for '_i' from 0 to 3 do {      _ctrl = [141,142,143,144] select _i;    _string = _textArray select _i;     (( findDisplay 11000 ) displayCtrl _ctrl) ctrlSetText str _string;        _ctrl = [1405,1406,1407,1408] select _i;    _string = _pictArray select _i;    (( findDisplay 11000 ) displayCtrl _ctrl) ctrlSetText str _string;       };      profileNamespace setVariable ['OPTRE_ODST_HUDColourTextNEW',_textArray];   profileNamespace setVariable ['OPTRE_ODST_HUDColourPictNEW',_pictArray];      _exitLoop = false;    _count = 0;   While {!_exitLoop} do {    _text = (( findDisplay 11000 ) displayCtrl 1502) lbText _count;    if (_text == _listBoxText) then {     ((findDisplay 11000) displayCtrl 1502) lbSetCurSel _count;     _exitLoop = true;     };    if (_text == '' or 'No control' == str (( findDisplay 11000 ) displayCtrl 1502) ) then {     _exitLoop = true;      ((findDisplay 11000) displayCtrl 1502) lbSetCurSel 0;    };    _count = _count + 1;   };";
			};
			class OPTRE_HUD_RscButton_1608: OPTRE_HUD_RscButton
			{
				idc = 1608;
				text = "Del"; //--- ToDo: Localize;
				x = 0.432969 * safezoneW + safezoneX;
				y = 0.467 * safezoneH + safezoneY;
				w = 0.0309375 * safezoneW;
				h = 0.022 * safezoneH;
				onButtonClick = "   _savedVariableFull = (profileNameSpace getVariable ['OPTRE_ODST_HUDSavedSchemes',[]]);   _curSel = (lbCurSel (( findDisplay 11000 ) displayCtrl 150));    if (_curSel > -1) then {        _savedVariableFullMinus = _savedVariableFull - [(_savedVariableFull select _curSel)];    profileNameSpace setVariable ['OPTRE_ODST_HUDSavedSchemes',_savedVariableFullMinus];        _ctrlList = (( findDisplay 11000 ) displayCtrl 150);    lbClear _ctrlList;     {_i = (_ctrlList lbAdd (_x select 0));} forEach (profileNameSpace getVariable ['OPTRE_ODST_HUDSavedSchemes',[]]);     lbSort _ctrlList;    playSound 'AddItemOK';       } else {       playSound 'AddItemFailed';       };   ";
			};
			class OPTRE_HUD_RscButton_1602: OPTRE_HUD_RscButton
			{
				idc = 1602;
				text = "Random"; //--- ToDo: Localize;
				x = 0.29375 * safezoneW + safezoneX;
				y = 0.445 * safezoneH + safezoneY;
				w = 0.04125 * safezoneW;
				h = 0.044 * safezoneH;
			};
			class OPTRE_HUD_RscButton_1603: OPTRE_HUD_RscButton
			{
				idc = 1603;
				text = "Random"; //--- ToDo: Localize;
				x = 0.345312 * safezoneW + safezoneX;
				y = 0.445 * safezoneH + safezoneY;
				w = 0.04125 * safezoneW;
				h = 0.044 * safezoneH;
			};
			class OPTRE_HUD_RscButton_1604: OPTRE_HUD_RscButton
			{
				idc = 1604;
				text = "Need Help?"; //--- ToDo: Localize;
				x = 0.443281 * safezoneW + safezoneX;
				y = 0.225 * safezoneH + safezoneY;
				w = 0.0567187 * safezoneW;
				h = 0.022 * safezoneH;
			};
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT END
			////////////////////////////////////////////////////////

/*class OPTRE_HUD_RscText_991: OPTRE_HUD_RscText
{
	idc = 991;
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.489 * safezoneH + safezoneY;
	w = 0.4125 * safezoneW;
	h = 0.396 * safezoneH;
	OnLoad = "(_this select 0) ctrlSetText format ['WARNING JUST LIKE THE HUD SYSTEM, THIS MENU IS A W.I.P. AS SUCH SOME FEATURES WONT WORK OR ARE MISSING INCLUDEING THE ARTWORK.\n\nFUTURE PLANS INCLUDE:\n\n* We will replace the weapon icons with custom icons, for now we d recommend using the colour black with pictures and text icons. (Anything but black will look crap for now, the options are just there for testing purposes.. though you can use them if you wish.).\n* A custom, more stylised text font.\n* More custom models for Marines / Army GLASSES.\n* A Custom Model for Marines / Army Eye Piece.\n* Custom ONI hud.\n* Custom ODST Sniper hud.\n* Custom Pilot hud.  '];";   
	class Attributes {
		align = "left";
		color = "#771800"; 	
	};
	 size = 0.040;
	  colorBackground[] = { 0,0,0,0.9 }; 
};

class BW_OPTRE_HUD_RscText_1000: OPTRE_HUD_OPTRE_HUD_RscText
{
	idc = 1000;
	text = "General Settings"; //--- ToDo: Localize;
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.225 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.022 * safezoneH;
};
class OPTRE_RscCombo_1500: OPTRE_HUD_RscCombo
{
	idc = 1500;
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.258 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.022 * safezoneH;
	onLBSelChanged = "_c = ((_this select 0) lbData (lbCurSel (_this select 0))); profileNamespace setVariable [""OPTRE_ODST_HUDColourPict"", _c];";
};
class OPTRE_RscCombo_1501: OPTRE_HUD_RscCombo
{
	idc = 1501;
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.022 * safezoneH;
	onLBSelChanged = "_c = ((_this select 0) lbData (lbCurSel (_this select 0))); profileNamespace setVariable [""OPTRE_ODST_HUDColourText"", _c];";
};
class OPTRE_RscCombo_1502: OPTRE_HUD_RscCombo
{
	idc = 1502;
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.324 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.022 * safezoneH;
	onLBSelChanged = "_c = ((_this select 0) lbData (lbCurSel (_this select 0))); profileNamespace setVariable [""OPTRE_ODST_HUDColourMain"", _c];";
};
class RscCheckbox_2800: OPTRE_HUD_RscCheckbox
{
	idc = 2800;
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.0103125 * safezoneW;
	h = 0.022 * safezoneH;
	onCheckedChanged = "if OPTRE_HUD_CompassWanted then {OPTRE_HUD_CompassWanted = false;} else {OPTRE_HUD_CompassWanted = true;};";
};
class BW_OPTRE_HUD_RscText_1001: OPTRE_HUD_OPTRE_HUD_RscText
{
	idc = 1001;
	text = "Show Compass "; //--- ToDo: Localize;
	x = 0.309219 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.180469 * safezoneW;
	h = 0.022 * safezoneH;
};
class OPTRE_RscCombo_1503: OPTRE_HUD_RscCombo
{
	idc = 1503;
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.39 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.022 * safezoneH;
	onLBSelChanged = "OPTRE_LHD_Function = (lbCurSel ((findDisplay 11000) displayCtrl 1503));";
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class BW_OPTRE_HUD_RscText_1002: OPTRE_HUD_OPTRE_HUD_RscText
{
	idc = 1002;
	text = "Radar Settings: "; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.225 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.022 * safezoneH;
};
class BW_OPTRE_HUD_RscText_1003: OPTRE_HUD_OPTRE_HUD_RscText
{
	idc = 1003;
	text = "Radar Zoom: 50m"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.258 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.022 * safezoneH;
};
class RscSlider_1900: OPTRE_HUD_RscSlider
{
	idc = 1900;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.022 * safezoneH;
	//onLoad = "(_this select 0) sliderSetRange [0.01, 1]; sliderSetSpeed [1900, 0.01, 0.01]; (_this select 0) sliderSetPosition OPTRE_Hud_RadarScale; ( ( findDisplay 11000 ) displayCtrl 1003 ) ctrlSetText (format ['Radar Zoom: %1m',round ((OPTRE_Hud_RadarScale / 0.01) * 50)]);";
	onSliderPosChanged = "OPTRE_Hud_RadarScale = sliderPosition ( ( findDisplay 11000 ) displayCtrl 1900 ); ( ( findDisplay 11000 ) displayCtrl 1003 ) ctrlSetText (format ['Radar Zoom: %1m',round ((OPTRE_Hud_RadarScale / 0.01) * 50)]);"; 
};

class OPTRE_RscCombo_1504: OPTRE_HUD_RscCombo
{
	idc = 1504;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.313 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.022 * safezoneH;
	onLBSelChanged = "OPTRE_Hud_RadarMode = (lbCurSel ((findDisplay 11000) displayCtrl 1504));";
};
class BW_OPTRE_HUD_RscText_1004: OPTRE_HUD_OPTRE_HUD_RscText
{
	idc = 1004;
	text = "Squad PIP "; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.022 * safezoneH;
};
class OPTRE_RscCombo_1505: OPTRE_HUD_RscCombo
{
	idc = 1505;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.022 * safezoneH;
	//tooltip = "WARNING! Setting This Value Over 1 is for BEAST COMPUTERS ONLY!!"; //--- ToDo: Localize;
	onLBSelChanged = "OPTRE_LHD_PIPSel = (lbCurSel ((findDisplay 11000) displayCtrl 1505));";
};
class OPTRE_RscCombo_1506: OPTRE_HUD_RscCombo
{
	idc = 1506;
	onLBSelChanged = "OPTRE_HUD_PIP_NVGTI = lbCurSel (_this select 0);";

	x = 0.510312 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.022 * safezoneH;
};*/

	};
	
};