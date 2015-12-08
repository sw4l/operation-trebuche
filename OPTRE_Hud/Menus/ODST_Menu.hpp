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

class RscText_991: OPTRE_HUD_SructuredText
{
	idc = 991;
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.489 * safezoneH + safezoneY;
	w = 0.4125 * safezoneW;
	h = 0.396 * safezoneH;
	OnLoad = "(_this select 0) ctrlSetText format ['WARNING JUST LIKE THE HUD SYSTEM, THIS MENU IS A W.I.P. AS SUCH SOME FEATURES WONT WORK OR ARE MISSING INCLUDEING THE ARTWORK.\n\n  FUTURE PLANS INCLUDE:\n\n* Custom Models for Marines / Army EYE PEICE and GLASSES.\n* Unique ONI HUD (Currently Uses ODST).\n* Personal Medical Scanner Function for all HUDs.\n* Team Medical Scanner Function for all HUDs.\n* Weapon Resting / Deployment Indicators.\n* Support Menu, (Missiles / Arty, Resupply, CAS, Transport).\n* Give players the ability to customise HUD Icons, Pictures and Text Colour Schemes (We need to make a new set of pictures for all weapons first).\n* Custom (more stylised) font for HUD / OPTRE.\n* Unique Sniper ODST HUD.\n\n  '];";
	class Attributes {
		align = "left";
		color = "#771800"; 	
	};
	 size = 0.040;
	  colorBackground[] = { 0,0,0,0.9 }; 
};

class BW_RscText_1000: OPTRE_HUD_RscText
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
};
class OPTRE_RscCombo_1501: OPTRE_HUD_RscCombo
{
	idc = 1501;
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.022 * safezoneH;
};
class OPTRE_RscCombo_1502: OPTRE_HUD_RscCombo
{
	idc = 1502;
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.324 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.022 * safezoneH;
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
class BW_RscText_1001: OPTRE_HUD_RscText
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

class BW_RscText_1002: OPTRE_HUD_RscText
{
	idc = 1002;
	text = "Radar Settings: "; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.225 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.022 * safezoneH;
};
class BW_RscText_1003: OPTRE_HUD_RscText
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
class BW_RscText_1004: OPTRE_HUD_RscText
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

	};
	
};