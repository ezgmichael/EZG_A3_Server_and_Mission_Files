
ExileClientPlayerIsInSecurityCamera = true;

private["_display","_territoryDropDown","_territorySelected","_index","_flagNetID","_flagObject","_basecameras"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_territoryDropDown = _display displayCtrl 6000;
_territorySelected = lbCurSel _territoryDropDown;

_flagNetID = _territoryDropDown lbData _territorySelected;

_flagObject = objectFromNetId _flagNetID;

_basecameras = 0;
_basecameras = (getpos _flagObject) nearobjects ["Exile_Construction_BaseCamera_Static" ,160];
_basecameras = count _basecameras;

if !(SecurityDebug) then {
if !(_basecameras >= 1) exitWith {systemChat "You have no security camera's installed!"};
if (isNull _flagObject) exitWith {systemChat "Please Select a Territory First!"};
};

ExileCameraSystemBase = _flagObject;
false call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;

  _display = uiNameSpace getVariable ["RscExileXM8", displayNull];
  _AppsArray = [6000,6001,5007,6021];
  {
      _ctrl = (_display displayCtrl _x);
      _ctrl ctrlSetFade 1;
      _ctrl ctrlCommit 0.25;
      ctrlEnable [_x, true];
  } forEach _AppsArray;

{
ctrlDelete ((findDisplay 24015) displayCtrl _x);

} forEach _AppsArray;

call ExileSecurity_onConnectLoad;
