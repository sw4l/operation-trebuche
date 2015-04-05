_pod = _this select 0;
_unit = _this select 1;
_chute = _this select 2;
_impact = _this select 3;
_fire = _this select 4;
_height = _this select 5;
_light = _this select 6;

detach _impact;
detach _chute;
detach _fire;
deletevehicle _chute;
deletevehicle _fire;

_pos = getposATL _pod;
_dir = getdir _pod;
_attach = createVehicle ["Sign_Sphere10cm_F", [_pos select 0,_pos select 1,_pos select 2], [], 0, ""];
_attach hideObjectGlobal true;
_attach attachto [_pod,[0,0,0]];
detach _attach;
_attach setdir _dir;
_pod attachto [_attach,[0,0,0]];
_pod setdir 0;
_pod setVectorUp [0,0,1];
if (_fire != objNull) then {detach _fire; deletevehicle _fire;};
_light setLightAmbient[0,1,0];
_light setLightColor[0,1,0];

sleep 1;

_podDoor_fnc = [_unit, _pod] spawn OPTRE_HEV_fnc_podDoorAI;

_pod setvehiclelock "UNLOCKED";
_pod allowdamage true;
_unit disableCollisionWith _pod;
sleep 1;
moveOut _unit;
waitUntil {vehicle _unit == _unit};
_attach hideObjectGlobal true;
_pod setvehiclelock "LOCKED";
sleep 3;
_unit allowdamage true;