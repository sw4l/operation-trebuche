private ["_player", "_target", "_Pelican", "_offset"];

_Pelican = _this select 0;
_player = driver _Pelican;
_OffSet = [0,-4.5,-1.5];

_target = _Pelican getVariable "CargoTarget";

if (isNull _target) exitWith {};

switch (_target isKindof "LandVehicle") do
{			
	case "Car":
		{
		_OffSet = [0,-3,-0.2]		
		};
	case "Tank":
		{
		_OffSet = [0,-4.5,-1.5]		
		};
	case "ReAmmoBox":
		{
		_OffSet = 	[0,-4,-0.2]		
		};
	case "Default":
		{
		_OffSet = 	[0,-4.5,-1.5]		
		};
        };
_target engineOn false;
_target attachTo [_Pelican, _offset];

_player setVariable ["CargoTarget", objNull];
_Pelican setVariable ["AttachedCargo", _target];

_Pelican vehicleChat format ["%1 ATTACHED", typeof _target]; 
 