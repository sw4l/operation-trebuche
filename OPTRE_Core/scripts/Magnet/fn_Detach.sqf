_pelican = _this select 0;
_target = OPTRE_Magnet_DetachTarget;
_velocity = velocity _pelican;

detach _target;
_target setVelocity _velocity;
_pelican vehicleChat format ["%1 DETACHED", typeof _target];
OPTRE_Magnet_TargetAttached = false;