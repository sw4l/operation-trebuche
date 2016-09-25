enablesentences false;
setacctime .75;
playMusic "OPTRE_Music_AMarchThroughTheWoods";

titleCut ["", "BLACK IN", 5];
_camera = "camera" camCreate [0,0,0];
_camera cameraEffect ["Internal","BACK"];
_camera camPrepareTarget [94295.73,35312.80,-23284.34];
_camera camPreparePos [2597.70,2988.46,3.69];
_camera camPrepareFOV 0.700;
_camera camCommitPrepared 0;
showCinemaBorder false;

["<img size='8' image='logo\OPTRE_logo.paa'/>",.7,.7,180,5,0,2] spawn bis_fnc_dynamicText;  