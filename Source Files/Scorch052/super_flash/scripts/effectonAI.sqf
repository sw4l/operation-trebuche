private ["_unit", "_t"];
_unit = _this;
_unit disableAI "AUTOTARGET";
_unit switchmove "acts_CrouchingCoveringRifle01";
_t = 0;
while {alive _unit} do {
	sleep 0.1;
	_t = _t + 0.1;
	
	if (_t > 5) exitWith{};
};
_unit switchmove "";
_unit enableAI "AUTOTARGET";