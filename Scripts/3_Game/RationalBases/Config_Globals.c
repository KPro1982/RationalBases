 class Config_settings
{
   
      int search_radius;
      int max_containers;
      int max_locks; 
	  int enable_locktracking;
	  int enable_containertracking;
	  ref array<ref string> containerTypes;
	  ref array<ref string> containerKits;
	
	  void Config_settings()
		{
			containerTypes = new ref array<ref string>;	
			containerKits = new ref array<ref string>;		
		}
}

class Config_Globals
{
	private static ref Config_settings z_Globals = NULL;
	private static const string configPath = "$profile:\\RationalBases\\Config_settings.json";
	private static const string configRoot = "$profile:\\RationalBases\\";	
	
	
	
	static Config_settings Get()
	{
		
		if (z_Globals == NULL)
		{
			Set();
		} 
		
 		return z_Globals;
	}

	static void Set()
	{
		z_Globals = LoadConfig();
	}

	private static Config_settings LoadConfig()
	{
		Print("==================================================");
		Config_settings config = new Config_settings;

		if (FileExist(configPath)==0)
        {
            Print("[RationalBases] 'Config does not exist' does not exist");
            CreateDefaultConfig(config);
        }
		else {

			JsonFileLoader<Config_settings>.JsonLoadFile(configPath, config);
			Print("[RationalBases] 'Config' found, loaded config");
			int c = config.containerTypes.Count();
			Print(string.Format("Max containers = [%1]", config.max_containers));

		}
		

		return config;
	}

	private static void CreateDefaultConfig(Config_settings config)
	{
		config.max_locks = 2;
		config.search_radius = 60;
		config.max_containers = 5;
		config.enable_locktracking = 1;
		config.enable_containertracking = 1;
		config.containerTypes.Insert("Barrel_Green");
		config.containerTypes.Insert("Barrel_Blue");
		config.containerTypes.Insert("Barrel_Red");
		config.containerTypes.Insert("Barrel_Yellow");
		config.containerTypes.Insert("mmg_planter_box");
		config.containerTypes.Insert("mmg_greenhouse");
		config.containerTypes.Insert("mmg_craftable_tent");
		config.containerTypes.Insert("mmg_crate04_olive");
		config.containerTypes.Insert("mmg_crate04_black");
		config.containerTypes.Insert("mmg_crate04_blue");
		config.containerTypes.Insert("mmg_crate04_yellow");
		config.containerTypes.Insert("mmg_crate04_red");
		config.containerTypes.Insert("mmg_supply_crate_wood");
		config.containerTypes.Insert("mmg_supply_crate_grey");
		config.containerTypes.Insert("mmg_supply_crate_unfinished_wood");
		config.containerTypes.Insert("mmg_equipment_locker_green");
		config.containerTypes.Insert("mmg_equipment_locker_black");
		config.containerTypes.Insert("mmg_equipment_locker_grey");
		config.containerTypes.Insert("mmg_armored_cabinet_grey");
		config.containerTypes.Insert("mmg_armored_cabinet_green");
		config.containerTypes.Insert("mmg_armored_cabinet_rusty");
		config.containerTypes.Insert("mmg_locker02_blue");
		config.containerTypes.Insert("mmg_locker02_green");
		config.containerTypes.Insert("mmg_locker02_tan");
		config.containerTypes.Insert("mmg_old_safe_green");
		config.containerTypes.Insert("mmg_old_safe_grey");
		config.containerTypes.Insert("mmg_gun_rack_blue");
		config.containerTypes.Insert("mmg_gun_rack_green");
		config.containerTypes.Insert("mmg_gun_rack_tan");
		config.containerTypes.Insert("mmg_gun_rack_planks");
		config.containerTypes.Insert("mmg_craftable_gun_rack");
		config.containerTypes.Insert("mmg_lockable_gun_rack_grey");
		config.containerTypes.Insert("mmg_gun_wall_wooden");
		config.containerTypes.Insert("mmg_gun_wall_metal");
		config.containerTypes.Insert("mmg_army_box_green");
		config.containerTypes.Insert("mmg_army_box_medic");
		config.containerTypes.Insert("mmg_army_box_medic_grey");
		config.containerTypes.Insert("mmg_military_case_green");
		config.containerTypes.Insert("mmg_weapon_crate-wood");
		config.containerTypes.Insert("mmg_palette_storage");
		config.containerTypes.Insert("mmg_fridge_minsk_beige");
		config.containerTypes.Insert("mmg_fridge_minsk_blue");
		config.containerTypes.Insert("mmg_toolwagon_red");
		config.containerTypes.Insert("mmg_trashcan_yellow");
		config.containerTypes.Insert("mmg_trashcan_green");
		config.containerTypes.Insert("mmg_grenade_case_green");
		config.containerTypes.Insert("mmg_gear_stand");
		config.containerTypes.Insert("mediumtent");
		config.containerTypes.Insert("mediumtent_green");
		config.containerTypes.Insert("mediumtent_orange");
		config.containerTypes.Insert("largetent");
		config.containerTypes.Insert("cartent");
		config.containerTypes.Insert("partytent");
		config.containerTypes.Insert("partytent_blue");
		config.containerTypes.Insert("partytent_brown");
		config.containerTypes.Insert("partytent_lunapark");
		config.containerTypes.Insert("woodencrate");


		config.containerKits.Insert("mmg_planter_box_kit");
		config.containerKits.Insert("mmg_greenhouse_kit");
		config.containerKits.Insert("mmg_craftable_tent_kit");
		config.containerKits.Insert("mmg_equipment_locker_green_kit");
		config.containerKits.Insert("mmg_equipment_locker_black_kit");
		config.containerKits.Insert("mmg_equipment_locker_grey_kit");
		config.containerKits.Insert("mmg_locker02_blue_kit");
		config.containerKits.Insert("mmg_locker02_green_kit");
		config.containerKits.Insert("mmg_locker02_tan_kit");
		config.containerKits.Insert("mmg_gun_rack_kit_blue");
		config.containerKits.Insert("mmg_gun_rack_kit_green");
		config.containerKits.Insert("mmg_gun_rack_kit_tan");
		config.containerKits.Insert("mmg_craftable_gun_rack");
		config.containerKits.Insert("mmg_lockable_gun_rack_kit_grey");
		config.containerKits.Insert("mmg_gun_wall_kit_wooden");
		config.containerKits.Insert("mmg_gun_wall_kit_metal");
		config.containerKits.Insert("mmg_palette_storage");
		config.containerKits.Insert("mmg_fridge_kit_beige");
		config.containerKits.Insert("mmg_fridge_kit_blue");
		config.containerKits.Insert("woodencrate");
				
        if (FileExist(configRoot)==0)
        {
            Print("[RationalBases] '" + configRoot + "' does not exist, creating directory");
            MakeDirectory(configRoot);
        }
		
		Print("[RationalBases] Saving default config file!");			
        JsonFileLoader<Config_settings>.JsonSaveFile(configPath, config);
		
	}
}
