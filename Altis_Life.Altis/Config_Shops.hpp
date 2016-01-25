//CIV shop ferig, Rebel shop angefangen, letzte bearbeitete Zeile (58), Preise nur für Mags und DLC Waffen angepasst
class WeaponShops {
   //Armory Shops
   class gun {
      name = "Billy Joe's Firearms";
      side = "civ";
      license = "gun";
      level = -1;
      msg = "";
      items[] = {
         //Handguns
         { "hgun_P07_F", "", 7650},
         { "hgun_Rook40_F", "", 7650 },
         { "16Rnd_9x21_Mag", "", 100},
         { "30Rnd_9x21_Mag", "", 150},
         { "hgun_ACPC2_F", "", 11500 },
         { "9Rnd_45ACP_Mag", "", 100},
         { "hgun_Pistol_heavy_02_F", "", 11500 },
         { "6Rnd_45ACP_Cylinder", 50},
         { "hgun_Pistol_heavy_01_F", "", 15300},
         { "11Rnd_45ACP_Mag", "", 150}
         
         //SMG's
         //SMG{ "hgun_PDW2000_F", "", 20000 },
         //SMG{ "16Rnd_9x21_Mag", "", 100},
         //SMG{ "30Rnd_9x21_Mag", "", 150},
         //SMG{"SMG_02_F", "", 19100},
         //SMG{ "30Rnd_9x21_Mag", "", 150},
         //SMG{"30Rnd_45ACP_MAG_SMG_01", "", 200},
         //SMG{"30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 150}
      };
   };
   class rebel {
      name = "Mohammed's Jihadi Shop";
      side = "civ";
      license = "rebel";
      level = -1;
      msg = "";
      items[] = {
         //SMG's
         { "hgun_PDW2000_F", "", 20000 },//Wenn Legal, im CIV shop anbieten!
         { "16Rnd_9x21_Mag", "", 100},
         { "SMG_02_F", "", 20000},
         { "30Rnd_9x21_Mag", "", 150},
         { "SMG_01_F", "", 25000},
         { "30Rnd_45ACP_MAG_SMG_01", "", 200},
         { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 150},
         
      //Rifles
         //Underwater Gun
         { "arifle_SDAR_F", "", 15000},
         { "20Rnd_556x45_UW_mag", "", 100},
         
         //Assault Rifles
         { "arifle_Mk20C_plain_F", "", 25000},
         { "arifle_Mk20_plain_F", "", 30000},
         { "arifle_Mk20_GL_plain_F", "", 40000},
         { "arifle_TRG20_F", "", 25000},
         { "arifle_TRG21_F", "", 30000},
         { "arifle_TRG21_GL_F", "", 40000},
         { "30Rnd_556x45_Stanag", "", 200},
         { "30Rnd_556x45_Stanag_Tracer_Green", "", 150},
         { "30Rnd_556x45_Stanag_Tracer_Yellow", "", 150},
         { "30Rnd_556x45_Stanag_Tracer_Red", "", 150},
         
         { "arifle_Katiba_C_F", "", 25000},
         { "arifle_Katiba_F", "", 30000 },
         { "arifle_Katiba_GL_F", "", 40000},
         { "30Rnd_65x39_caseless_green", "", 200},
         { "30Rnd_65x39_caseless_green_mag_Tracer", "", 150},

         { "arifle_MXC_F", "", 25000},
         { "arifle_MXC_Black_F", "", 25000},
         { "arifle_MX_F", "", 30000},
         { "arifle_MX_Black_F", "", 35000},
         { "arifle_MX_GL_F", "", 40000},
         { "arifle_MX_GL_Black_F", "", 40000},

         // Markman Rifles
         {"arifle_MXM_F", "", 45000},
         {"arifle_MXM_Black_F", 50000},
         { "30Rnd_65x39_caseless_mag", "", 200},
         { "30Rnd_65x39_caseless_mag_Tracer", "", 150},
         {"srifle_DMR_01_F", "", 60000},
         {"10Rnd_762x54_Mag", "", 150},
         {"srifle_EBR_F", "", 70000},
         {"20Rnd_762x51_Mag", "", 250}

         // DLC
         // {"srifle_DMR_06_camo_F", "", 70000},
         // {"srifle_DMR_03_F", "", 75000},
         // {"srifle_DMR_02_F", "", 115000},
         // {"srifle_DMR_05_blk_F", "", 115000},

         // Sniper Rifles
         // ["M320 LRR Sniper", "srifle_LRR_LRPS_F", 1000],
         // ["M320 LRR Sniper (Camo)", "srifle_LRR_camo_LRPS_F", 1200],
         // ["GM6 Lynx Sniper", "srifle_GM6_LRPS_F", 1250],
         // ["GM6 Lynx Sniper (Camo)", "srifle_GM6_camo_LRPS_F", 1500],

         // ["ASP-1 Kir Rifle [DLC]", "srifle_DMR_04_F", 2000],
         // ["ASP-1 Kir Rifle (Tan) [DLC]", "srifle_DMR_04_tan_F", 2250]
      };
   };
   class gang {
      name = "Hideout Armament";
      side = "civ";
      license = "";
      level = -1;
      msg = "";
      items[] = {
         { "hgun_Rook40_F", "", 1500 },
         { "hgun_Pistol_heavy_02_F", "", 2500 },
         { "hgun_ACPC2_F", "", 4500 },
         { "hgun_PDW2000_F", "", 9500 },
         { "optic_ACO_grn_smg", "", 950 },
         { "V_Rangemaster_belt", "", 1900 },
         { "16Rnd_9x21_Mag", "", 25 },
         { "9Rnd_45ACP_Mag", "", 45 },
         { "6Rnd_45ACP_Cylinder", "", 50 },
         { "30Rnd_9x21_Mag", "", 75 }
      };
   };
    //Basic Shops
   class genstore {
      name = "Altis General Store";
      side = "civ";
      license = "";
      level = -1;
      msg = "";
      items[] = {
         { "Binocular", "", 150 },
			{ "ItemGPS", "", 100 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "NVGoggles", "", 2000 },
			{ "Chemlight_red", "", 300 },
			{ "Chemlight_yellow", "", 300 },
			{ "Chemlight_green", "", 300 },
			{ "Chemlight_blue", "", 300 }
      };
   };
   //Cop Shops
   class cop_basic {
      name = "Altis Cop Gun Shop";
      side = "cop";
      license = "";
      level = -1;
      msg = "";
      items[] = {
         { "arifle_sdar_F", "Taser Rifle", 20000 },
         { "hgun_P07_snds_F", "Stun Pistol", 2000 },
         { "hgun_P07_F", "", 7500 },
         { "HandGrenade_Stone", "Flashbang", 1700 },
         { "muzzle_snds_L", "", 650 },
         { "16Rnd_9x21_Mag", "", 50 },
         { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 125 }
      };
   };	
	class cop_items {
      name = "Altis Cop Item Shop";
      side = "cop";
      license = "";
      level = -1;
      msg = "";
      items[] = {
         { "Binocular", "", 150 },
         { "ItemGPS", "", 100 },
         { "ToolKit", "", 250 },
         { "muzzle_snds_L", "", 650 },
         { "FirstAidKit", "", 150 },
         { "Medikit", "", 1000 },
         { "NVGoggles", "", 2000 },
         { "tf_pnr1000a", "", 1}
      };
   };
   class cop_patrol {
      name = "Altis Patrol Officer Shop";
      side = "cop";
      license = "";
      level = 2;
      msg = "You must be a Patrol Officer Rank!";
      items[] = {
         { "arifle_MX_F", "", 35000 },
         { "SMG_02_ACO_F", "", 30000 },
         { "HandGrenade_Stone", "Flashbang", 1700 },
         { "MineDetector", "", 1000 },
         { "acc_flashlight", "", 750 },
         { "optic_Holosight", "", 1200 },
         { "optic_Arco", "", 2500 },
         { "muzzle_snds_H", "", 2750 },
         { "30Rnd_65x39_caseless_mag", "", 130 },
         { "30Rnd_9x21_Mag", "", 250 }
      };
   };
   class cop_sergeant {
      name = "Altis Sergeant Officer Shop";
      side = "cop";
      license = "";
      level = 3;
      msg = "You must be a Sergeant Rank!";
      items[] = {
         { "SMG_02_ACO_F", "", 15000 },
			{ "hgun_ACPC2_F", "", 17500 },
			{ "HandGrenade_Stone", "Flashbang", 1700 },
			{ "arifle_MXC_F", "", 30000 },
			{ "optic_Arco", "", 2500 },
			{ "muzzle_snds_H", "", 2750 },
			{ "30Rnd_65x39_caseless_mag", "", 100 },
			{ "30Rnd_9x21_Mag", "", 60 },
			{ "9Rnd_45ACP_Mag", "", 200 }
      };
   };
   //Medic Shops
   class med_basic {
      name = "store";
      side = "med";
      license = "";
      level = -1;
      items[] = {
         { "ItemGPS", "", 100 },
			{ "Binocular", "", 150 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "Medikit", "", 500 },
			{ "NVGoggles", "", 1200 },
			{ "B_FieldPack_ocamo", "", 3000 }
      };
   };
};
