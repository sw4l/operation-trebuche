null=[] execvm "MovingTarget.sqf";

act = control addAction ["Lower Elevator", "elevdown.sqf",elev,7,TRUE];
sleep 5;