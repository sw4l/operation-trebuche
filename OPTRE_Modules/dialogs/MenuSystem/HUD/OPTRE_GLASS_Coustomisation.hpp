class OPTRE_Menu_Glass_HUD_Coustomisation {
	
	idd = 5604; 

	onLoad = "[] spawn { sleep 0.1; {(( findDisplay 5604 ) displayCtrl _x) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_GLASS_CompassAlpha',[0,0,0,0]]);} forEach [103];  {(( findDisplay 5604 ) displayCtrl _x) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_GLASS_HUDColourPictNEW',[0,0,0,0]]);} forEach [101,102]; };";
	onUnload = " 0 = [] execVM 'OPTRE_FunctionsLibrary\Scripts\UpdateMenusIf.sqf';";                                                                //OPTRE_GLASS_HUDColourPictNEW OPTRE_GLASS_CompassAlpha

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
			idc = -1;
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
			idc = -1;
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
		class b3: OPTRE_UNSCMENU_RscPicture
		{
			idc = -1;
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.731 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {1,1,1,1};
			text = "#(argb,8,8,3)color(1,1,1,1)";
		};
		class b2: OPTRE_UNSCMENU_RscPicture
		{
			idc = -1;
			x = 0.469062 * safezoneW + safezoneX;
			y = 0.731 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {1,1,1,1};
			text = "#(argb,8,8,3)color(1,1,1,1)";
		};
		class b1: OPTRE_UNSCMENU_RscPicture
		{
			idc = -1;
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.731 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {1,1,1,1};
			text = "#(argb,8,8,3)color(1,1,1,1)";
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
			text = "OPTRE_Hud\Data\Marine_2\hud_edges_mar_2.paa";
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.391875 * safezoneW;
			h = 0.418 * safezoneH;
		};
		class HEX_Full: OPTRE_UNSCMENU_RscPicture
		{
			idc = -1;
			text = "OPTRE_Hud\Data\Marine_2\hud_edges_mar_tabs.paa";
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.391875 * safezoneW;
			h = 0.418 * safezoneH;
		};
		class backgroundChangeCombo: OPTRE_UNSCMENU_RscCombo
		{
			idc = 98;
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW; 
			h = 0.022 * safezoneH;
			OnLoad =  "{_i = (_this select 0) lbAdd (format ['Background: %1', _x]);} forEach ['None'] + ([(configfile >> 'cfgOptreLoadScreens')] call BIS_fnc_getCfgSubClasses); (_this select 0) lbsetcursel 0;";
			onLBSelChanged = "if ((lbCurSel 98) > 0) then { (( findDisplay 5604 ) displayCtrl 99) ctrlSetText (getText (configfile >> 'cfgOptreLoadScreens' >> (([(configfile >> 'cfgOptreLoadScreens')] call BIS_fnc_getCfgSubClasses) select ((lbCurSel 98) - 1)) >> 'picture')); } else { (( findDisplay 5604 ) displayCtrl 99) ctrlSetText ''; };";
		};
		class OPTRE_UNSCMENU_RscPicture_1202: OPTRE_UNSCMENU_RscPicture
		{
			idc = 101;
			text = "\OPTRE_Hud\data\Radar\Radar.paa";
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.11 * safezoneH;
			class Attributes{align = "left";};
		};
		class OPTRE_UNSCMENU_RscPicture_1203: OPTRE_UNSCMENU_RscPicture
		{
			idc = 102;
			text = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR.paa";
			x = 0.587655 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.055 * safezoneH;
			class Attributes{align = "left";};
		};
		class OPTRE_UNSCMENU_RscStructuredText_1000: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = 103;
			onLoad = "(_this select 0) ctrlSetStructuredText parseText 'TEXT TEXT TEXT<br/>TEXT TEXT TEXT<br/>TEXT TEXT TEXT<br/>TEXT TEXT TEXT<br/>TEXT TEXT TEXT<br/>TEXT TEXT TEXT<br/>'; (_this select 0) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_GLASS_CompassAlpha',[0,0,0,0]]);";
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.121 * safezoneH;
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.6)";
			class Attributes{align = "left";};
		};
		////////////////// Radar and HUD Pictures ///////////////

		///////////////////// Colour Edits /////////////////////////////
		class OPTRE_UNSCMENU_RscEdit_1400: OPTRE_UNSCMENU_RscEdit
		{
			idc = 141;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 5604 ) displayCtrl _x)));} forEach [141,142,143,144]; profileNamespace setVariable ['OPTRE_GLASS_HUDColourPictNEW',_colourArray]; {(( findDisplay 5604 ) displayCtrl _x) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_GLASS_CompassAlpha',[0,0,0,0]]);} forEach [103];  {(( findDisplay 5604 ) displayCtrl _x) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_GLASS_HUDColourPictNEW',[0,0,0,0]]);} forEach [101,102];";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_GLASS_HUDColourPictNEW',[0.5,0,0,1]]) select 0);";
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_UNSCMENU_RscEdit_1401: OPTRE_UNSCMENU_RscEdit
		{
			idc = 142;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 5604 ) displayCtrl _x)));} forEach [141,142,143,144]; profileNamespace setVariable ['OPTRE_GLASS_HUDColourPictNEW',_colourArray]; {(( findDisplay 5604 ) displayCtrl _x) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_GLASS_CompassAlpha',[0,0,0,0]]);} forEach [103];  {(( findDisplay 5604 ) displayCtrl _x) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_GLASS_HUDColourPictNEW',[0,0,0,0]]);} forEach [101,102];";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_GLASS_HUDColourPictNEW',[0.5,0,0,1]]) select 1);";
			x = 0.469062 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_UNSCMENU_RscEdit_1402: OPTRE_UNSCMENU_RscEdit
		{
			idc = 143;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 5604 ) displayCtrl _x)));} forEach [141,142,143,144]; profileNamespace setVariable ['OPTRE_GLASS_HUDColourPictNEW',_colourArray]; {(( findDisplay 5604 ) displayCtrl _x) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_GLASS_CompassAlpha',[0,0,0,0]]);} forEach [103];  {(( findDisplay 5604 ) displayCtrl _x) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_GLASS_HUDColourPictNEW',[0,0,0,0]]);} forEach [101,102];";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_GLASS_HUDColourPictNEW',[0.5,0,0,1]]) select 2);";
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_UNSCMENU_RscEdit_1403: OPTRE_UNSCMENU_RscEdit
		{
			idc = 144;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 5604 ) displayCtrl _x)));} forEach [141,142,143,144]; profileNamespace setVariable ['OPTRE_GLASS_HUDColourPictNEW',_colourArray]; {(( findDisplay 5604 ) displayCtrl _x) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_GLASS_CompassAlpha',[0,0,0,0]]);} forEach [103];  {(( findDisplay 5604 ) displayCtrl _x) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_GLASS_HUDColourPictNEW',[0,0,0,0]]);} forEach [101,102];";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_GLASS_HUDColourPictNEW',[0.5,0,0,1]]) select 3);";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class OPTRE_UNSCMENU_RscEdit_1407: OPTRE_UNSCMENU_RscEdit
		{
			idc = 1408;
			onKeyUp = "_colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 5604 ) displayCtrl _x)));} forEach [141,143,143,1408]; profileNamespace setVariable ['OPTRE_GLASS_CompassAlpha',_colourArray]; {(( findDisplay 5604 ) displayCtrl _x) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_GLASS_CompassAlpha',[0,0,0,0]]);} forEach [103];  {(( findDisplay 5604 ) displayCtrl _x) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_GLASS_HUDColourPictNEW',[0,0,0,0]]);} forEach [101,102];";
			onLoad = "(_this select 0) ctrlSetText str ( (profileNamespace getVariable ['OPTRE_GLASS_CompassAlpha',[0,0,0,0.5]]) select 3);";			
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.731 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;		
		};
		
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
			onMouseEnter  = "((findDisplay 5604) displayCtrl 1) ctrlSetTextColor [0.85,0,0,1];";
			onMouseExit   = "((findDisplay 5604) displayCtrl 1) ctrlSetTextColor [1,1,1,1];";		
			onButtonClick = "	 _savedVariable = profileNameSpace getVariable ['OPTRE_GLASS_HUDSavedSchemes',[]];	 _colourArrayText = [];		_colourArrayPict = [];		_savedName = (ctrlText (( findDisplay 5604 ) displayCtrl 140));		 if !(_savedName == '' OR _savedName == 'Enter A Valid Name' OR _savedName == 'Name Used') then {			if !({_savedName == (_x select 0)} count _savedVariable > 0) then {				 {			_colourArrayText pushBack (parseNumber (ctrlText (( findDisplay 5604 ) displayCtrl _x)));		 } forEach [141,142,143,1408];					 {			_colourArrayPict pushBack (parseNumber (ctrlText (( findDisplay 5604 ) displayCtrl _x)));		 } forEach [141,142,143,144];				 _savedVariable pushBack [			 _savedName,			 ((( findDisplay 5604 ) displayCtrl 1502) lbText (lbCurSel (( findDisplay 5604 ) displayCtrl 1502))),			 _colourArrayText,			 _colourArrayPict		 ];			 profileNameSpace setVariable ['OPTRE_GLASS_HUDSavedSchemes',_savedVariable];		 profileNamespace setVariable ['OPTRE_GLASS_HUDColourPictNEW',_colourArrayText];		 profileNamespace setVariable ['OPTRE_GLASS_CompassAlpha',_colourArrayPict];			 _ctrlList = (( findDisplay 5604 ) displayCtrl 150);		 lbClear _ctrlList;			{_i = (_ctrlList lbAdd (_x select 0));} forEach (profileNameSpace getVariable ['OPTRE_GLASS_HUDSavedSchemes',[]]);	 playSound 'AddItemOK';		 (( findDisplay 5604 ) displayCtrl 140) ctrlSetTextColor [1,1,1,1];		 (( findDisplay 5604 ) displayCtrl 140) ctrlSetText '';				 } else {			 (( findDisplay 5604 ) displayCtrl 140) ctrlSetText 'Name Used';		 (( findDisplay 5604 ) displayCtrl 140) ctrlSetTextColor [1,0,0,1];		 playSound 'AddItemFailed';				 };		 } else {			(( findDisplay 5604 ) displayCtrl 140) ctrlSetText 'Enter A Valid Name';		(( findDisplay 5604 ) displayCtrl 140) ctrlSetTextColor [1,0,0,1];		playSound 'AddItemFailed';			 };	 ";
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
			//onMouseEnter  = "((findDisplay 5604) displayCtrl 2) ctrlSetTextColor [0.85,0,0,1];";
			//onMouseExit   = "((findDisplay 5604) displayCtrl 2) ctrlSetTextColor [1,1,1,1];";		
			onButtonClick = " _savedVariableFull = (profileNameSpace getVariable ['OPTRE_GLASS_HUDSavedSchemes',[]]);	 _savedVariable = _savedVariableFull select (lbCurSel (( findDisplay 5604 ) displayCtrl 150));			_listBoxText = _savedVariable select 1;	 _textArray = _savedVariable select 2;	 _pictArray = _savedVariable select 3;			for '_i' from 0 to 3 do {			_ctrl = [141,142,143,144] select _i;		_string = _textArray select _i;		 (( findDisplay 5604 ) displayCtrl _ctrl) ctrlSetText str _string;				_ctrl = [141,142,143,1408] select _i;		_string = _pictArray select _i;		(( findDisplay 5604 ) displayCtrl _ctrl) ctrlSetText str _string;			 };			profileNamespace setVariable ['OPTRE_GLASS_HUDColourPictNEW',_textArray];	 profileNamespace setVariable ['OPTRE_GLASS_CompassAlpha',_pictArray];			_exitLoop = false;		_count = 0;	 While {!_exitLoop} do {		_text = (( findDisplay 5604 ) displayCtrl 1502) lbText _count;		if (_text == _listBoxText) then {		 ((findDisplay 5604) displayCtrl 1502) lbSetCurSel _count;		 _exitLoop = true;		 };		if (_text == '' or 'No control' == str (( findDisplay 5604 ) displayCtrl 1502) ) then {		 _exitLoop = true;			((findDisplay 5604) displayCtrl 1502) lbSetCurSel 0;		};		_count = _count + 1;	 }; _colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 5604 ) displayCtrl _x)));} forEach [1405,1406,1407,1408]; profileNamespace setVariable ['OPTRE_GLASS_CompassAlpha',_colourArray]; (( findDisplay 5604 ) displayCtrl 1201) ctrlSetTextColor _colourArray; _colourArray = []; {_colourArray pushBack (parseNumber (ctrlText (( findDisplay 5604 ) displayCtrl _x)));} forEach [1405,1406,1407,1408]; profileNamespace setVariable ['OPTRE_GLASS_CompassAlpha',_colourArray]; (( findDisplay 5604 ) displayCtrl 1200) ctrlSetTextColor _textArray; {(( findDisplay 5604 ) displayCtrl _x) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_GLASS_CompassAlpha',[0,0,0,0]]);} forEach [103];  {(( findDisplay 5604 ) displayCtrl _x) ctrlSetTextColor (profileNamespace getVariable ['OPTRE_GLASS_HUDColourPictNEW',[0,0,0,0]]);} forEach [101,102];";
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
			//onMouseEnter  = "((findDisplay 5604) displayCtrl 3) ctrlSetTextColor [0.85,0,0,1];";
			//onMouseExit   = "((findDisplay 5604) displayCtrl 3) ctrlSetTextColor [1,1,1,1];";		
			onButtonClick = "	 _savedVariableFull = (profileNameSpace getVariable ['OPTRE_GLASS_HUDSavedSchemes',[]]);	 _curSel = (lbCurSel (( findDisplay 5604 ) displayCtrl 150));		if (_curSel > -1) then {				_savedVariableFullMinus = _savedVariableFull - [(_savedVariableFull select _curSel)];		profileNameSpace setVariable ['OPTRE_GLASS_HUDSavedSchemes',_savedVariableFullMinus];				_ctrlList = (( findDisplay 5604 ) displayCtrl 150);		lbClear _ctrlList;		 {_i = (_ctrlList lbAdd (_x select 0));} forEach (profileNameSpace getVariable ['OPTRE_GLASS_HUDSavedSchemes',[]]);		playSound 'AddItemOK';			 } else {			 playSound 'AddItemFailed';			 };	 ";
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
			OnLoad = "{_i = ((_this select 0) lbAdd (_x select 0));} forEach (profileNameSpace getVariable ['OPTRE_GLASS_HUDSavedSchemes',[]]);";
		};
		class RscListbox_1500: OPTRE_UNSCMENU_RscListbox
		{
			idc = 1502;
			x = 0.716563 * safezoneW + safezoneX;
			y = 0.181 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.396 * safezoneH;									
			onLoad = "{ private ['_i','_x']; _i = (_this select 0) lbAdd (format ['Preview %1 Marrine Glasses', (_x select 1)]); (_this select 0) lbSetData [_i, (_x select 0)]; (_this select 0) lbSetCurSel (if ( ((_x select 0) == (goggles player)) AND ((lbCurSel 1502) < 0) ) then {_i}); } forEach [['OPTRE_HUD_b_Glasses','Blue'],['OPTRE_HUD_g_Glasses','Green'],['OPTRE_HUD_Glasses','Orange'],['OPTRE_HUD_p_Glasses','Pink'],['OPTRE_HUD_r_Glasses','Red'],['OPTRE_HUD_w_Glasses','White']]; [] spawn { 0.1; (( findDisplay 5604 ) displayCtrl 100) ctrlSetTextColor (switch (goggles player) do {case 'OPTRE_HUD_b_Glasses': { [0,0,1,0.15] }; case 'OPTRE_HUD_g_Glasses': { [0,1,0,0.15] }; case 'OPTRE_HUD_Glasses': { [1,0.8,0,0.2] }; case 'OPTRE_HUD_p_Glasses': { [0.3,0.16,0.41,0.225] }; case 'OPTRE_HUD_r_Glasses': { [1,0,0,0.18] }; case 'OPTRE_HUD_w_Glasses': { [1,1,1,0.05] }; default { [0,0,0,0] }; }); };";
			onLBSelChanged = "(( findDisplay 5604 ) displayCtrl 100) ctrlSetTextColor (switch ((_this select 0) lbData (lbCurSel (_this select 0))) do {case 'OPTRE_HUD_b_Glasses': { [0,0,1,0.15] }; case 'OPTRE_HUD_g_Glasses': { [0,1,0,0.15] }; case 'OPTRE_HUD_Glasses': { [1,0.8,0,0.2] }; case 'OPTRE_HUD_p_Glasses': { [0.3,0.16,0.41,0.225] }; case 'OPTRE_HUD_r_Glasses': { [1,0,0,0.18] }; case 'OPTRE_HUD_w_Glasses': { [1,1,1,0.05] }; default { [0,0,0,0] }; });"; 
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
			OnLoad = "{_menuName = getText (configfile >> 'cfgOptreUNSCmenus' >> _x >> 'MenuName');_function = getText (configfile >> 'cfgOptreUNSCmenus' >> _x >> 'Function');_securityValue = getNumber (configfile >> 'cfgOptreUNSCmenus' >> _x >> 'Security');_i = (_this select 0) lbAdd _menuName;(_this select 0) lbSetData [_i, _function];(_this select 0) lbSetValue [_i, _securityValue];(_this select 0) lbSetPicture [_i,(getText (configfile >> 'cfgOptreUNSCmenus' >> _x >> 'icon'))];if (_x == 'UNSC_HUD_Glass') then {(_this select 0) lbSetCurSel _i;};} forEach OPTRE_UNSC_Console_MenusAllowed;";
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