_Pelican = _this select 0;
_player = driver _Pelican;
_target = _Pelican getVariable "AttachedCargo";
_velocity = velocity _Pelican;

if (isNull(_target)) exitWith {}; 

detach _target;
_target setVelocity _velocity;
_Pelican setVariable ["AttachedCargo", objNull];
_Pelican vehicleChat format ["%1 is detached.", typeof(_target)]; 
