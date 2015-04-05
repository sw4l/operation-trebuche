_unit = _this select 1;
openmap true;
hint "Mark position for reinforcements";
[_unit] onMapSingleClick "openmap false; _aidrop = createMarkerLocal ['AIDrop', _pos]; _podPrepareAI_fnc = [_this select 0] spawn OPTRE_HEV_fnc_podPrepareAI; onmapsingleclick '';";
