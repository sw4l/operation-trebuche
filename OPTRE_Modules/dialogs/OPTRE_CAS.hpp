class OPTRE_ZeusDisplay_CAS {
	
		idd = 27000; 

		//onLoad = "";
		//onUnload = "";
		
		class Objects
				{
				
				};
				
		class controls 
				{

					class Background: OPTRE_Zeus_RscText
					{
						idc = 1001;
						x = 0.32675 * safezoneW + safezoneX;
						y = 0.291 * safezoneH + safezoneY;
						w = 0.350625 * safezoneW;
						h = 0.407 * safezoneH;
						colorBackground[] = {0,0,0,0.7};
					};
					class Text: OPTRE_Zeus_RscText
					{
						idc = 1002;
						text = "OPTRE CAS Module"; //--- ToDo: Localize;
						x = 0.324687 * safezoneW + safezoneX;
						y = 0.269 * safezoneH + safezoneY;
						w = 0.350625 * safezoneW;
						h = 0.022 * safezoneH;
						colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
					};
					class ListBox: OPTRE_ZEUS_RscListBox
					{
						idc = 1500;
						x = 0.335 * safezoneW + safezoneX;
						y = 0.302 * safezoneH + safezoneY;
						w = 0.335156 * safezoneW;
						h = 0.385 * safezoneH;
						onLoad = "{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_CAS' >> 'Arguments' >> 'vehicle' >> 'values' >> _x >> 'name'))); _className = (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_CAS' >> 'Arguments' >> 'vehicle' >> 'values' >> _x >> 'value')); (_this select 0) lbSetData [_i, _className]; (_this select 0) lbSetPicture [_i, (getText (configfile >> 'CfgVehicles' >> _className >> 'picture'))];   (_this select 0) lbSetPictureColor [_i, [1, 1, 1, 1]];  } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_CAS' >> 'Arguments' >> 'vehicle' >> 'values') call BIS_fnc_getCfgSubClasses); (_this select 0) lbSetCurSel 0;";
						sizeEx = 0.04221;
						 colorDisabled[] = {0.4, 0.4, 0.4, 1};
					};
					class ButtonOK: OPTRE_ZEUS_RscButton
					{
						x = 0.613437 * safezoneW + safezoneX;
						y = 0.709 * safezoneH + safezoneY;
						w = 0.061875 * safezoneW;
						h = 0.022 * safezoneH;
						colorText[] = {1,1,1,1};
						colorBackground[] = {0,0,0,0.8};
						text = "Ok";
						onButtonClick = "  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]); _data = ((findDisplay 27000) displayCtrl 1500) lbData (lbCurSel ((findDisplay 27000) displayCtrl 1500)); _logic setVariable [""vehicle"", _data, true]; hint str _data; closeDialog 0;";
					};
					class ButtonCancel: OPTRE_ZEUS_RscButton
					{
						x = 0.324687 * safezoneW + safezoneX;
						y = 0.709 * safezoneH + safezoneY;
						w = 0.061875 * safezoneW;
						h = 0.022 * safezoneH;
						colorText[] = {1,1,1,1};
						colorBackground[] = {0,0,0,0.8};
						text = "Close";
						onButtonClick = "closeDialog 0;";
					};

				};
				
};