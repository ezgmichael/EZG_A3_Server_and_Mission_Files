/**
 * ExileClient_util_world_isInTraderZone
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_position", "_result"];
_position = _this;
_result = false;
{
	if ((((_x select 0) distance2D _position) < (_x select 1) && (getPosATL player select 2 < 100))) exitWith // << edit height restriction on trader god mode
	{
		_result = true;
	};
}
forEach ExileTraderZoneMarkerPositionsAndSize;
_result