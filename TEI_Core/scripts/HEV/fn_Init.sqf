// this setVariable ["TEI_HEV_CanCallInAI", true, true]; - set unit able to call in AI ODSTs
// this addaction [("<t color=""#81BEF7"">" + ("Request Orbital Insertion") +"</t>"), TEI_HEV_fnc_podCallSelf, "", 7, true, true, "", ""]; - set object to allow player to orbital drop
// TEI_HEV_CanCallInAI_Check = this getVariable ["TEI_HEV_CanCallInAI", false]


_vehicles = vehicles;
{
	if (typeOf _x == "TEI_HEV") then
	{
		_x addaction [("<t color=""#DF0101"">" + ("/// INITIATE DROP SEQUENCE ///") +"</t>"), TEI_fnc_HEV_podLaunch, "", 7, true, true, "", "_this == driver _target"];
		_x setVectorUp [0,0,1];
	};
} forEach _vehicles;

if (isMultiplayer) then
{
	{
		_authcheck = _x getVariable ["TEI_HEV_CanCallInAI", 0];
		if (_authcheck == 1) then {
			_x addaction [("<t color=""#81BEF7"">" + ("Request ODST Support") +"</t>"), TEI_fnc_HEV_podCallAI, "", 7, true, true, "", "_this == _target"];
		};
	} forEach playableUnits;
} else
{
	_authcheckSP = player getVariable ["TEI_HEV_CanCallInAI", 0];
	if (_authcheckSP == 1) then {
		player addaction [("<t color=""#81BEF7"">" + ("Request ODST Support") +"</t>"), TEI_fnc_HEV_podCallAI, "", 7, true, true, "", "_this == _target"];
	};
};
