// NPC Init Befehle
removeallWeapons this;																		// Entfernt Bewaffnung des NPC's
enableSimulation false this;																// NPC nimmt nicht an der Simulation teil. Steht nur doof da (glaub ich zumindest)
allowDamage false this;																		// NPC Kann nicht angeschossen werden

this addAction["Menüname",ShopArt,"fraktion"];												// Syntax Beispiel Shopaufruf in der Init des NPC


// Virtuelles Shop Menü - Bearbeitet in Config_Master.hpp  - Essen, Trinken, geskriptete Gegenstände
this addAction["Cop Item Shop",life_fnc_virt_menu,"cop"];  									 // Init Befehl für den NPC	
class VirtualShops {													
	class cop {																				//Das "cop" wird bei der NPC Init gebraucht. addAction["Shopname",life_fnc_virt_menu,"cop"] this;
		name = "STR_Shops_Cop";
		items[] = { "donut", "coffee", "spikeStrip", "waterBottle", "rabbit_grilled", "apple", "redgull", "fuelFull", "defusekit" };
	};
};


// Kleidungsshop Bearbeitet in Config_Clothing.hpp
this addAction["Cop Clothing Shop",life_fnc_clothingMenu,"cop"];							 // Init Befehl für den NPC	
class Clothing {
	class bruce {										// Das "bruce" wird bei der NPC Init gebraucht. addAction["Shopname",life_fnc_clothingMenu,"bruce"];
		title = "STR_Shops_C_Bruce"; 		    		// Anzeigename Im Shop
		license = "";									// Benötigte Lizenz um den Shop zu benutzen
		side = "civ";									// Zugriffsrecht civ cop med
        level = -1;										// Benötigtes Cop Med Lvl zum benutzen (Bei CIV oder Sonstigen -1)
		uniforms[] = {									// Kategorie
			//{ "", "", 0, { "", "", -1 } },			// Das zweite Array kann zum Limitieren von einzelnen Gegenständen genutzt werden { "life_coplevel", "SCALAR", 1 }
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } }
		};
		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } }
		};
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } }
		};
		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 } }
		};
	};
};

// Waffen Shop Bearbeitet in Config_Shops.hpp
this addAction["Cop Weapon Shop",life_fnc_weaponShopMenu,"cop_basic"];		// Init Befehl für den NPC				
class WeaponShops {
    class gun {										// Das "gun" wird bei der NPC Init gebraucht. addAction["Shopname",life_fnc_weaponShopMenu,"gun"];
        name = "Billy Joe's Firearms"; 				// Anzeigename Im Shop
        side = "civ";								// Zugriffsrecht civ cop med
        license = "gun";							// Benötigte Lizenz um den Shop zu benutzen
        level = -1;									// Benötigtes Cop Med Lvl zum benutzen (Bei CIV oder Sonstigen -1)
        msg = "";									// Nachricht wenn man nicht auf den Shop zugreifen darf
        items[] = {
			//{ "", "" 0},
            { "hgun_Rook40_F", "", 6500 },
            { "hgun_Pistol_heavy_02_F", "", 9850 },
            { "hgun_ACPC2_F", "", 11500 },
            { "hgun_PDW2000_F", "", 20000 },
            { "optic_ACO_grn_smg", "", 2500 },
            { "V_Rangemaster_belt", "", 4900 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };
};