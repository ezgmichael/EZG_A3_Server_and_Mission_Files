/**
 * ExileClient_object_player_thread_safeZone
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
private _vehicle = vehicle player;
// use these settings to toggle features on and off
private _disableUAV = true;				// disables player from connecting UAV to terminal in safe zone

if (!ExilePlayerInSafezone) exitWith {false}; 

if (_disableUAV) then {
	if (alive (getConnectedUAV player)) then {
		player connectTerminalToUAV objNull;
		["ErrorTitleAndText", ["Warning!", "Do not operate the UAV from inside the Safe Zone"]] call ExileClient_gui_toaster_addTemplateToast;
	};
};

if (_vehicle isEqualTo player) then {
	if !(isNull ExileClientSafeZoneVehicle) then {
		ExileClientSafeZoneVehicle removeEventHandler ["Fired", ExileClientSafeZoneVehicleFiredEventHandler];	
		ExileClientSafeZoneVehicle = objNull;
		ExileClientSafeZoneVehicleFiredEventHandler = nil;
	};
} 
else 
{
	if (local _vehicle) then 
		{	
		_vehicle allowDamage false;	
		_vehicle enableRopeAttach false;
		};
	
	if !(_vehicle isEqualTo ExileClientSafeZoneVehicle) then 
	{
		if !(isNull ExileClientSafeZoneVehicle) then 
		{
			ExileClientSafeZoneVehicle removeEventHandler ["Fired", ExileClientSafeZoneVehicleFiredEventHandler];	
			ExileClientSafeZoneVehicle = objNull;
			ExileClientSafeZoneVehicleFiredEventHandler = nil;
		};
		ExileClientSafeZoneVehicle = _vehicle;
		ExileClientSafeZoneVehicleFiredEventHandler = _vehicle addEventHandler ["Fired", {_this call ExileClient_object_player_event_onFiredSafeZoneVehicle}];
	};
};
true