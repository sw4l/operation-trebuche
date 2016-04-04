class OPTRE_ZeusDisplay_ResupplyPelican {
	
		idd = 27000; 

		//onLoad = "";
		//onUnload = "";
		
		class Objects
				{
				
				};
				
		class controls 
				{

				

					class OPTRE_ZEUS_SructuredText_1000: OPTRE_ZEUS_RscText
					{
						idc = 1000;
						text = " OPTRE Resupply Via Pelican Module"; //--- ToDo: Localize;
						x = 0.355625 * safezoneW + safezoneX;
						y = 0.324 * safezoneH + safezoneY;
						w = 0.28875 * safezoneW;
						h = 0.030 * safezoneH;
						//colorBackground[] = {1,-1,-1,1};
					};
					class RscFrame_1800: OPTRE_ZEUS_RscPicture
					{
						idc = 1800;
						x = 0.355625 * safezoneW + safezoneX;
						y = 0.357 * safezoneH + safezoneY;
						w = 0.28875 * safezoneW;
						h = 0.275 * safezoneH;
					};
					
					
					
					
					class RscButtonMenuOK_2600: OPTRE_ZEUS_RscButton
					{
						text = "Ok";
						idc = 22100;
						x = 0.587656 * safezoneW + safezoneX;
						y = 0.6355 * safezoneH + safezoneY;
						w = 0.0567187 * safezoneW;
						h = 0.022 * safezoneH;
						onButtonClick = "_logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]); _arrayNumber = []; {_n = lbCurSel (_x select 0); _arrayNumber pushBack _n; _d = lbData [(_x select 0), _n]; if (_d == '' AND (_x select 1) != 'code') then {_d = (lbValue [(_x select 0), _n]); }; _logic setVariable [(_x select 1), _d, true]; } forEach [ [2100,'spawnDir'],[2101,'distance'],[2102,'exitDir'],[2103,'Pelican_Unarmed_Colour'],[2104,'flyInHeight'],[2105,'side'],[2106,'code'],[2107,'gunner'],[2108,'vehicle'],[2109,'box1'],[2110,'box2'],[2111,'box3'],[2112,'box4'],[2113,'box5'],[2114,'box6'] ]; profileNamespace setVariable ['OPTRE_Zeus_PelicanReSup',_arrayNumber]; closeDialog 0;"; //(profileNamespace getVariable ['(profileNamespace getVariable ['OPTRE_Zeus_PelicanReSup',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ])',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ])
					};
					class RscButtonMenuCancel_2700: OPTRE_ZEUS_RscButton
					{
						text = "Close";
						idc = 22101;
						x = 0.525781 * safezoneW + safezoneX;
						y = 0.6355 * safezoneH + safezoneY;
						w = 0.0567187 * safezoneW;
						h = 0.022 * safezoneH;
						onButtonClick = "_arrayNumber = []; { _n = lbCurSel (_x select 0); _arrayNumber pushBack _n; } forEach [ [2100,'spawnDir'],[2101,'distance'],[2102,'exitDir'],[2103,'Pelican_Unarmed_Colour'],[2104,'flyInHeight'],[2105,'side'],[2106,'code'],[2107,'gunner'],[2108,'vehicle'],[2109,'box1'],[2110,'box2'],[2111,'box3'],[2112,'box4'],[2113,'box5'],[2114,'box6']  ]; profileNamespace setVariable ['OPTRE_Zeus_PelicanReSup',_arrayNumber]; closeDialog 0;";  
					};
					
					
					
					
					class OPTRE_ZEUS_SructuredText_1001: OPTRE_ZEUS_SructuredText
					{
						idc = 1001;
						text = "Approach From:"; //--- ToDo: Localize;
						x = 0.360781 * safezoneW + safezoneX;
						y = 0.368 * safezoneH + safezoneY;
						w = 0.0721875 * safezoneW;
						h = 0.022 * safezoneH;
					};
					class OPTRE_Zeus_RscCombo_2100: OPTRE_Zeus_RscCombo
					{
						idc = 2100;
						x = 0.438124 * safezoneW + safezoneX;
						y = 0.368 * safezoneH + safezoneY;
						w = 0.0670312 * safezoneW;
						h = 0.022 * safezoneH;
						OnLoad = "{_i = (_this select 0) lbAdd (_x select 0); (_this select 0) lbSetValue [_i, (_x select 1)];} forEach [['North',0],['North-West',45],['East',90],['South-East',135],['South',180],['South-West',225],['North-West',270]]; (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanReSup',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 0);";	
					};	

					
					
					class OPTRE_ZEUS_SructuredText_1002: OPTRE_ZEUS_SructuredText
					{
						idc = 1002;
						text = "Spawn Distance:"; //--- ToDo: Localize;
						x = 0.360781 * safezoneW + safezoneX;
						y = 0.401 * safezoneH + safezoneY;
						w = 0.0773437 * safezoneW;
						h = 0.022 * safezoneH;
					};
					class OPTRE_Zeus_RscCombo_2101: OPTRE_Zeus_RscCombo
					{
						idc = 2101;
						x = 0.438125 * safezoneW + safezoneX;
						y = 0.401 * safezoneH + safezoneY;
						w = 0.0670312 * safezoneW;
						h = 0.022 * safezoneH;
						OnLoad = "{_i = (_this select 0) lbAdd (str _x + 'm'); (_this select 0) lbSetValue [_i, _x];} forEach [3000,4000,5000,6000,7000,8000,9000,10000,11000,12000,13000,14000,15000]; (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanReSup',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 1);";
					};	

					
					
					class OPTRE_ZEUS_SructuredText_1003: OPTRE_ZEUS_SructuredText
					{
						idc = 1003;
						text = "Exit Direction:"; //--- ToDo: Localize;
						x = 0.360781 * safezoneW + safezoneX;
						y = 0.434 * safezoneH + safezoneY;
						w = 0.0773437 * safezoneW;
						h = 0.022 * safezoneH;
					};
					class OPTRE_Zeus_RscCombo_2102: OPTRE_Zeus_RscCombo
					{
						idc = 2102;
						x = 0.438125 * safezoneW + safezoneX;
						y = 0.434 * safezoneH + safezoneY;
						w = 0.0670312 * safezoneW;
						h = 0.022 * safezoneH;
						OnLoad = "{_i = (_this select 0) lbAdd (_x select 0); (_this select 0) lbSetValue [_i, (_x select 1)];} forEach [['North',0],['North-West',45],['East',90],['South-East',135],['South',180],['South-West',225],['North-West',270]]; (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanReSup',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 2);";
					};
					
					
					
					
					class OPTRE_ZEUS_SructuredText_1004: OPTRE_ZEUS_SructuredText
					{
						idc = 1004;
						text = "Pelican Style:"; //--- ToDo: Localize;
						x = 0.360781 * safezoneW + safezoneX;
						y = 0.467 * safezoneH + safezoneY;
						w = 0.0773437 * safezoneW;
						h = 0.022 * safezoneH;
					};
					class OPTRE_Zeus_RscCombo_2103: OPTRE_Zeus_RscCombo
					{
						idc = 2103;
						x = 0.438125 * safezoneW + safezoneX;
						y = 0.467 * safezoneH + safezoneY;
						w = 0.0670312 * safezoneW;
						h = 0.022 * safezoneH;
						//OnLoad = "{_i = (_this select 0) lbAdd _x; _i = (_this select 0) lbSetData  [_i, _x];} forEach ['Marine','Tan','Green','Black','Insurrection']; (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanReSup',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 3);";
						OnLoad = "{_i = (_this select 0) lbAdd (_x select 0); _i = (_this select 0) lbSetData	[_i, (_x select 1)];} forEach [['Black','black'],['Tan','tan'],['Green','green'],['Green Marine','marine'],['Insurrection','insurrection']]; (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanAirAssault',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 3);";

					};
					
					
					
					
					class OPTRE_ZEUS_SructuredText_1005: OPTRE_ZEUS_SructuredText
					{
						idc = 1005;
						text = "Fly In Height:"; //--- ToDo: Localize;
						x = 0.360781 * safezoneW + safezoneX;
						y = 0.5 * safezoneH + safezoneY;
						w = 0.0773437 * safezoneW;
						h = 0.022 * safezoneH;
					};
					class OPTRE_Zeus_RscCombo_2104: OPTRE_Zeus_RscCombo
					{
						idc = 2104;
						x = 0.438125 * safezoneW + safezoneX;
						y = 0.5 * safezoneH + safezoneY;
						w = 0.0670312 * safezoneW;
						h = 0.022 * safezoneH;
						OnLoad = "{_i = (_this select 0) lbAdd (str _x + 'm'); _i = (_this select 0) lbSetValue [_i, _x];} forEach [20,30,40,50,60,70,80,90,100,110,120,130,140,150,200,300,400,500]; (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanReSup',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 4);";
					};
					
					
					
					class OPTRE_ZEUS_SructuredText_1006: OPTRE_ZEUS_SructuredText
					{
						idc = 1006;
						text = "Pelicans Side:"; //--- ToDo: Localize;
						x = 0.360781 * safezoneW + safezoneX;
						y = 0.533 * safezoneH + safezoneY;
						w = 0.0773437 * safezoneW;
						h = 0.022 * safezoneH;
					};
					class OPTRE_Zeus_RscCombo_2105: OPTRE_Zeus_RscCombo
					{
						idc = 2105;
						x = 0.438125 * safezoneW + safezoneX;
						y = 0.533 * safezoneH + safezoneY;
						w = 0.0670312 * safezoneW;
						h = 0.022 * safezoneH;
						OnLoad = "{_i = (_this select 0) lbAdd _x; _i = (_this select 0) lbSetData [_i, _x];} forEach ['WEST','EAST','INDEPENDENT','CIVILIAN']; (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanReSup',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 5); 0 = [] spawn { {((findDisplay 27000) displayCtrl _x) ctrlSetTextColor (switch ( lbCurSel ((findDisplay 27000) displayCtrl 2105) ) do {case 0: {[0,0,1,1]}; case 1: {[1,1,1,1]}; case 2: {[0,1,0,1]}; case 3: {[0,0.5,1,1]};});} forEach [1000,22100,22101]; };";
						onLBSelChanged = "0 = [] spawn { {((findDisplay 27000) displayCtrl _x) ctrlSetTextColor (switch ( lbCurSel ((findDisplay 27000) displayCtrl 2105) ) do {case 0: {[0,0,1,1]}; case 1: {[1,1,1,1]}; case 2: {[0,1,0,1]}; case 3: {[0,0.5,1,1]};});} forEach [1000,22100,22101]; }; ";
					}; 
					
					
					
					
					class OPTRE_ZEUS_SructuredText_1007: OPTRE_ZEUS_SructuredText
					{
						idc = 1007;
						text = "Custom Code:"; //--- ToDo: Localize;
						x = 0.360781 * safezoneW + safezoneX;
						y = 0.566 * safezoneH + safezoneY;
						w = 0.0773437 * safezoneW;
						h = 0.022 * safezoneH;
					};
					class OPTRE_Zeus_RscCombo_2106: OPTRE_Zeus_RscCombo
					{
						idc = 2106;
						x = 0.438125 * safezoneW + safezoneX;
						y = 0.566 * safezoneH + safezoneY;
						w = 0.0670312 * safezoneW;
						h = 0.022 * safezoneH;
						OnLoad = "(_this select 0) lbAdd 'W.I.P';  (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanReSup',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 6);";
					};
					
					
					
					
					class OPTRE_ZEUS_SructuredText_1008: OPTRE_ZEUS_SructuredText
					{
						idc = 1008;
						text = "Vehicle Gunner:"; //--- ToDo: Localize;
						x = 0.360781 * safezoneW + safezoneX;
						y = 0.599 * safezoneH + safezoneY;
						w = 0.0773437 * safezoneW;
						h = 0.022 * safezoneH;
					};
					class OPTRE_Zeus_RscCombo_2107: OPTRE_Zeus_RscCombo
					{
						idc = 2107;
						x = 0.438125 * safezoneW + safezoneX;
						y = 0.599 * safezoneH + safezoneY;
						w = 0.0670312 * safezoneW;
						h = 0.022 * safezoneH;
						OnLoad = "(_this select 0) lbAdd 'W.I.P';  (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanReSup',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 7);";
					};
					
					
					
					
					class OPTRE_ZEUS_SructuredText_1009: OPTRE_ZEUS_SructuredText
					{
						idc = 1009;
						text = "Vehicle To Be Dropped:"; //--- ToDo: Localize;
						x = 0.510312 * safezoneW + safezoneX;
						y = 0.370 * safezoneH + safezoneY;
						w = 0.128906 * safezoneW;
						h = 0.022 * safezoneH;
					};
					class OPTRE_Zeus_RscCombo_2108: OPTRE_Zeus_RscCombo
					{
						idc = 2108;
						x = 0.510312 * safezoneW + safezoneX;
						y = 0.39 * safezoneH + safezoneY;
						w = 0.128906 * safezoneW;
						h = 0.022 * safezoneH;																																										
						onLoad = "{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'vehicle' >> 'values' >> _x >> 'name'))); (_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'vehicle' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'vehicle' >> 'values') call BIS_fnc_getCfgSubClasses); (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanReSup',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 8);";
					};
					
					
					
					
					class OPTRE_ZEUS_SructuredText_1010: OPTRE_ZEUS_SructuredText
					{
						idc = 1010;
						text = "Supply Pods To Be Dropped:"; //--- ToDo: Localize;
						x = 0.510312 * safezoneW + safezoneX;
						y = 0.414 * safezoneH + safezoneY;
						w = 0.128906 * safezoneW;
						h = 0.022 * safezoneH;
					};
					class OPTRE_Zeus_RscCombo_2109: OPTRE_Zeus_RscCombo
					{
						idc = 2109;
						x = 0.510312 * safezoneW + safezoneX;
						y = 0.434 * safezoneH + safezoneY;
						w = 0.128906 * safezoneW;
						h = 0.022 * safezoneH;
						onLoad = "{_i = (_this select 0) lbAdd ('Pod 1: ' + (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'box1' >> 'values' >> _x >> 'name'))); _i = (_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'box2' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'box1' >> 'values') call BIS_fnc_getCfgSubClasses); (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanReSup',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 9);";
					};	
					class OPTRE_Zeus_RscCombo_2110: OPTRE_Zeus_RscCombo
					{
						idc = 2110;
						x = 0.510312 * safezoneW + safezoneX;
						y = 0.467 * safezoneH + safezoneY;
						w = 0.128906 * safezoneW;
						h = 0.022 * safezoneH;
						onLoad = "{_i = (_this select 0) lbAdd ('Pod 2: ' + (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'box1' >> 'values' >> _x >> 'name'))); _i = (_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'box2' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'box1' >> 'values') call BIS_fnc_getCfgSubClasses); (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanReSup',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 10);";						
					};
					class OPTRE_Zeus_RscCombo_2111: OPTRE_Zeus_RscCombo
					{
						idc = 2111;
						x = 0.510312 * safezoneW + safezoneX;
						y = 0.5 * safezoneH + safezoneY;
						w = 0.128906 * safezoneW;
						h = 0.022 * safezoneH;
						onLoad = "{_i = (_this select 0) lbAdd ('Pod 3: ' + (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'box1' >> 'values' >> _x >> 'name'))); _i = (_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'box2' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'box1' >> 'values') call BIS_fnc_getCfgSubClasses); (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanReSup',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 11);";						
					};
					class OPTRE_Zeus_RscCombo_2112: OPTRE_Zeus_RscCombo
					{
						idc = 2112;
						x = 0.510312 * safezoneW + safezoneX;
						y = 0.533 * safezoneH + safezoneY;
						w = 0.128906 * safezoneW;
						h = 0.022 * safezoneH;
						onLoad = "{_i = (_this select 0) lbAdd ('Pod 4: ' + (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'box1' >> 'values' >> _x >> 'name'))); _i = (_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'box2' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'box1' >> 'values') call BIS_fnc_getCfgSubClasses); (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanReSup',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 12);";
					};
					class OPTRE_Zeus_RscCombo_2113: OPTRE_Zeus_RscCombo
					{
						idc = 2113;
						x = 0.510312 * safezoneW + safezoneX;
						y = 0.566 * safezoneH + safezoneY;
						w = 0.128906 * safezoneW;
						h = 0.022 * safezoneH;
						onLoad = "{_i = (_this select 0) lbAdd ('Pod 5: ' + (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'box1' >> 'values' >> _x >> 'name'))); _i = (_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'box2' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'box1' >> 'values') call BIS_fnc_getCfgSubClasses); (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanReSup',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 13);";						
					};
					class OPTRE_Zeus_RscCombo_2114: OPTRE_Zeus_RscCombo
					{
						idc = 2114;
						x = 0.510312 * safezoneW + safezoneX;
						y = 0.599 * safezoneH + safezoneY;
						w = 0.128906 * safezoneW;
						h = 0.022 * safezoneH;
						onLoad = "{_i = (_this select 0) lbAdd ('Pod 6: ' + (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'box1' >> 'values' >> _x >> 'name'))); _i = (_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'box2' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'box1' >> 'values') call BIS_fnc_getCfgSubClasses); (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanReSup',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 14);";
					};
					////////////////////////////////////////////////////////
					// GUI EDITOR OUTPUT END
					////////////////////////////////////////////////////////
					
				};
				
};