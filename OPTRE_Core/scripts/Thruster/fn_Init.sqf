OPTRE_Thruster_EngagedStatus = false;
_this addaction [("<t color=""#DF0101"">" + ("/// ENGAGE FORWARD THRUSTERS ///") +"</t>"), OPTRE_Thruster_fnc_Engage, "", 10, true, true, "", "(_this == driver _target) AND !(OPTRE_Thruster_EngagedStatus) AND (_target engineOn true)"];
_this addaction [("<t color=""#DF0101"">" + ("/// DISENGAGE FORWARD THRUSTERS ///") +"</t>"), OPTRE_Thruster_fnc_Disengage, "", 10, true, true, "", "(_this == driver _target) AND (OPTRE_Thruster_EngagedStatus) AND (_target engineOn true)"];
_this setVariable ["OPTRE_Thruster_HasAction", true, true];