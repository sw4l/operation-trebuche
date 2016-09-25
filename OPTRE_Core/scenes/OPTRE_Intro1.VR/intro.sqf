enablesentences false;
//setacctime .75;
playMusic "OPTRE_Music_EveOfBattle";

titleCut ["", "BLACK IN", 5];
_camera = "camera" camCreate [0,0,0];
_camera cameraEffect ["Internal","BACK"];
_camera camPrepareTarget [-50527.08,81081.76,-30146.42];
_camera camPreparePos [4510.31,3223.45,3.74];
_camera camPrepareFOV 0.700;
_camera camCommitPrepared 0;
showCinemaBorder false;

["<img size='8' image='logo\OPTRE_logo.paa'/>",.7,.7,180,5,0,2] spawn bis_fnc_dynamicText;   