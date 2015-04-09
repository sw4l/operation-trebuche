if ((!isServer) && (player != player)) then
{
waitUntil {player == player};
};

enableSaving [false, false];
enableSentences false;
setterraingrid 50;
setviewdistance 2000;
setobjectviewdistance 1000;

TEI_Magnet_Init = [] spawn TEI_Magnet_fnc_Init;