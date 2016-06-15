_logic = param [0,objNull,[objNull]];	// Argument 0 is module logic.
_units = param [1,[],[[]]];				// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_activated = param [2,true,[true]];		// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)

OPTRE_CleanUpMaxRubish  = _logic getVariable ["Junk", -1];
publicVariable "OPTRE_CleanUpMaxRubish";

OPTRE_VehicleCleanIdealMaxNumber  = _logic getVariable ["HEV", -1];
publicVariable "OPTRE_VehicleCleanIdealMaxNumber";

deleteVehicle _logic;

true;