_logic = param [0,objNull,[objNull]];	// Argument 0 is module logic.
_units = param [1,[],[[]]];				// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_activated = param [2,true,[true]];		// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)

_shipDeployment  = _logic getVariable ["shipDeployment","Frigate Lowering Arm"];
_LaunchDelay  = _logic getVariable ["LaunchDelay",5];
_randomXYVelocity  = _logic getVariable ["randomXYVelocity",0.1];
_launchSpeed = _logic getVariable ["launchSpeed",-250];
_manualControl  = _logic getVariable ["manualControl",1];

_startHeight  = _logic getVariable ["startHeight",5000];
_hevDropArmtmosphereStartHeight = _logic getVariable ["hevDropArmtmosphereStartHeight",5000];
_hevDropArmtmosphereEndHeight = _logic getVariable ["hevDropArmtmosphereEndHeight",3000];
_chuteDeployHeightHeight = _logic getVariable ["chuteDeployHeightHeight",1000];
_chuteDetachHeight  = _logic getVariable ["chuteDetachHeight",500];
_boasterHeight = _logic getVariable ["boasterHeight",100];

_deleteFrigate = _logic getVariable ["deleteFrigate",1];
//_deleteFrigate = if (_deleteFrigate > 0) then {true} else {false};

_deleteChutes = _logic getVariable ["deleteChutes",0];
//_deleteChutes = if (_deleteChutes > 0) then {true} else {false};

_deleteHEVSafter = _logic getVariable ["deleteHEVafter",600];

0 = [
	getPos _logic, 
	_units, 
	_shipDeployment, 
	_LaunchDelay, 
	_randomXYVelocity, 
	_launchSpeed, 
	_manualControl,
	_startHeight,
	_hevDropArmtmosphereStartHeight,
	_hevDropArmtmosphereEndHeight,
	_chuteDeployHeightHeight,
	_chuteDetachHeight,
	_boasterHeight,
	_deleteFrigate,
	_deleteChutes,
	_deleteHEVSafter
] call OPTRE_Fnc_HEV;

deleteVehicle _logic;

true;