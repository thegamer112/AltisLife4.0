 #include <macro.h>
/*
    File: fn_initCop.sqf
    Author: Bryan "Tonic" Boardwine
    
    Description:
    Cop Initialization file.
*/
private["_end"];
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};

if((FETCH_CONST(life_coplevel)) == 0) exitWith {
    ["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
    sleep 35;
};

if((str(player) in ["cop_34","cop_35","cop_36","cop_37"])) then {
    if((FETCH_CONST(life_coplevel)) < 2) exitWith {
        ["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
        sleep 35;
    };
};

if((str(player) in ["cop_23","cop_24","cop_25","cop_26","cop_27","cop_28","cop_29","cop_30","cop_31","cop_32","cop_33"])) then {
    if((FETCH_CONST(life_coplevel)) < 2) exitWith {
        ["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
        sleep 35;
    };

if((str(player) in ["cop_17","cop_18","cop_19","cop_20","cop_21","cop_22"])) then {
    if((FETCH_CONST(life_coplevel)) < 3) exitWith {
        ["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
        sleep 35;
    };

if((str(player) in ["cop_12","cop_13","cop_14","cop_15","cop_16"])) then {
    if((FETCH_CONST(life_coplevel)) < 4) exitWith {
        ["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
        sleep 35;
    };

if((str(player) in ["cop_8","cop_9","cop_10","cop_11"])) then {
    if((FETCH_CONST(life_coplevel)) < 5) exitWith {
        ["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
        sleep 35;
    };

if((str(player) in ["cop_5","cop_6","cop_7"])) then {
    if((FETCH_CONST(life_coplevel)) < 6) exitWith {
        ["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
        sleep 35;
    };
    
if((str(player) in ["cop_3","cop_4"])) then {
    if((FETCH_CONST(life_coplevel)) < 7) exitWith {
        ["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
        sleep 35;
    };
};

if((str(player) in ["cop_2"])) then {
    if((FETCH_CONST(life_coplevel)) < 8) exitWith {
        ["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
        sleep 35;
    };

};

if((str(player) in ["cop_1"])) then {
    if((FETCH_CONST(life_coplevel)) < 9) exitWith {
        ["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
        sleep 35;
    };
};

};

/*if(!(str(player) in ["cop_1","cop_2","cop_3","cop_4"])) then {
    if((FETCH_CONST(life_coplevel) == 0) && (FETCH_CONST(life_adminlevel) == 0)) then {          <- Original
        ["NotWhitelisted",false,true] call BIS_fnc_endMission;
        sleep 35;
    };
};*/


player setVariable["rank",(FETCH_CONST(life_coplevel)),true];
[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done. 
[] spawn life_fnc_placeablesInit;