// this setVariable ["ODST_POD_CanCallInAI", true, true]; - set unit able to call in AI ODSTs
// this addaction [("<t color=""#81BEF7"">" + ("Request Orbital Insertion") +"</t>"),"\tei_vehicles\hev\scripts\ODST_POD_CallInSelf.sqf", "", 7, true, true, "", ""]; - set object to allow player to orbital drop
// ODST_POD_CanCallInAI_Check = this getVariable ["ODST_POD_CanCallInAI", false]


_vehicles = vehicles;
{
	if (typeOf _x == "TEI_HEV") then
	{
		_x addaction [("<t color=""#DF0101"">" + ("/// INITIATE DROP SEQUENCE ///") +"</t>"),"\tei_vehicles\hev\scripts\ODST_POD_Launch.sqf", "", 7, true, true, "", "_this == driver _target"];
		_x setVectorUp [0,0,0.1];
	};
} forEach _vehicles;

if (isMultiplayer) then
{
	{
		_authcheck = _x getVariable ["ODST_POD_CanCallInAI", 0];
		if (_authcheck == 1) then {
			_x addaction [("<t color=""#81BEF7"">" + ("Request ODST Support") +"</t>"),"\tei_vehicles\hev\scripts\ODST_POD_CallInAI.sqf", "", 7, true, true, "", "_this == _target"];
		};
	} forEach playableUnits;
} else
{
	_authcheckSP = player getVariable ["ODST_POD_CanCallInAI", 0];
	if (_authcheckSP == 1) then {
		player addaction [("<t color=""#81BEF7"">" + ("Request ODST Support") +"</t>"),"\tei_vehicles\hev\scripts\ODST_POD_CallInAI.sqf", "", 7, true, true, "", "_this == _target"];
	};
};
