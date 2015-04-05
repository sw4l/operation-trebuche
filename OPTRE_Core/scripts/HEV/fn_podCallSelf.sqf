_unit = _this select 1;
openmap true;
hint "Mark position for orbital insertion";
[_unit] onMapSingleClick "openmap false; _selfdrop = createMarkerLocal ['SelfDrop', _pos]; _podPrepare_fnc = [_this select 0] spawn OPTRE_HEV_fnc_podPrepare; onmapsingleclick '';";