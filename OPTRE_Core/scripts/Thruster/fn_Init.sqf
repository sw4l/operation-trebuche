OPTRE_Thruster_EngagedStatus = false;
waitUntil {time > 0};
while {time > 0} do
{
	{
		_VehCheck = ["OPTRE_Pelican", typeof _x, true] call BIS_fnc_inString;
		if (_VehCheck) then
		{
			if (!(_x getVariable ["OPTRE_Thruster_HasAction", false])) then {
				_x addaction [("<t color=""#DF0101"">" + ("/// ENGAGE FORWARD THRUSTERS ///") +"</t>"), OPTRE_Thruster_fnc_Engage, "", 10, true, true, "", "(_this == driver _target) AND !(OPTRE_Thruster_EngagedStatus)"];
				_x addaction [("<t color=""#DF0101"">" + ("/// DISENGAGE FORWARD THRUSTERS ///") +"</t>"), OPTRE_Thruster_fnc_Disengage, "", 10, true, true, "", "(_this == driver _target) AND (OPTRE_Thruster_EngagedStatus)"];
				_x setVariable ["OPTRE_Thruster_HasAction", true, true];
			};
		};
	} forEach vehicles;
	sleep 0.05;
};