/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 * Yb9IfG8VRNOOtggqvAUNp6I0hsfGvPYY/AfLZTU1Rxc=
 */

// Edited by Phate from easy-gaming.net
 
private["_sessionId","_parameters","_treeNetId","_tree","_isTree","_treeModelNames","_treeHeight","_newDamage","_treePosition","_spawnRadius","_weaponHolders","_weaponHolder","_weaponHolderPosition"];
_sessionId = _this select 0;
_parameters = _this select 1;
_treeNetId = _parameters select 0;

// Define Wood Drop Notify Text here
_woodText = "Wood dropped in your Area!";
_woodVehicleText = "Wood was put inside your Vehicle!";
_woodVehicleFullText = "Wood dropped in your Area! Vehicle is Full!";
// Define Wood Drop Notify Text here

_tree = objectFromNetId _treeNetId;
if (!isNull _tree) then
{
    _isTree = false;
    _treeModelNames = getArray(missionconfigFile >> "CfgInteractionModels" >> "WoodSource" >> "models");
    {
        if !(((str _tree) find _x) isEqualTo -1)exitWith {_isTree = true};
    }
    forEach _treeModelNames;
    if (_isTree) then 
    {
        if (alive _tree) then
        {
            _treeHeight = _tree call ExileClient_util_model_getHeight;
            _treeHeight = _treeHeight max 1; 
            _newDamage = ((damage _tree) + (1 / (floor _treeHeight) )) min 1;
            _tree setDamage _newDamage; 
            if (_newDamage isEqualTo 1) then
            {
                _tree setDamage 999; 
            };
            _nearestTruck = (getPosATL _tree) nearEntities[[
			"RHS_Ural_Open_Civ_01",
			"RHS_Ural_Civ_01",
			"RHS_Ural_Open_Civ_02",
			"RHS_Ural_Civ_02",
			"LOP_IA_Ural_open",
			"LOP_IA_Ural",
			"LOP_AA_Ural_open",
			"LOP_AA_Ural",
			"LOP_IRAN_Ural_open",
			"LOP_IRAN_Ural",
			"CUP_I_Ural_Empty_UN",
			"LOP_UN_Ural_open",
			"CUP_I_Ural_UN",
			"CUP_I_Ural_Reammo_UN",
			"CUP_I_Ural_Repair_UN",
			//"O_mas_cars_Ural_open",
			//"O_mas_cars_Ural",
			//"O_mas_cars_Ural_ammo",
			//"O_mas_cars_Ural_fuel",
			//"O_mas_cars_Ural_repair",
			//"O_mas_cars_Ural_ZU23",
			"CUP_O_Ural_Empty_TKA",
			"CUP_O_Ural_Open_TKA",
			"CUP_O_Ural_TKA",
			"CUP_O_Ural_Reammo_TKA",
			"CUP_O_Ural_Refuel_TKA",
			"CUP_O_Ural_Repair_TKA",
			"CUP_O_Ural_ZU23_TKA",
			"CUP_O_Ural_Empty_CHDKZ",
			//"rhsgref_ins_g_ural_open",
			//"rhsgref_ins_g_ural",
			"CUP_O_Ural_Reammo_CHDKZ",
			"CUP_O_Ural_Refuel_CHDKZ",
			"CUP_O_Ural_Repair_CHDKZ",
			"CUP_O_Ural_ZU23_CHDKZ",
			"CUP_O_Ural_Empty_RU",
			"CUP_O_Ural_Open_RU",
			"CUP_O_Ural_RU",
			"CUP_O_Ural_Reammo_RU",
			"CUP_O_Ural_Refuel_RU",
			"CUP_O_Ural_Repair_RU",
			"CUP_I_Ural_ZU23_NAPA",
			"CUP_B_Ural_Empty_CDF",
			"CUP_B_Ural_Open_CDF",
			"CUP_B_Ural_CDF",
			"CUP_B_Ural_Reammo_CDF",
			"CUP_B_Ural_Refuel_CDF",
			"CUP_B_Ural_Repair_CDF",
			"CUP_B_Ural_ZU23_CDF",
			"CUP_B_MTVR_USA",
			"CUP_B_MTVR_Ammo_USA",
			"CUP_B_MTVR_Refuel_USA",
			"CUP_B_MTVR_Repair_USA",
			"CUP_B_MTVR_USMC",
			"CUP_B_MTVR_Ammo_USMC",
			"CUP_B_MTVR_Refuel_USMC",
			"CUP_B_MTVR_Repair_USMC",
			"DAR_MK23ADT",
			"DAR_4x4",
			"DAR_MK27",
			"DAR_MK23AD",
			"DAR_MK23",
			"DAR_MK27T",
			"DAR_LHS_16",
			"DAR_MK23A",
			"DAR_LHS_8",
			"I_Truck_02_transport_F",
			"I_Truck_02_covered_F",
			"I_Truck_02_medical_F",
			"I_Truck_02_ammo_F",
			"I_Truck_02_fuel_F",
			"I_Truck_02_box_F",
			"O_Truck_02_transport_F",
			"O_Truck_02_covered_F",
			"O_Truck_02_medical_F",
			"O_Truck_02_ammo_F",
			"O_Truck_02_fuel_F",
			"O_Truck_02_box_F",
			"LOP_CDF_KAMAZ_Transport",
			"LOP_CDF_KAMAZ_Covered",
			"LOP_IRAN_KAMAZ_Transport",
			"LOP_IRAN_KAMAZ_Covered",
			"LOP_IRAN_KAMAZ_Medical",
			"LOP_IRAN_KAMAZ_Ammo",
			"LOP_IRAN_KAMAZ_Fuel",
			"LOP_IRAN_KAMAZ_Repair",
			"rhs_gaz66o_flat_msv",
			"rhs_gaz66o_msv",
			"rhs_gaz66_msv",
			"rhs_gaz66_flat_msv",
			"rhs_gaz66_r142_msv",
			"rhs_gaz66_ap2_msv",
			"rhs_gaz66_ammo_msv",
			"rhs_gaz66_repair_msv",
			"rhs_gaz66_zu23_msv",
			//"rhsgref_cdf_gaz66o_flat",
			//"rhsgref_cdf_gaz66o",
			//"rhsgref_cdf_gaz66",
			//"rhsgref_cdf_gaz66_flat",
			//"rhsgref_cdf_gaz66_r142",
			//"rhsgref_cdf_gaz66_ap2",
			//"rhsgref_cdf_gaz66_ammo",
			//"rhsgref_cdf_gaz66_repair",
			//"rhsgref_cdf_gaz66_zu23",
			//"rhsgref_ins_g_gaz66o_flat",
			//"rhsgref_ins_g_gaz66o",
			//"rhsgref_ins_g_gaz66",
			//"rhsgref_ins_g_gaz66_flat",
			//"rhsgref_ins_g_gaz66_r142",
			//"rhsgref_ins_g_gaz66_ap2",
			//"rhsgref_ins_g_gaz66_ammo",
			//"rhsgref_ins_g_gaz66_repair",
			//"rhsgref_ins_g_gaz66_zu23",
			"CUP_B_T810_Unarmed_CZ_DES",
			"CUP_B_T810_Armed_CZ_DES",
			"CUP_B_T810_Reammo_CZ_DES",
			"CUP_B_T810_Refuel_CZ_DES",
			"CUP_B_T810_Repair_CZ_DES",
			"CUP_B_T810_Unarmed_CZ_WDL",
			"CUP_B_T810_Armed_CZ_WDL",
			"CUP_B_T810_Reammo_CZ_WDL",
			"CUP_B_T810_Refuel_CZ_WDL",
			"CUP_B_T810_Repair_CZ_WDL",
			"O_Truck_03_transport_F",
			"O_Truck_03_covered_F",
			"O_Truck_03_medical_F",
			"O_Truck_03_ammo_F",
			"O_Truck_03_fuel_F",
			"O_Truck_03_repair_F",
			"O_T_Truck_03_transport_ghex_F",
			"O_T_Truck_03_covered_ghex_F",
			"O_T_Truck_03_medical_ghex_F",
			"O_T_Truck_03_ammo_ghex_F",
			"O_T_Truck_03_fuel_ghex_F",
			"O_T_Truck_03_repair_ghex_F",
			"LOP_IA_HEMTT_Mover_D",
			"LOP_IA_HEMTT_Transport_D",
			"LOP_IA_HEMTT_Covered_D",
			"LOP_IA_HEMTT_Box_D",
			"LOP_IA_HEMTT_Medical_D",
			"LOP_IA_HEMTT_Ammo_D",
			"LOP_IA_HEMTT_Fuel_D",
			"LOP_IA_HEMTT_Repair_D",
			"B_Truck_01_mover_F",
			"B_Truck_01_transport_F",
			"B_Truck_01_covered_F",
			"B_Truck_01_box_F",
			"B_Truck_01_medical_F",
			"B_Truck_01_ammo_F",
			"B_Truck_01_fuel_F",
			"B_Truck_01_Repair_F",
			"rhsusf_M977A4_usarmy_d",
			"rhsusf_M977A4_AMMO_usarmy_d",
			"rhsusf_M978A4_usarmy_d",
			"rhsusf_M977A4_REPAIR_usarmy_d",
			"rhsusf_M977A4_BKIT_M2_usarmy_d",
			"rhsusf_M977A4_AMMO_BKIT_M2_usarmy_d",
			"rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_d",
			"rhsusf_M1084A1R_SOV_M2_D_fmtv_socom",
			"rhsusf_M1078A1R_SOV_M2_D_mtv_socom",
			"rhsusf_M1078A1P2_D_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_D_flatbed_fmtv_usarmy",
			"rhsusf_M1084A1P2_D_fmtv_usarmy",
			"rhsusf_M1084A1P2_B_D_fmtv_usarmy",
			"rhsusf_M1078A1P2_D_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_D_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_D_flatbed_fmtv_usarmy",
			"rhsusf_M1084A1P2_B_M2_D_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_D_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_D_CP_fmtv_usarmy",
			"rhsusf_M1085A1P2_B_D_Medical_fmtv_usarmy"
			], 50];
            
			_weaponHolder = objNull;
            if ((count _nearestTruck > 0)) then 
            {
                _truck = _nearestTruck select 0;
                if (_truck canAdd "Exile_Item_WoodLog") then 
                    {
                    _truck addMagazineCargoGlobal ["Exile_Item_WoodLog", 1];
                    [_sessionID, "notificationRequest", ["Success", [_woodVehicleText]]] call ExileServer_system_network_send_to;
                    }
                    else
                    {
                        _treePosition = getPosATL _tree;
                        _treePosition set[2, 0];
                        _spawnRadius = 3;
                        _weaponHolders = nearestObjects[_treePosition, ["GroundWeaponHolder"], _spawnRadius];
                        _weaponHolder = objNull;
                        if (_weaponHolders isEqualTo []) then
                        {
                            _weaponHolderPosition = [_treePosition, _spawnRadius] call ExileClient_util_math_getRandomPositionInCircle;
                            _weaponHolderPosition set [2, 0];
                            _weaponHolder = createVehicle ["GroundWeaponHolder", _weaponHolderPosition, [], 0, "CAN_COLLIDE"];
                            _weaponHolder setPosATL _weaponHolderPosition;
                        }
                        else 
                        {
                            _weaponHolder = _weaponHolders select 0;
                        };
                        _weaponHolder addMagazineCargoGlobal ["Exile_Item_WoodLog", 1];
                        [_sessionID, "notificationRequest", ["Success", [_woodVehicleFullText]]] call ExileServer_system_network_send_to;
                    };
            }
            else
            {
            _treePosition = getPosATL _tree;
            _treePosition set[2, 0];
            _spawnRadius = 3;
            _weaponHolders = nearestObjects[_treePosition, ["GroundWeaponHolder"], _spawnRadius];
            _weaponHolder = objNull;
            if (_weaponHolders isEqualTo []) then
            {
                _weaponHolderPosition = [_treePosition, _spawnRadius] call ExileClient_util_math_getRandomPositionInCircle;
                _weaponHolderPosition set [2, 0];
                _weaponHolder = createVehicle ["GroundWeaponHolder", _weaponHolderPosition, [], 0, "CAN_COLLIDE"];
                _weaponHolder setPosATL _weaponHolderPosition;
            }
            else 
            {
                _weaponHolder = _weaponHolders select 0;
            };
            _weaponHolder addMagazineCargoGlobal ["Exile_Item_WoodLog", 1];
            [_sessionID, "notificationRequest", ["Success", [_woodText]]] call ExileServer_system_network_send_to;
            };
        };
    };
};
true