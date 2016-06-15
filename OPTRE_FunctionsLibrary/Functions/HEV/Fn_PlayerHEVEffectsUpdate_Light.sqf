/* 
	OPTRE_fnc_PlayerHEVEffectsUpdate_Light
	
	Description: Function is designed to be executed only from inside of the HEV scripts, do not execute it directly.
	
	Author: Big_Wilk
	
	Return: none
	
	Type: call
*/

if isDedicated exitWith {};

_lightEffect = (_this select 0);
_hev = (_this select 1);
_light = (_this select 2);

switch _lightEffect do {
	case 0: {
		_light setLightBrightness 0.3;
		_light setLightAmbient[1, 1, 0.5];
		_light setLightColor[0, 0, 1];
		_light attachTo [_hev, [0,1.5,2.5]];
		_light setLightFlareSize 1;
		_light setLightDayLight true;
	};
	case 1: {
		_light setLightBrightness 1;
		_light setLightAmbient[.9, .9, 0.3];
		_light setLightColor[.9, .9, 0.3];
		_light lightAttachObject [_hev, [0,1.5,-2]];
		_light setLightDayLight true;		
	};
};