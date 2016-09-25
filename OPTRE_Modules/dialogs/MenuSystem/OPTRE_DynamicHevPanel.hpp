class OPTRE_HEVPanel 
{
	
	idd = 5600; 

	//onLoad = "";
	onUnload = "if (getMarkerColor 'OPTRE_Local_HEVConsolePosMarker' != '') then {deleteMarkerLocal 'OPTRE_Local_HEVConsolePosMarker';};";
		
	class Objects
	{
				
	};			
	class controls 
	{	

	
		class MAP: OPTRE_UNSCMENU_rscMapControl
		{
			idc = 1201;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.55 * safezoneH;
			onMouseButtonClick = "onMapSingleClick ""if (getMarkerColor 'OPTRE_Local_HEVConsolePosMarker' != '') then {deleteMarkerLocal 'OPTRE_Local_HEVConsolePosMarker';}; _marker = createMarkerLocal ['OPTRE_Local_HEVConsolePosMarker', _pos]; _marker setMarkerShapeLocal 'ICON'; _marker setMarkerColorLocal 'ColorBlue'; _marker setMarkerTypeLocal 'hd_dot'; _marker setMarkerTextLocal 'HEV Drop Location';  onMapSingleClick ''; true;"""; 
		};
		class BACKGROUND_COLOUR: OPTRE_UNSCMENU_RscPicture
		{
			idc = -1;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = -0.000156274 * safezoneW + safezoneX;
			y = -0.00599999 * safezoneH + safezoneY;
			w = 1.00547 * safezoneW;
			h = 1.012 * safezoneH;
			colorText[] = {0,0,0,0.3};
		};		
		class BACKGROUND: OPTRE_UNSCMENU_RscPicture
		{
			idc = -1; 
			text = "\OPTRE_Modules\data\picture\Menu\background.paa";
			x = 0.149377 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.70125 * safezoneW;
			h = 0.638 * safezoneH;
		};
		
		class podList: OPTRE_UNSCMENU_RscListbox
		{
			idc = 1500;
			x = 0.711407 * safezoneW + safezoneX;
			y = 0.17 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.407 * safezoneH;
		};	
		
		/*class OPTRE_UNSCMENU_RscButton_1600: OPTRE_UNSCMENU_RscButton
		{
			idc = 1600;
			text = "Switch Menu"; //--- ToDo: Localize;
			x = 0.17 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "closeDialog 0; _function = getText	(configfile >> ""cfgOptreUNSCmenus"" >> (OPTRE_UNSC_Console_MenusAllowed select (lbCurSel 1500)) >> ""Function""); if (_function != """") then {0 = [OPTRE_CurrentConsole,OPTRE_CurrentConsoleString] spawn (missionNamespace getVariable _function);} else {createDialog (getText	(configfile >> ""cfgOptreUNSCmenus"" >> (OPTRE_UNSC_Console_MenusAllowed select (lbCurSel 1500)) >> ""Dialog""));};";
		};		
		class menuList: OPTRE_UNSCMENU_RscListbox
		{
			idc = 1501;
			x = 0.17 * safezoneW + safezoneX;
			y = 0.182 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.242 * safezoneH;
		};*/
		
		class menuSwitchList: OPTRE_UNSCMENU_RscListbox
		{
			idc = 990;
			x = 0.17 * safezoneW + safezoneX;
			y = 0.182 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.242 * safezoneH;
			OnLoad = "{_menuName = getText (configfile >> 'cfgOptreUNSCmenus' >> _x >> 'MenuName');_function = getText (configfile >> 'cfgOptreUNSCmenus' >> _x >> 'Function');_securityValue = getNumber (configfile >> 'cfgOptreUNSCmenus' >> _x >> 'Security');_i = (_this select 0) lbAdd _menuName;(_this select 0) lbSetData [_i, _function];(_this select 0) lbSetValue [_i, _securityValue];(_this select 0) lbSetPicture [_i,(getText (configfile >> 'cfgOptreUNSCmenus' >> _x >> 'icon'))];if (_x == 'UNSC_HEV') then {(_this select 0) lbSetCurSel _i;};} forEach OPTRE_UNSC_Console_MenusAllowed;";
		};		
		class menuSwitchButton: OPTRE_UNSCMENU_RscButton
		{
			idc = -1;
			type = 1; 
			text = "Switch Menu"; //--- ToDo: Localize;
			x = 0.17 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "closeDialog 0; _function = getText	(configfile >> ""cfgOptreUNSCmenus"" >> (OPTRE_UNSC_Console_MenusAllowed select (lbCurSel 990)) >> ""Function""); if (_function != """") then {0 = [OPTRE_CurrentConsole,OPTRE_CurrentConsoleString] spawn (missionNamespace getVariable _function);} else {createDialog (getText	(configfile >> ""cfgOptreUNSCmenus"" >> (OPTRE_UNSC_Console_MenusAllowed select (lbCurSel 990)) >> ""Dialog""));};";
		};
		

		

		class OPTRE_UNSCMENU_RscButton_1601: OPTRE_UNSCMENU_RscButton
		{
			idc = 1601;
			text = "Cancel Launch"; //--- ToDo: Localize;
			x = 0.711406 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.055 * safezoneH;
			onButtonClick = "OPTRE_CurrentConsole setVariable [""OPTRE_PodsLaunchIn"",-1,true];";
		};
		class OPTRE_UNSCMENU_RscButton_1602: OPTRE_UNSCMENU_RscButton
		{
			idc = 1602;
			text = "Launch Now"; //--- ToDo: Localize;
			x = 0.711406 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.055 * safezoneH;
			onButtonClick = "if (getMarkerColor 'OPTRE_Local_HEVConsolePosMarker' != '') then {disableSerialization; _dialog = findDisplay 5600;_10 = (_dialog displayCtrl 10);_11 = (_dialog displayCtrl 11);_12 = (_dialog displayCtrl 12);_13 = (_dialog displayCtrl 13);_14 = (_dialog displayCtrl 14);_15 = (_dialog displayCtrl 15);_16 = (_dialog displayCtrl 16);0 = [[(getMarkerPos 'OPTRE_Local_HEVConsolePosMarker'),[],'Frigate Lowering Arm',45,0.1,-1,(_16 lbValue (lbCurSel _16)),(_10 lbValue (lbCurSel _10)),(_11 lbValue (lbCurSel _11)),(_12 lbValue (lbCurSel _12)),(_13 lbValue (lbCurSel _13)),(_14 lbValue (lbCurSel _14)),(_15 lbValue (lbCurSel _15)),true,false,600],OPTRE_CurrentConsole] remoteExec [""OPTRE_Fnc_HEVRoomDynamicSetupGrabUnits"", 2, false];} else {playSound 'FD_CP_Not_Clear_F';};";
		};
		
		
		class RscText_1000: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = 1000;
			text = "Cool Down In Progress "; //--- ToDo: Localize;
			x = 0.742344 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.044 * safezoneH;
			class Attributes
			{
				align = "center";
			};
		};
		
		
		class OPTRE_UNSCMENU_RscText_1: OPTRE_UNSCMENU_RscStructuredText
		{
			idc = 1;
			text = "Security Level: Grey"; //--- ToDo: Localize;
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
			text = "Security Level: Grey"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.192 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.022 * safezoneH;
			class Attributes
			{
				align = "right";
			};
		};
		
		
		class OPTRE_UNSCMENU_RscCombo_2100: OPTRE_UNSCMENU_RscCombo
		{
			idc = 10;
			x = 0.175156 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_UNSCMENU_RscCombo_2101: OPTRE_UNSCMENU_RscCombo
		{
			idc = 11;
			x = 0.175156 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_UNSCMENU_RscCombo_2102: OPTRE_UNSCMENU_RscCombo
		{
			idc = 12;
			x = 0.175156 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_UNSCMENU_RscCombo_2103: OPTRE_UNSCMENU_RscCombo
		{
			idc = 13;
			x = 0.175156 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_UNSCMENU_RscCombo_2104: OPTRE_UNSCMENU_RscCombo
		{
			idc = 14;
			x = 0.175156 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_UNSCMENU_RscCombo_2105: OPTRE_UNSCMENU_RscCombo
		{
			idc = 15;
			x = 0.175156 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OPTRE_UNSCMENU_RscCombo_2106: OPTRE_UNSCMENU_RscCombo
		{
			idc = 16;
			x = 0.175156 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
	};			
};