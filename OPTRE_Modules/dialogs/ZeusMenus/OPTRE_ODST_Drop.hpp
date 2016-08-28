class OPTRE_ZeusDisplay_ODSTDrop {
	
		idd = 27000; 

		onLoad = "0 = [] spawn {private ['_v']; _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _v = (_logic getVariable ['OPTRE_ModuleValue',[5,11,3,7,8,3,2,7]]); for '_i' from 0 to 7 do { lbSetCurSel [([1500,1501,1502,1503,1504,1505,1506,1507] select _i), (_v select _i)];};};";
		//onUnload = "";
		
		class Objects
				{
				
				};
				
		class controls 
				{

				////////////////////////////////////////////////////////
				// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Dehiho)
				////////////////////////////////////////////////////////

				class RscListbox_1500: OPTRE_Zeus_RscCombo
				{
					idc = 1500;
					x = 0.365937 * safezoneW + safezoneX;
					y = 0.335 * safezoneH + safezoneY;
					w = 0.128906 * safezoneW;
					h = 0.022 * safezoneH;
					onLoad = "{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";// _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _v = ((_logic getVariable ['OPTRE_ModuleValue',[5,11,3,7,8,3,2,7]]) select 0); (_this select 0) lbSetCurSel _v;";
					onLBSelChanged = "  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
				};
				class RscListbox_1501: OPTRE_Zeus_RscCombo
				{
					idc = 1501;
					x = 0.365937 * safezoneW + safezoneX;
					y = 0.368 * safezoneH + safezoneY;
					w = 0.128906 * safezoneW;
					h = 0.022 * safezoneH;
					onLoad = "{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";//_logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _v = ((_logic getVariable ['OPTRE_ModuleValue',[5,11,3,7,8,3,2,7]]) select 1); (_this select 0) lbSetCurSel _v;";
					onLBSelChanged = "  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
				};
				class RscListbox_1502: OPTRE_Zeus_RscCombo
				{
					idc = 1502;
					x = 0.365937 * safezoneW + safezoneX;
					y = 0.401 * safezoneH + safezoneY;
					w = 0.128906 * safezoneW;
					h = 0.022 * safezoneH;
					onLoad = "{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";//_logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _v = ((_logic getVariable ['OPTRE_ModuleValue',[5,11,3,7,8,3,2,7]]) select 2); (_this select 0) lbSetCurSel _v;";
					onLBSelChanged = "  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
				};
				class RscListbox_1503: OPTRE_Zeus_RscCombo
				{
					idc = 1503;
					x = 0.365937 * safezoneW + safezoneX;
					y = 0.434 * safezoneH + safezoneY;
					w = 0.128906 * safezoneW;
					h = 0.022 * safezoneH;
					onLoad = "{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";//_logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _v = ((_logic getVariable ['OPTRE_ModuleValue',[5,11,3,7,8,3,2,7]]) select 3); (_this select 0) lbSetCurSel _v;";
					onLBSelChanged = "  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
				};
				class RscListbox_1504: OPTRE_Zeus_RscCombo
				{
					idc = 1504;
					x = 0.365937 * safezoneW + safezoneX;
					y = 0.467 * safezoneH + safezoneY;
					w = 0.128906 * safezoneW;
					h = 0.022 * safezoneH;
					onLoad = "{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";//_logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _v = ((_logic getVariable ['OPTRE_ModuleValue',[5,11,3,7,8,3,2,7]]) select 4); (_this select 0) lbSetCurSel _v;";
					onLBSelChanged = "  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
				};
				class RscListbox_1505: OPTRE_Zeus_RscCombo
				{
					idc = 1505;
					x = 0.365937 * safezoneW + safezoneX;
					y = 0.5 * safezoneH + safezoneY;
					w = 0.128906 * safezoneW;
					h = 0.022 * safezoneH;
					onLoad = "{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";//_logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _v = ((_logic getVariable ['OPTRE_ModuleValue',[5,11,3,7,8,3,2,7]]) select 5); (_this select 0) lbSetCurSel _v;";
					onLBSelChanged = "  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
				};
				class RscListbox_1506: OPTRE_Zeus_RscCombo
				{
					idc = 1506;
					x = 0.365937 * safezoneW + safezoneX;
					y = 0.533 * safezoneH + safezoneY;
					w = 0.128906 * safezoneW;
					h = 0.022 * safezoneH;
					onLoad = "{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";//_logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _v = ((_logic getVariable ['OPTRE_ModuleValue',[5,11,3,7,8,3,2,7]]) select 6); (_this select 0) lbSetCurSel _v;";
					onLBSelChanged = "  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
				};
				class RscListbox_1507: OPTRE_Zeus_RscCombo
				{
					idc = 1507;
					x = 0.365937 * safezoneW + safezoneX;
					y = 0.566 * safezoneH + safezoneY;
					w = 0.128906 * safezoneW;
					h = 0.022 * safezoneH;
					onLoad = "{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";//_logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _v = ((_logic getVariable ['OPTRE_ModuleValue',[5,11,3,7,8,3,2,7]]) select 7); (_this select 0) lbSetCurSel _v;";
					onLBSelChanged = "  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
				};


				class RscText_1002: OPTRE_ZEUS_RscText
				{
					idc = 1002;
					text = "OPTRE ODST Drop Module"; //--- ToDo: Localize;
					x = 0.355623 * safezoneW + safezoneX;
					y = 0.291 * safezoneH + safezoneY;
					w = 0.154687 * safezoneW;
					h = 0.033 * safezoneH;
					colorBackground[] = {0,0,1,1};
				};

				
				
				class RscButtonMenuOK_2600: OPTRE_ZEUS_RscButton
				{
					text = "Close"; //--- ToDo: Localize;
					x = 0.402031 * safezoneW + safezoneX;
					y = 0.599 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.033 * safezoneH;
					colorBackground[] = {0,0,1,1};
					onButtonClick = "closeDialog 0;";
				};
				class RscButtonMenuOK_2601: OPTRE_ZEUS_RscButton
				{
					text = "Drop!"; //--- ToDo: Localize;
					x = 0.45875 * safezoneW + safezoneX;
					y = 0.599 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.033 * safezoneH;
					colorBackground[] = {0,0,1,1};
					onButtonClick = "_logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]); { _logic setVariable [(_x select 1), (lbData [(_x select 0), (lbCurSel (_x select 0))]), true]; } forEach [ [1500,'ODST_Man_1'],[1501,'ODST_Man_2'],[1502,'ODST_Man_3'],[1503,'ODST_Man_4'],[1504,'ODST_Man_5'],[1505,'ODST_Man_6'],[1506,'ODST_Man_7'],[1507,'ODST_Man_8'] ]; closeDialog 0;";
				};				
				
				class RscFrame_1800: OPTRE_ZEUS_RscPicture
				{
					idc = 1800;
					x = 0.355625 * safezoneW + safezoneX;
					y = 0.324 * safezoneH + safezoneY;
					w = 0.154687 * safezoneW;
					h = 0.275 * safezoneH;
					colorText[] = {1,1,1,0.9};
					colorBackground[] = {1,1,1,0.9};
				};
				class RscFrame_1801: OPTRE_ZEUS_RscPicture
				{
					idc = 1801;
					x = 0.355625 * safezoneW + safezoneX;
					y = 0.599 * safezoneH + safezoneY;
					w = 0.04125 * safezoneW;
					h = 0.033 * safezoneH;
					colorText[] = {1,1,1,0.9};
					colorBackground[] = {1,1,1,0.9};
				};
				////////////////////////////////////////////////////////
				// GUI EDITOR OUTPUT END
				////////////////////////////////////////////////////////
				};	
};