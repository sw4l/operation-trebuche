_unit = _this select 0;
_corpse = _this select 1;
_corpse removeaction SC_Engineer_Menu;
SC_Engineer_Menu = _unit addaction [("<t color=""#FFFFFF"">" + ("Engineer Menu") +"</t>"),"scripts\SC_Engineer\menu.sqf", "", 1, false, false, "", "_target == _this"];