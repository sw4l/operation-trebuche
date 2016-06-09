#define true 1
#define false 0

class OPTRE_HUD_CoustomiseGlass
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
		// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Zylaxu)
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
		/*class OPTRE_RscCombo_1502: OPTRE_HUD_RscListBox
		{
			idc = 1502;
			onLBSelChanged = "_c = ((_this select 0) lbData (lbCurSel (_this select 0))); profileNamespace setVariable ['OPTRE_ODST_HUDColourMain', _c];";
			OnLoad = "_hudMain = profileNamespace getVariable ['OPTRE_ODST_HUDColourMain','orange'];  {    _index = (_this select 0) lbAdd (format ['ODST Hex Colour: %1', _x]);    (_this select 0) lbSetData [_index, _x];    if (_x == _hudMain) then { (_this select 0) lbSetCurSel _index; };  } forEach [   'orange',   'red',   'blue',   'white',   'yellow'  ]; {      _index = (_this select 0) lbAdd (format ['ODST No Hex Colour: %1', _x]);      (_this select 0) lbSetData [_index, _x];      if (_x == _hudMain) then { (_this select 0) lbSetCurSel _index; };    } forEach [   'orange1',   'red1',   'blue1',   'white1',   'yellow1'  ]; ";
			
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.209 * safezoneH;
		};*/
		class OPTRE_HUD_RscText_91: OPTRE_HUD_RscText
		{
			idc = 91;

			text = "Text/Pictures"; //--- ToDo: Localize;
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_HUD_RscText_92: OPTRE_HUD_RscText
		{
			idc = 92;

			text = "Compass Alpha"; //--- ToDo: Localize;
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_HUD_RscText_94: OPTRE_HUD_RscText
		{
			idc = 94;
			//size = 0.2;

			text = "Red"; //--- ToDo: Localize;
			x = 0.484531 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_HUD_RscText_95: OPTRE_HUD_RscText
		{
			idc = 95;
			//size = 0.2;

			text = "Green"; //--- ToDo: Localize;
			x = 0.484531 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_HUD_RscText_96: OPTRE_HUD_RscText
		{
			idc = 96;
			//size = 0.2;

			text = "Blue"; //--- ToDo: Localize;
			x = 0.484531 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_HUD_RscText_97: OPTRE_HUD_RscText
		{
			idc = 97;
			size = 0.2;

			text = "Alpha"; //--- ToDo: Localize;
			x = 0.484531 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_HUD_RscListBox_150: OPTRE_HUD_RscListBox
		{
			idc = 150;
			colorDisabled[] = {1,1,1,0.2};
			OnLoad = "{_i = ((_this select 0) lbAdd (_x select 0));} forEach (profileNameSpace getVariable ['OPTRE_GLASS_HUDSavedSchemes',[]]);";

			x = 0.572187 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.253 * safezoneH;
		};
		class RscPicture_1200: OPTRE_HUD_RscPicture
		{
			idc = 1200;
			OnLoad = "(_this select 0) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_GLASS_HUDColourPictNEW',[0.5,0,0,1]]);";

			text = "#(argb,8,8,3)color(1,1,1,1)"; //--- ToDo: Localize;
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.121 * safezoneH;
		};
		class RscPicture_1201: OPTRE_HUD_RscPicture
		{
			idc = 1201;
			OnLoad = "(_this select 0) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_GLASS_CompassAlpha',[0,0,0,0.5]]);";

			text = "#(argb,8,8,3)color(1,1,1,1)"; //--- ToDo: Localize;
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.121 * safezoneH;
		};
		class OPTRE_HUD_RscEdit_140: OPTRE_HUD_RscEdit
		{
			idc = 140;

			x = 0.572187 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_HUD_RscEdit_1401: OPTRE_HUD_RscEdit
		{
			idc = 141;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));} forEach [141,142,143,144]; profileNamespace setVariable ['OPTRE_GLASS_HUDColourPictNEW',_colourArray]; (( findDisplay 11000 ) displayCtrl 1200) ctrlSetTextColor _colourArray;";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_GLASS_HUDColourPictNEW',[0.5,0,0,1]]) select 0);";

			x = 0.45875 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_HUD_RscEdit_1402: OPTRE_HUD_RscEdit
		{
			idc = 142;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));} forEach [141,142,143,144]; profileNamespace setVariable ['OPTRE_GLASS_HUDColourPictNEW',_colourArray]; (( findDisplay 11000 ) displayCtrl 1200) ctrlSetTextColor _colourArray;";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_GLASS_HUDColourPictNEW',[0.5,0,0,1]]) select 1);";

			text = "12"; //--- ToDo: Localize;
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_HUD_RscEdit_1403: OPTRE_HUD_RscEdit
		{
			idc = 143;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));} forEach [141,142,143,144]; profileNamespace setVariable ['OPTRE_GLASS_HUDColourPictNEW',_colourArray]; (( findDisplay 11000 ) displayCtrl 1200) ctrlSetTextColor _colourArray;";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_GLASS_HUDColourPictNEW',[0.5,0,0,1]]) select 2);";

			text = "13"; //--- ToDo: Localize;
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_HUD_RscEdit_1404: OPTRE_HUD_RscEdit
		{
			idc = 144;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));} forEach [141,142,143,144]; profileNamespace setVariable ['OPTRE_GLASS_HUDColourPictNEW',_colourArray]; (( findDisplay 11000 ) displayCtrl 1200) ctrlSetTextColor _colourArray;";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_GLASS_HUDColourPictNEW',[0.5,0,0,1]]) select 3);";

			text = "14"; //--- ToDo: Localize;
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		/*class OPTRE_HUD_RscEdit_1405: OPTRE_HUD_RscEdit
		{
			idc = 1405;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));} forEach [1405,1406,1407,1408]; profileNamespace setVariable ['OPTRE_GLASS_CompassAlpha',_colourArray]; (( findDisplay 11000 ) displayCtrl 1201) ctrlSetTextColor _colourArray;";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_GLASS_CompassAlpha',[0.5,0,0,1]]) select 0);";

			text = "21"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_HUD_RscEdit_1406: OPTRE_HUD_RscEdit
		{
			idc = 1406;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));} forEach [1405,1406,1407,1408]; profileNamespace setVariable ['OPTRE_GLASS_CompassAlpha',_colourArray]; (( findDisplay 11000 ) displayCtrl 1201) ctrlSetTextColor _colourArray;";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_GLASS_CompassAlpha',[0.5,0,0,1]]) select 1);";

			text = "22"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_HUD_RscEdit_1407: OPTRE_HUD_RscEdit
		{
			idc = 1407;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));} forEach [1405,1406,1407,1408]; profileNamespace setVariable ['OPTRE_GLASS_CompassAlpha',_colourArray]; (( findDisplay 11000 ) displayCtrl 1201) ctrlSetTextColor _colourArray;";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_GLASS_CompassAlpha',[0.5,0,0,1]]) select 2);";

			text = "23"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};*/
		class OPTRE_HUD_RscEdit_1408: OPTRE_HUD_RscEdit
		{
			idc = 1408;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));} forEach [141,142,143,1408]; profileNamespace setVariable ['OPTRE_GLASS_CompassAlpha',_colourArray]; (( findDisplay 11000 ) displayCtrl 1201) ctrlSetTextColor _colourArray;";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_GLASS_CompassAlpha',[0,0,0,0.5]]) select 3);";

			text = "24"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_HUD_RscButton_1600: OPTRE_HUD_RscButton
		{
			idc = 160;
			onButtonClick = "	 _savedVariable = profileNameSpace getVariable ['OPTRE_GLASS_HUDSavedSchemes',[]];	 _colourArrayText = [];		_colourArrayPict = [];		_savedName = (ctrlText (( findDisplay 11000 ) displayCtrl 140));		 if !(_savedName == '' OR _savedName == 'Enter A Valid Name' OR _savedName == 'Name Used') then {			if !({_savedName == (_x select 0)} count _savedVariable > 0) then {				 {			_colourArrayText pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));		 } forEach [141,142,143,1408];					 {			_colourArrayPict pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));		 } forEach [141,142,143,144];				 _savedVariable pushBack [			 _savedName,			 ((( findDisplay 11000 ) displayCtrl 1502) lbText (lbCurSel (( findDisplay 11000 ) displayCtrl 1502))),			 _colourArrayText,			 _colourArrayPict		 ];			 profileNameSpace setVariable ['OPTRE_GLASS_HUDSavedSchemes',_savedVariable];		 profileNamespace setVariable ['OPTRE_GLASS_HUDColourPictNEW',_colourArrayText];		 profileNamespace setVariable ['OPTRE_GLASS_CompassAlpha',_colourArrayPict];			 _ctrlList = (( findDisplay 11000 ) displayCtrl 150);		 lbClear _ctrlList;			{_i = (_ctrlList lbAdd (_x select 0));} forEach (profileNameSpace getVariable ['OPTRE_GLASS_HUDSavedSchemes',[]]);	 playSound 'AddItemOK';		 (( findDisplay 11000 ) displayCtrl 140) ctrlSetTextColor [1,1,1,1];		 (( findDisplay 11000 ) displayCtrl 140) ctrlSetText '';				 } else {			 (( findDisplay 11000 ) displayCtrl 140) ctrlSetText 'Name Used';		 (( findDisplay 11000 ) displayCtrl 140) ctrlSetTextColor [1,0,0,1];		 playSound 'AddItemFailed';				 };		 } else {			(( findDisplay 11000 ) displayCtrl 140) ctrlSetText 'Enter A Valid Name';		(( findDisplay 11000 ) displayCtrl 140) ctrlSetTextColor [1,0,0,1];		playSound 'AddItemFailed';			 };	 ";

			text = "Save Current Scheme"; //--- ToDo: Localize;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_HUD_RscButton_1601: OPTRE_HUD_RscButton
		{
			idc = 161;
			onButtonClick = " _savedVariableFull = (profileNameSpace getVariable ['OPTRE_GLASS_HUDSavedSchemes',[]]);	 _savedVariable = _savedVariableFull select (lbCurSel (( findDisplay 11000 ) displayCtrl 150));			_listBoxText = _savedVariable select 1;	 _textArray = _savedVariable select 2;	 _pictArray = _savedVariable select 3;			for '_i' from 0 to 3 do {			_ctrl = [141,142,143,144] select _i;		_string = _textArray select _i;		 (( findDisplay 11000 ) displayCtrl _ctrl) ctrlSetText str _string;				_ctrl = [141,142,143,1408] select _i;		_string = _pictArray select _i;		(( findDisplay 11000 ) displayCtrl _ctrl) ctrlSetText str _string;			 };			profileNamespace setVariable ['OPTRE_GLASS_HUDColourPictNEW',_textArray];	 profileNamespace setVariable ['OPTRE_GLASS_CompassAlpha',_pictArray];			_exitLoop = false;		_count = 0;	 While {!_exitLoop} do {		_text = (( findDisplay 11000 ) displayCtrl 1502) lbText _count;		if (_text == _listBoxText) then {		 ((findDisplay 11000) displayCtrl 1502) lbSetCurSel _count;		 _exitLoop = true;		 };		if (_text == '' or 'No control' == str (( findDisplay 11000 ) displayCtrl 1502) ) then {		 _exitLoop = true;			((findDisplay 11000) displayCtrl 1502) lbSetCurSel 0;		};		_count = _count + 1;	 }; _colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));} forEach [1405,1406,1407,1408]; profileNamespace setVariable ['OPTRE_GLASS_CompassAlpha',_colourArray]; (( findDisplay 11000 ) displayCtrl 1201) ctrlSetTextColor _colourArray; _colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 11000 ) displayCtrl _x)));} forEach [1405,1406,1407,1408]; profileNamespace setVariable ['OPTRE_GLASS_CompassAlpha',_colourArray]; (( findDisplay 11000 ) displayCtrl 1200) ctrlSetTextColor _textArray;";

			text = "Load Selected Scheme"; //--- ToDo: Localize;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_HUD_RscButton_1608: OPTRE_HUD_RscButton
		{
			idc = 1608;
			onButtonClick = "	 _savedVariableFull = (profileNameSpace getVariable ['OPTRE_GLASS_HUDSavedSchemes',[]]);	 _curSel = (lbCurSel (( findDisplay 11000 ) displayCtrl 150));		if (_curSel > -1) then {				_savedVariableFullMinus = _savedVariableFull - [(_savedVariableFull select _curSel)];		profileNameSpace setVariable ['OPTRE_GLASS_HUDSavedSchemes',_savedVariableFullMinus];				_ctrlList = (( findDisplay 11000 ) displayCtrl 150);		lbClear _ctrlList;		 {_i = (_ctrlList lbAdd (_x select 0));} forEach (profileNameSpace getVariable ['OPTRE_GLASS_HUDSavedSchemes',[]]);		playSound 'AddItemOK';			 } else {			 playSound 'AddItemFailed';			 };	 ";

			text = "Delete Selected Scheme"; //--- ToDo: Localize;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};

		
	};
	
};