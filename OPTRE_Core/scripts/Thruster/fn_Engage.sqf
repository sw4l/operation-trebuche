_pelican = _this select 0;
OPTRE_Thruster_EngagedStatus = true;
hint "ENGAGING FORWARD THRUSTERS";
while {(OPTRE_Thruster_EngagedStatus) AND (alive _pelican)} do
{
	if (speed _pelican <= 600) then {
		_vel = velocity _pelican;
		_dir = direction _pelican;
		_speed = 10;
		_pelican setVelocity [
		(_vel select 0) + (sin _dir * _speed), 
		(_vel select 1) + (cos _dir * _speed), 
		(_vel select 2)
		];
	};
	sleep 0.5;
};