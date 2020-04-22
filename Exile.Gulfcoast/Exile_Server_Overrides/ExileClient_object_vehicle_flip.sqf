/**
 * ExileClient_object_vehicle_flip
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_vehicle","_pos"];
_vehicle = _this select 0;
if (!(typeOf _vehicle in ["Exile_Bike_MountainBike","Exile_Bike_OldBike"]) && (isEngineOn _vehicle)) exitWith {false};
if ((locked _vehicle) isEqualTo 2) exitWith {false};
if (local _vehicle) then
{
    systemchat "Vehicle Flip Started";      

   _vehicle allowDamage false;  // START of GODMODE
    _pos = getPosATL _vehicle;
    _pos set [2,(_pos select 2) + 2];//2 meter in the air
    _vehicle setPosATL _pos;
    _vehicle setVectorUp [0, 0, 1];
    sleep 7;      //End of GODMODE in 7 sconds
    _vehicle allowDamage true; //End of GODMODE

    systemchat "Vehicle Flip Ended";   
    }
else
{
    ["flipVehRequest",[netId _vehicle]] call ExileClient_system_network_send;
};
true
