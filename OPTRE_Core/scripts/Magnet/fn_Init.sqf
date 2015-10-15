OPTRE_Magnet_HasTarget = false;
OPTRE_Magnet_TargetAttached = false;
OPTRE_Magnet_AttachTarget = objNull;
OPTRE_Magnet_DetachTarget = objNull;
(_this select 0) addaction [("<t color=""#DF0101"">" + ("/// ATTACH VEHICLE ///") +"</t>"), OPTRE_Magnet_fnc_Attach, "", 0, true, true, "", "(_this == driver _target) AND (OPTRE_Magnet_HasTarget) AND !(OPTRE_Magnet_TargetAttached)"];
(_this select 0) addaction [("<t color=""#DF0101"">" + ("/// DETACH VEHICLE ///") +"</t>"), OPTRE_Magnet_fnc_Detach, "", 0, true, true, "", "(_this == driver _target) AND (OPTRE_Magnet_TargetAttached)"];
(_this select 0) setVariable ["OPTRE_Magnet_HasAction", true, true];

OPTRE_Magnet_VehicleSweep =
{
	if (OPTRE_Magnet_TargetAttached) then {} else {
		_VehList = nearestObjects [_this select 0, ["OPTRE_M12_base","OPTRE_Genet_base","OPTRE_Ammo_Box_Base"], 25];
		if ((count _VehList) > 0 AND driver (_this select 0) == player) then {
			OPTRE_Magnet_AttachTarget = _VehList select 0;
			hintSilent format ["Attach Target:\n%1", typeOf OPTRE_Magnet_AttachTarget];
			OPTRE_Magnet_HasTarget = true;
		} else {
			OPTRE_Magnet_AttachTarget = objNull;
			OPTRE_Magnet_HasTarget = false;
		};
	};
};

while {time > 0} do
{
	[_this select 0] spawn OPTRE_Magnet_VehicleSweep;
	sleep 0.05;
};