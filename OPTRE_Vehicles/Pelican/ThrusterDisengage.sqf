_pelican = _this;
_pelican setvariable ["OPTRE_Thruster_EngagedStatus",false,true];
_pelican setobjecttextureglobal [1,""];
hint format["DISENGAGING FORWARD THRUSTERS\n\nACTIVATING AIR BRAKES"];
while {(!(_pelican getvariable ["OPTRE_Thruster_EngagedStatus",false]) AND (speed _pelican > 100))} do
{
	_vel = velocity _pelican;
	_dir = direction _pelican;
	_speed = -10;
	_pelican setVelocity [
	(_vel select 0) + (sin _dir * _speed), 
	(_vel select 1) + (cos _dir * _speed), 
	(_vel select 2)
	];
	sleep 0.5;
};
 