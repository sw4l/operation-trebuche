class OPTRE_Menu_ODST_HUD_Coustomisation {
	
	idd = 5603; 

	onLoad = "[] spawn { sleep 0.1; {(( findDisplay 5603 ) displayCtrl _x) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_ODST_HUDColourTextNEW',[0,0,0,0]]);} forEach [103];  {(( findDisplay 5603 ) displayCtrl _x) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_ODST_HUDColourPictNEW',[0,0,0,0]]);} forEach [101,102]; };";
	onUnload = " 0 = [] execVM 'OPTRE_FunctionsLibrary\Scripts\UpdateMenusIf.sqf';";

	class Objects
	{
				
	};			
	class controls 
	{

		////////////////// Background ///////////////////////////
		class centralBackground: OPTRE_UNSCMENU_RscPicture
		{
			idc = -1;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.55 * safezoneH;
			colorText[] = {0,0,0,1};
		};
		class OPTRE_UNSCMENU_RscPicture_1200: OPTRE_UNSCMENU_RscPicture 
		{
			idc = -1;
			text = "\OPTRE_Modules\data\picture\Menu\background.paa";
			x = 0.149375 * safezoneW + safezoneX;
			y = 0.14998 * safezoneH + safezoneY;
			w = 0.70125 * safezoneW;
			h = 0.638 * safezoneH;
		};
		class OPTRE_UNSCMENU_RscText_1: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = 1;
			//text = ""; //--- ToDo: Localize;
			onLoad = "(_this select 0) ctrlSetStructuredText parseText (""<img image='\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa'/> ""+""Logged In: ""+(name player));";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.192 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.022 * safezoneH;
			class Attributes
			{
				align = "left";
			};
		};
		class OPTRE_UNSCMENU_RscText_2: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = 2;
			//text = ""; //--- ToDo: Localize;
			onLoad = "(_this select 0) ctrlSetText (format [""%1"",OPTRE_CurrentConsoleString]); ";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.192 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.022 * safezoneH;
			class Attributes
			{
				align = "right";
			};
		};
		////////////////// Background ///////////////////////////
		
		////////////////// Text /////////////////////////////////
		class Text_Red: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = -1;
			text = "Red"; //--- ToDo: Localize;
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			class Attributes{align = "center";};
		};
		class Text_Green: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = -1;
			text = "Green"; //--- ToDo: Localize;
			x = 0.469062 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			class Attributes{align = "center";};
		};
		class Text_Blue: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = -1;
			text = "Blue"; //--- ToDo: Localize;
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			class Attributes{align = "center";};
		};
		class Text_Alpha: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = -1;
			text = "Alpha"; //--- ToDo: Localize;
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			class Attributes{align = "center";};
		};
		class Text_Col: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = -1;
			text = "Display Colour:"; //--- ToDo: Localize;
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.731 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			class Attributes{align = "left";};
		};
		class Text_HUD: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = -1;
			text = "Text Colour:"; //--- ToDo: Localize;			
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			class Attributes{align = "left"; };
		};
		////////////////// Text /////////////////////////////////
		
		////////////////// Radar and HUD Pictures ///////////////
		class backgroundHEX: OPTRE_UNSCMENU_RscPicture
		{
			idc = 99;
			text = "";//\OPTRE_Modules\data\picture\LoadScreens\BattleOfTheBuldge.paa";//"#(argb,8,8,3)color(0,0,0,0)";
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.391875 * safezoneW;
			h = 0.418 * safezoneH;
			class Attributes{align = "left";};
		};
		class HEX: OPTRE_UNSCMENU_RscPicture
		{
			idc = 100;
			text = "OPTRE_Hud\Data\Hud_ODST_1\hud_edges_hex.paa";
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.391875 * safezoneW;
			h = 0.418 * safezoneH;
			class Attributes{align = "left";};
		};
		class backgroundChangeCombo: OPTRE_UNSCMENU_RscCombo
		{
			idc = 98;
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW; 
			h = 0.022 * safezoneH;
			OnLoad =  "{_i = (_this select 0) lbAdd (format ['Background: %1', _x]);} forEach ['None'] + ([(configfile >> 'cfgOptreLoadScreens')] call BIS_fnc_getCfgSubClasses); (_this select 0) lbsetcursel 0;";
			onLBSelChanged = "if ((lbCurSel 98) > 0) then { (( findDisplay 5603 ) displayCtrl 99) ctrlSetText (getText (configfile >> 'cfgOptreLoadScreens' >> (([(configfile >> 'cfgOptreLoadScreens')] call BIS_fnc_getCfgSubClasses) select ((lbCurSel 98) - 1)) >> 'picture')); } else { (( findDisplay 5603 ) displayCtrl 99) ctrlSetText ''; };";
		};
		class OPTRE_UNSCMENU_RscPicture_1202: OPTRE_UNSCMENU_RscPicture
		{
			idc = 101;
			text = "\OPTRE_Hud\data\Radar\Radar.paa";
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.088 * safezoneH;
			class Attributes{align = "left";};
		};
		class OPTRE_UNSCMENU_RscPicture_1203: OPTRE_UNSCMENU_RscPicture
		{
			idc = 102;
			text = "OPTRE_Hud\Data\Hud_ODST_1\hud_healthBar.paa";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.033 * safezoneH;
			class Attributes{align = "left";};
		};
		class OPTRE_UNSCMENU_RscStructuredText_1000: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = 103;
			text = "TEXT"; //--- ToDo: Localize;
			x = 0.613437 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.055 * safezoneH;
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2.8)";
			class Attributes{align = "center";};
		};
		////////////////// Radar and HUD Pictures ///////////////

		///////////////////// Colour Edits /////////////////////////////
		class OPTRE_UNSCMENU_RscEdit_1400: OPTRE_UNSCMENU_RscEdit
		{
			idc = 141;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 5603 ) displayCtrl _x)));} forEach [141,142,143,144]; profileNamespace setVariable ['OPTRE_ODST_HUDColourTextNEW',_colourArray]; {(( findDisplay 5603 ) displayCtrl _x) ctrlSetTextColor _colourArray;} forEach [103];";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_ODST_HUDColourTextNEW',[0.5,0,0,1]]) select 0);";
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_UNSCMENU_RscEdit_1401: OPTRE_UNSCMENU_RscEdit
		{
			idc = 142;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 5603 ) displayCtrl _x)));} forEach [141,142,143,144]; profileNamespace setVariable ['OPTRE_ODST_HUDColourTextNEW',_colourArray]; {(( findDisplay 5603 ) displayCtrl _x) ctrlSetTextColor _colourArray;} forEach [103];";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_ODST_HUDColourTextNEW',[0.5,0,0,1]]) select 1);";
			x = 0.469062 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_UNSCMENU_RscEdit_1402: OPTRE_UNSCMENU_RscEdit
		{
			idc = 143;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 5603 ) displayCtrl _x)));} forEach [141,142,143,144]; profileNamespace setVariable ['OPTRE_ODST_HUDColourTextNEW',_colourArray]; {(( findDisplay 5603 ) displayCtrl _x) ctrlSetTextColor _colourArray;} forEach [103];";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_ODST_HUDColourTextNEW',[0.5,0,0,1]]) select 2);";
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_UNSCMENU_RscEdit_1403: OPTRE_UNSCMENU_RscEdit
		{
			idc = 144;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 5603 ) displayCtrl _x)));} forEach [141,142,143,144]; profileNamespace setVariable ['OPTRE_ODST_HUDColourTextNEW',_colourArray]; {(( findDisplay 5603 ) displayCtrl _x) ctrlSetTextColor _colourArray;} forEach [103];";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_ODST_HUDColourTextNEW',[0.5,0,0,1]]) select 3);";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_UNSCMENU_RscEdit_1404: OPTRE_UNSCMENU_RscEdit
		{
			idc = 1405;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 5603 ) displayCtrl _x)));} forEach [1405,1406,1407,1408]; profileNamespace setVariable ['OPTRE_ODST_HUDColourPictNEW',_colourArray]; {(( findDisplay 5603 ) displayCtrl _x) ctrlSetTextColor _colourArray;} forEach [101,102];";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_ODST_HUDColourPictNEW',[0.5,0,0,1]]) select 0);";
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.731 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_UNSCMENU_RscEdit_1405: OPTRE_UNSCMENU_RscEdit
		{
			idc = 1406;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 5603 ) displayCtrl _x)));} forEach [1405,1406,1407,1408]; profileNamespace setVariable ['OPTRE_ODST_HUDColourPictNEW',_colourArray]; {(( findDisplay 5603 ) displayCtrl _x) ctrlSetTextColor _colourArray;} forEach [101,102];";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_ODST_HUDColourPictNEW',[0.5,0,0,1]]) select 1);";
			x = 0.469062 * safezoneW + safezoneX;
			y = 0.731 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_UNSCMENU_RscEdit_1406: OPTRE_UNSCMENU_RscEdit
		{
			idc = 1407;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 5603 ) displayCtrl _x)));} forEach [1405,1406,1407,1408]; profileNamespace setVariable ['OPTRE_ODST_HUDColourPictNEW',_colourArray]; {(( findDisplay 5603 ) displayCtrl _x) ctrlSetTextColor _colourArray;} forEach [101,102];";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_ODST_HUDColourPictNEW',[0.5,0,0,1]]) select 2);";
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.731 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_UNSCMENU_RscEdit_1407: OPTRE_UNSCMENU_RscEdit
		{
			idc = 1408;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 5603 ) displayCtrl _x)));} forEach [1405,1406,1407,1408]; profileNamespace setVariable ['OPTRE_ODST_HUDColourPictNEW',_colourArray]; {(( findDisplay 5603 ) displayCtrl _x) ctrlSetTextColor _colourArray;} forEach [101,102];";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_ODST_HUDColourPictNEW',[0.5,0,0,1]]) select 3);";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.731 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};
		///////////////////// Colour Edits /////////////////////////////
		
		/////////////////// Save Load ////////////////////////////////////
		class save_pic: OPTRE_UNSCMENU_RscPicture
		{
			idc = 1;
			text = "\A3\ui_f\data\igui\cfg\simpleTasks\types\download_ca.paa";
	x = 0.175156 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0154688 * safezoneW;
	h = 0.022 * safezoneH;
		};
		class i1b: OPTRE_UNSCMENU_ButtonInvisible
		{
			idc = -1;
	x = 0.175156 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0154688 * safezoneW;
	h = 0.022 * safezoneH;
			//onMouseEnter  = "((findDisplay 5603) displayCtrl 1) ctrlSetTextColor [0.85,0,0,1];";
			//    = "((findDisplay 5603) displayCtrl 1) ctrlSetTextColor [1,1,1,1];";		
			onButtonClick = "	 _savedVariable = profileNameSpace getVariable ['OPTRE_ODST_HUDSavedSchemes',[]];	 _colourArrayText = [];		_colourArrayPict = [];		_savedName = (ctrlText (( findDisplay 5603 ) displayCtrl 140));		 if !(_savedName == '' OR _savedName == 'Enter A Valid Name' OR _savedName == 'Name Used') then {			if !({_savedName == (_x select 0)} count _savedVariable > 0) then {				 {			_colourArrayText pushBack (parseNumber (ctrlText (( findDisplay 5603 ) displayCtrl _x)));		 } forEach [1405,1406,1407,1408];					 {			_colourArrayPict pushBack (parseNumber (ctrlText (( findDisplay 5603 ) displayCtrl _x)));		 } forEach [141,142,143,144];				 _savedVariable pushBack [			 _savedName,			 ((( findDisplay 5603 ) displayCtrl 1502) lbData (lbCurSel (( findDisplay 5603 ) displayCtrl 1502))),			 _colourArrayText,			 _colourArrayPict		 ];			 profileNameSpace setVariable ['OPTRE_ODST_HUDSavedSchemes',_savedVariable];		 profileNamespace setVariable ['OPTRE_ODST_HUDColourTextNEW',_colourArrayText];		 profileNamespace setVariable ['OPTRE_ODST_HUDColourPictNEW',_colourArrayPict];			 _ctrlList = (( findDisplay 5603 ) displayCtrl 150);		 lbClear _ctrlList;			{_i = (_ctrlList lbAdd (_x select 0));} forEach (profileNameSpace getVariable ['OPTRE_ODST_HUDSavedSchemes',[]]);	 playSound 'AddItemOK';		 (( findDisplay 5603 ) displayCtrl 140) ctrlSetTextColor [1,1,1,1];		 (( findDisplay 5603 ) displayCtrl 140) ctrlSetText '';				 } else {			 (( findDisplay 5603 ) displayCtrl 140) ctrlSetText 'Name Used';		 (( findDisplay 5603 ) displayCtrl 140) ctrlSetTextColor [1,0,0,1];		 playSound 'AddItemFailed';				 };		 } else {			(( findDisplay 5603 ) displayCtrl 140) ctrlSetText 'Enter A Valid Name';		(( findDisplay 5603 ) displayCtrl 140) ctrlSetTextColor [1,0,0,1];		playSound 'AddItemFailed';			 };	 0 = [] execVM 'OPTRE_FunctionsLibrary\Scripts\UpdateMenusIf.sqf';";
			tooltip = "Save Currently Selected Scheme";
		};
		
		class load_pic: OPTRE_UNSCMENU_RscPicture
		{
			idc = 2;
			text = "\A3\ui_f\data\igui\cfg\simpleTasks\types\upload_ca.paa";
	x = 0.195781 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0154688 * safezoneW;
	h = 0.022 * safezoneH;
		};
		class i2b: OPTRE_UNSCMENU_ButtonInvisible
		{
			idc = -1;
	x = 0.195781 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0154688 * safezoneW;
	h = 0.022 * safezoneH;
			//onMouseEnter  = "((findDisplay 5603) displayCtrl 2) ctrlSetTextColor [0.85,0,0,1];";
			//onMouseExit   = "((findDisplay 5603) displayCtrl 2) ctrlSetTextColor [1,1,1,1];";		
			onButtonClick = "_savedVariableFull = (profileNameSpace getVariable ['OPTRE_ODST_HUDSavedSchemes',[]]);   _savedVariable = _savedVariableFull select (lbCurSel (( findDisplay 5603 ) displayCtrl 150));     _listBoxText = _savedVariable select 1;    _textArray = _savedVariable select 2;      _pictArray = _savedVariable select 3;     for '_i' from 0 to 3 do {   _ctrl = [141,142,143,144] select _i;     _string = _textArray select _i;      (( findDisplay 5603 ) displayCtrl _ctrl) ctrlSetText str _string;       _ctrl = [1405,1406,1407,1408] select _i;     _string = _pictArray select _i;     (( findDisplay 5603 ) displayCtrl _ctrl) ctrlSetText str _string;      };       profileNamespace setVariable ['OPTRE_ODST_HUDColourTextNEW',_textArray];    profileNamespace setVariable ['OPTRE_ODST_HUDColourPictNEW',_pictArray];       _exitLoop = false;    _count = 0;   While {!_exitLoop} do {     _text = (( findDisplay 5603 ) displayCtrl 1502) lbData _count;     if (_text == _listBoxText) then {       ((findDisplay 5603) displayCtrl 1502) lbSetCurSel _count;       _exitLoop = true;      };     if (_text == '' or 'No control' == str (( findDisplay 5603 ) displayCtrl 1502) ) then {       _exitLoop = true;       ((findDisplay 5603) displayCtrl 1502) lbSetCurSel 0;     };     _count = _count + 1;    }; 0 = [] execVM 'OPTRE_FunctionsLibrary\Scripts\UpdateMenusIf.sqf'; [] spawn { sleep 0.1; {(( findDisplay 5603 ) displayCtrl _x) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_ODST_HUDColourTextNEW',[0,0,0,0]]);} forEach [103];  {(( findDisplay 5603 ) displayCtrl _x) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_ODST_HUDColourPictNEW',[0,0,0,0]]);} forEach [101,102]; };";
			tooltip = "Load Currently Selected Scheme";
		};
		
		class delete_pic: OPTRE_UNSCMENU_RscPicture
		{
			idc = 3;
			text = "\A3\ui_f\data\igui\cfg\simpleTasks\types\attack_ca.paa";
	x = 0.242187 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0154688 * safezoneW;
	h = 0.022 * safezoneH;
		};
		class i3b: OPTRE_UNSCMENU_ButtonInvisible
		{
			idc = -1;
	x = 0.242187 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0154688 * safezoneW;
	h = 0.022 * safezoneH;
			//onMouseEnter  = "((findDisplay 5603) displayCtrl 3) ctrlSetTextColor [0.85,0,0,1];";
			//onMouseExit   = "((findDisplay 5603) displayCtrl 3) ctrlSetTextColor [1,1,1,1];";		
			onButtonClick = "	 _savedVariableFull = (profileNameSpace getVariable ['OPTRE_ODST_HUDSavedSchemes',[]]);	 _curSel = (lbCurSel (( findDisplay 5603 ) displayCtrl 150));		if (_curSel > -1) then {				_savedVariableFullMinus = _savedVariableFull - [(_savedVariableFull select _curSel)];		profileNameSpace setVariable ['OPTRE_ODST_HUDSavedSchemes',_savedVariableFullMinus];				_ctrlList = (( findDisplay 5603 ) displayCtrl 150);		lbClear _ctrlList;		 {_i = (_ctrlList lbAdd (_x select 0));} forEach (profileNameSpace getVariable ['OPTRE_ODST_HUDSavedSchemes',[]]);		playSound 'AddItemOK';			 } else {			 playSound 'AddItemFailed';			 };";//	 0 = [] execVM 'OPTRE_FunctionsLibrary\Scripts\UpdateMenusIf.sqf';";
			tooltip = "Delete Currently Selected Scheme";
		};
		
		class RscEdit_1400: OPTRE_UNSCMENU_RscEdit
		{
			idc = 140;
			x = 0.175156 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class CoustomODSTList: OPTRE_UNSCMENU_RscListbox
		{
			idc = 150;
			x = 0.17 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.209 * safezoneH;
			//colorDisabled[] = {1,1,1,0.2};
			OnLoad = "{_i = ((_this select 0) lbAdd (_x select 0));} forEach (profileNameSpace getVariable ['OPTRE_ODST_HUDSavedSchemes',[]]); (_this select 0) lbSetCurSel 0;";
		};
		class RscListbox_1500: OPTRE_UNSCMENU_RscListbox
		{
			idc = 1502;
			x = 0.716563 * safezoneW + safezoneX;
			y = 0.181 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.396 * safezoneH;
			onLBSelChanged = "_c = ((_this select 0) lbData (lbCurSel (_this select 0))); profileNamespace setVariable ['OPTRE_ODST_HUDColourMain', _c];  0 = [] execVM 'OPTRE_FunctionsLibrary\Scripts\UpdateMenusIf.sqf'; if (['orange', _c, true] call BIS_fnc_inString) then {(( findDisplay 5603 ) displayCtrl 100) ctrlSetTextColor [1,0.5,0,1];};if (['blue', _c, true] call BIS_fnc_inString) then {(( findDisplay 5603 ) displayCtrl 100) ctrlSetTextColor [0.1,0.1,1,0.5];};if (['white', _c, true] call BIS_fnc_inString) then {(( findDisplay 5603 ) displayCtrl 100) ctrlSetTextColor [1,1,1,1];};if (['red', _c, true] call BIS_fnc_inString) then {(( findDisplay 5603 ) displayCtrl 100) ctrlSetTextColor [1,0,0,1];};if (['yellow', _c, true] call BIS_fnc_inString) then {(( findDisplay 5603 ) displayCtrl 100) ctrlSetTextColor [1,1,0,1];};";
			OnLoad = "[(_this select 0)] spawn {_hudMain = profileNamespace getVariable ['OPTRE_ODST_HUDColourMain','orange']; { _index = (_this select 0) lbAdd (format ['ODST %1', ((getArray (configfile >> 'CfgOptreHudSchemes' >> 'ODST_1' >> 'MainDialogs' >> _x >> 'value')) select 1)]); (_this select 0) lbSetData [_index, _x]; if (_x == _hudMain) then { (_this select 0) lbSetCurSel _index; }; } forEach ([(configfile >> 'CfgOptreHudSchemes' >> 'ODST_1' >> 'MainDialogs')] call BIS_fnc_getCfgSubClasses); _a = ([(configfile >> 'CfgOptreHudSchemes' >> 'ODST_1' >> 'MainDialogs')] call BIS_fnc_getCfgSubClasses); sleep 0.1; if (['orange', _hudMain, true] call BIS_fnc_inString) then {(( findDisplay 5603 ) displayCtrl 100) ctrlSetTextColor [1,0.5,0,1];};if (['blue', _hudMain, true] call BIS_fnc_inString) then {(( findDisplay 5603 ) displayCtrl 100) ctrlSetTextColor [0.1,0.1,1,0.5];};if (['white', _hudMain, true] call BIS_fnc_inString) then {(( findDisplay 5603 ) displayCtrl 100) ctrlSetTextColor [1,1,1,1];};if (['red', _hudMain, true] call BIS_fnc_inString) then {(( findDisplay 5603 ) displayCtrl 100) ctrlSetTextColor [1,0,0,1];};if (['yellow', _hudMain, true] call BIS_fnc_inString) then {(( findDisplay 5603 ) displayCtrl 100) ctrlSetTextColor [1,1,0,1];}; };";	
		};
		////////////////// Save, Load, .. ///////////////////////

		/*class OPTRE_UNSCMENU_RscButton_1601: OPTRE_UNSCMENU_RscButton
		{
			idc = 1601;
			text = "Configure ODST Compass"; //--- ToDo: Localize;
			x = 0.711406 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.055 * safezoneH;
			onButtonClick = "";
		};*/
		class OPTRE_UNSCMENU_RscButton_1602: OPTRE_UNSCMENU_RscButton
		{
			idc = 1602;
			text = "Update Current HUD"; //--- ToDo: Localize;
			x = 0.711406 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.055 * safezoneH;
			onButtonClick = " 0 = [] execVM 'OPTRE_FunctionsLibrary\Scripts\UpdateMenusIf.sqf';";
		};
		
		// Menu System
		class MenuList: OPTRE_UNSCMENU_RscListbox
		{
			idc = 15;
			x = 0.17 * safezoneW + safezoneX;
			y = 0.182 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.242 * safezoneH;
			OnLoad = "{_menuName = getText (configfile >> 'cfgOptreUNSCmenus' >> _x >> 'MenuName');_function = getText (configfile >> 'cfgOptreUNSCmenus' >> _x >> 'Function');_securityValue = getNumber (configfile >> 'cfgOptreUNSCmenus' >> _x >> 'Security');_i = (_this select 0) lbAdd _menuName;(_this select 0) lbSetData [_i, _function];(_this select 0) lbSetValue [_i, _securityValue];(_this select 0) lbSetPicture [_i,(getText (configfile >> 'cfgOptreUNSCmenus' >> _x >> 'icon'))];if (_x == 'UNSC_HUD_ODST') then {(_this select 0) lbSetCurSel _i;};} forEach OPTRE_UNSC_Console_MenusAllowed;";
		};		
		class MenuListSwitch: OPTRE_UNSCMENU_RscButton
		{
			idc = -1;
			type = 1; 
			text = "Switch Menu"; //--- ToDo: Localize;
			x = 0.17 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "closeDialog 0; _function = getText	(configfile >> ""cfgOptreUNSCmenus"" >> (OPTRE_UNSC_Console_MenusAllowed select (lbCurSel 15)) >> ""Function""); if (_function != """") then {0 = [OPTRE_CurrentConsole,OPTRE_CurrentConsoleString] spawn (missionNamespace getVariable _function);} else {createDialog (getText	(configfile >> ""cfgOptreUNSCmenus"" >> (OPTRE_UNSC_Console_MenusAllowed select (lbCurSel 15)) >> ""Dialog""));};";
		};
		
	};			
};