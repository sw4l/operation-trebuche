_pelican = _this;

int_light = _pelican getVariable "OPTRE_Pelican_AttachedLight";
deletevehicle int_light;
_pelican setvariable ["OPTRE_Pelican_isLightOn",false,true];