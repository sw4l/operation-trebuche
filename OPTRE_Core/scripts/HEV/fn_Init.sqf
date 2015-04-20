// this setVariable ["OPTRE_HEV_CanCallInAI", true, true]; - set unit able to call in AI ODSTs
// this addaction [("<t color=""#81BEF7"">" + ("Request Orbital Insertion") +"</t>"), OPTRE_HEV_fnc_podCallSelf, "", 7, true, true, "", ""]; - set object to allow player to orbital drop
// OPTRE_HEV_CanCallInAI_Check = this getVariable ["OPTRE_HEV_CanCallInAI", false]

_podCallAI_preprocess = compile preprocessFileLineNumbers "\OPTRE_Core\scripts\HEV\fn_podCallAI.sqf";
_podCallSelf_preprocess = compile preprocessFileLineNumbers "\OPTRE_Core\scripts\HEV\fn_podCallSelf.sqf";
_podDoor_preprocess = compile preprocessFileLineNumbers "\OPTRE_Core\scripts\HEV\fn_podDoor.sqf";
_podLand_preprocess = compile preprocessFileLineNumbers "\OPTRE_Core\scripts\HEV\fn_podLand.sqf";
_podLaunch_preprocess = compile preprocessFileLineNumbers "\OPTRE_Core\scripts\HEV\fn_podLaunch.sqf";
_podLaunchAI_preprocess = compile preprocessFileLineNumbers "\OPTRE_Core\scripts\HEV\fn_podLaunchAI.sqf";
_podPrepare_preprocess = compile preprocessFileLineNumbers "\OPTRE_Core\scripts\HEV\fn_podPrepare.sqf";
_podPrepareAI_preprocess = compile preprocessFileLineNumbers "\OPTRE_Core\scripts\HEV\fn_podPrepareAI.sqf";

if (isMultiplayer) then
{
	{
		_authcheck = _x getVariable ["OPTRE_HEV_CanCallInAI", false];
		if (_authcheck) then {
			_x addaction [("<t color=""#81BEF7"">" + ("Request ODST Support") +"</t>"), OPTRE_HEV_fnc_podCallAI, "", 7, true, true, "", "_this == _target"];
		};
	} forEach playableUnits;
} else
{
	_authcheckSP = player getVariable ["OPTRE_HEV_CanCallInAI", false];
	if (_authcheckSP) then {
		player addaction [("<t color=""#81BEF7"">" + ("Request ODST Support") +"</t>"), OPTRE_HEV_fnc_podCallAI, "", 7, true, true, "", "_this == _target"];
	};
};

/*waitUntil {time > 0};
while {time > 0} do
{	
	{
		if ((typeOf _x == "OPTRE_HEV") && !(_x getVariable ["OPTRE_HEV_HasAction", false])) then
		{
			_x addaction [("<t color=""#DF0101"">" + ("/// INITIATE DROP SEQUENCE ///") +"</t>"), OPTRE_HEV_fnc_podLaunch, "", 7, true, true, "", "_this == driver _target"];
			_x setVectorUp [0,0,1];
			_x setVariable ["OPTRE_HEV_HasAction", true, true];
		};
	} forEach vehicles;
	sleep 0.05;
};*/