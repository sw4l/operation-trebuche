enablesentences false;
playMusic "OPTRE_Music_EveOfBattle";

man1 disableai "anim";
man1 disableai "move"; 
man1 switchmove "Acts_AidlPercMstpSlowWrflDnon_warmup04";

man2 disableai "anim";
man2 disableai "move"; 
man2 switchmove "Acts_AidlPsitMstpSsurWnonDnon_loop";

man5 disableai "anim";
man5 disableai "move"; 
man5 switchmove "Acts_listeningToRadio_Loop";

man6 disableai "anim";
man6 disableai "move"; 
man6 switchmove "Acts_ShieldFromSun_loop";

man7 disableai "anim";
man7 disableai "move"; 
man7 switchmove "Acts_SittingWounded_loop";

man8 disableai "anim";
man8 disableai "move"; 
man8 switchmove "Acts_TreatingWounded_loop";

man9 disableai "anim";
man9 disableai "move"; 
man9 switchmove "HubBriefing_loop";

titleCut ["", "BLACK IN", 5];

_camera = "camera" camCreate [0,0,0];
_camera cameraEffect ["Internal","BACK"];
_camera camPrepareTarget [8931.50,-92449.55,-13808.56];
_camera camPreparePos [20376.17,5919.82,1.63];
_camera camPrepareFOV 0.700;
_camera camCommitPrepared 0;

["<img size='8' image='logo\OPTRE_logo.paa'/>",.7,.7,180,5,0,2] spawn bis_fnc_dynamicText;