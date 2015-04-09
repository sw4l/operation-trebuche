waitUntil {time > 0};
_AttachVeh = objNull;
while {time > 0} do
{
	{
		_VehCheck = ["TEI_Pelican", typeof _x, true] call BIS_fnc_inString;
		if ((typeof _x == "TEI_Pelican_unarmed_tan") && !(_x getVariable ["TEI_Magnet_HasAction", false])) then
		{
			_x addaction [("<t color=""#DF0101"">" + ("/// ATTACH VEHICLE ///") +"</t>"), TEI_Magnet_fnc_Attach, "", 7, true, true, "", "(_this == driver _target) AND (!isNull(_target getVariable [""CargoTarget"", objNull])) AND (isNull(_target getVariable [""AttachedCargo"", objNull]))"];
			_x addaction [("<t color=""#DF0101"">" + ("/// DETACH VEHICLE ///") +"</t>"), TEI_Magnet_fnc_Detach, "", 7, true, true, "", "(_this == driver _target) AND (isNull(_target getVariable [""CargoTarget"", objNull])) AND (!isNull(_target getVariable [""AttachedCargo"", objNull]))"];
			_x setVariable ["TEI_Magnet_HasAction", true, true];
			_x setVariable ["CargoTarget", objNull];
			_x setVariable ["AttachedCargo", objNull];
			_AttachVeh = nearestObjects [_x, ["Car","Tank","ReAmmoBox"], 10] select 0;
			hint str _AttachVeh;
			if (!isNull (_AttachVeh)) then
			{_x setVariable ["CargoTarget", _AttachVeh]; hint str _AttachVeh;} 
			else {_x setVariable ["CargoTarget", objNull];};
		};
	} forEach vehicles;
	sleep 0.05;
};

//(typeof _x == "TEI_Pelican_unarmed_tan") && !(_x getVariable ["TEI_Magnet_HasAction", false])