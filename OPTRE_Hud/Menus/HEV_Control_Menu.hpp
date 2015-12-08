#define true 1
#define false 0

class OPTRE_Control_HEV
{
	idd = 11001;                      // set to -1, because we don't require a unique ID
	movingEnable = true;           // the dialog can be moved with the mouse (see "moving" below)
	enableSimulation = true;      // freeze the game
	controlsBackground[] = { };    // no background controls needed
	
	onLoad = "IF !OPTRE_Hud_On THEN {false call OPTRE_fnc_ToggleVisor;};";
	onUnLoad = "(findDisplay 46) displayRemoveEventHandler ['KeyDown',moduleName_keyDownEHId];";
	
 	class Objects {
	
	};   
	
    class Controls
    {

		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Jiduhi)
		////////////////////////////////////////////////////////
		//class RscMapControl;
		class OPTREB_RscMapControl: OPTRE_HUD_rscMapControl_HUD_1
		{
				idc = 1800;
			
				access = 0;
				alphaFadeEndScale = 1;
				alphaFadeStartScale = 0;
				colorBackground[] = {0,0,0,0};
				colorCountlines[] = {0.572,0.354,0.188,0.25};
				colorCountlinesWater[] = {0.491,0.577,0.702,0.3};
				colorForest[] = {0.624,0.78,0.388,0.5};
				colorForestBorder[] = {0,0,0,0};
				colorGrid[] = {0.1,0.1,0.1,0.6};
				colorGridMap[] = {0.1,0.1,0.1,0.6};
				colorInactive[] = {1,1,1,0.5};
				colorLevels[] = {0.286,0.177,0.094,0.5};
				colorMainCountlines[] = {0.572,0.354,0.188,0.5};
				colorMainCountlinesWater[] = {0.491,0.577,0.702,0.6};
				colorMainRoads[] = {0.9,0.5,0.3,1};
				colorMainRoadsFill[] = {1,0.6,0.4,1};
				colorNames[] = {0.1,0.1,0.1,0.9};
				colorOutside[] = {0,0,0,1};
				colorPowerLines[] = {0.1,0.1,0.1,1};
				colorRailWay[] = {0.8,0.2,0,1};
				colorRoads[] = {0.7,0.7,0.7,1};
				colorRoadsFill[] = {1,1,1,1};
				colorRocks[] = {0,0,0,0.3};
				colorRocksBorder[] = {0,0,0,0};
				colorSea[] = {0.467,0.631,0.851,0.5};
				colorText[] = {0,0,0,1};
				colorTracks[] = {0.84,0.76,0.65,0.15};
				colorTracksFill[] = {0.84,0.76,0.65,1};
				font = "TahomaB";
				fontGrid = "TahomaB";
				fontInfo = "PuristaMedium";
				fontLabel = "PuristaMedium";
				fontLevel = "TahomaB";
				fontNames = "PuristaMedium";
				fontUnits = "TahomaB";
				maxSatelliteAlpha = 0;
				moveOnEdges = 0;
				ptsPerSquareCLn = 10;
				ptsPerSquareCost = 10;
				ptsPerSquareExp = 10;
				ptsPerSquareFor = 9;
				ptsPerSquareForEdge = 9;
				ptsPerSquareObj = 9;
				ptsPerSquareRoad = 6;
				ptsPerSquareSea = 5;
				ptsPerSquareTxt = 3;
				scaleDefault = 0.16;
				scaleMax = 1;
				scaleMin = 0.001;
				shadow = 0;
				showCountourInterval = 0;
				sizeEx = 0;//0.04;
				//sizeExGrid = 0;//0.02;
				//sizeExInfo = 0;//"(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
				//sizeExLabel = 0;//"(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
				//sizeExLevel = 0;//.02;
				//sizeExNames = 0;//"(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";
				//sizeExUnits = 0;//"(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
				stickX[] = {0,["Gamma",0,0]};
				stickY[] = {0,["Gamma",0,0]};
				style = 48;
				text = "#(argb,8,8,3)color(0,0,0,0)";
				type = 101;
			
			x = 0.257656 * safezoneW + safezoneX;
			y = 0.17 * safezoneH + safezoneY;
			w = 0.484688 * safezoneW;
			h = 0.704 * safezoneH;
			
			onLoad = " (_this select 0) ctrlRemoveAllEventHandlers  'draw';     0 = [(_this select 0)] execVM 'HEV_Controls.sqf';         OPTRE_HEV_Control_Div = (0.085 / ((getpos player) select 2));       _pos = (getPos player);        (_this select 0) ctrlAddEventHandler ['Draw', '        _ctrl = _this select 0;  _pos = (getPos player);  _ctrl ctrlMapAnimAdd [0, ((_pos select 2) * OPTRE_HEV_Control_Div), player];     ctrlMapAnimCommit (_THIS SELECT 0);        _ctrl drawLine [_pos,( [_pos, 5000, 0] call OPTRE_fnc_MathsTriangulatePos ),OPTRE_Hud_ColorScheme_Frame];    _ctrl drawLine [_pos,( [_pos, 5000, 180] call OPTRE_fnc_MathsTriangulatePos ),OPTRE_Hud_ColorScheme_Frame];    _ctrl drawLine [_pos,( [_pos, 5000, 90] call OPTRE_fnc_MathsTriangulatePos ),OPTRE_Hud_ColorScheme_Frame];    _ctrl drawLine [_pos,( [_pos, 5000, 270] call OPTRE_fnc_MathsTriangulatePos ),OPTRE_Hud_ColorScheme_Frame];      '];";
		
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////

	};
	
};