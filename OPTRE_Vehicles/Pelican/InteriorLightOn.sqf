_pelican = _this;

[-2, {int_light = "#lightpoint" createVehicle (getpos _pelican); int_light attachTo [_pelican, [0,5,-0.5]]; int_light setLightBrightness 0.4; int_light setLightAmbient [0, 0, 0]; int_light setLightColor [1, 0, 0];}] call CBA_fnc_globalExecute;
_pelican setVariable ["OPTRE_Pelican_AttachedLight",int_light,true];
_pelican setvariable ["OPTRE_Pelican_isLightOn",true,true];