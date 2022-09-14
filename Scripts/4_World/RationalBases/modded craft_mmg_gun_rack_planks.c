modded class craft_mmg_gun_rack_planks 
{	
	
  override bool CanDo(ItemBase ingredients[], PlayerBase player)
  {
		Print("craft_mmg_gun_rack_planks.CanDo()");
		int result = ScanUtils.CanPlaceContainer(Config_Globals.Get().max_containers,Config_Globals.Get().search_radius);
		if(!result)
		{
		//	GetGame().ChatPlayer(string.Format("You cannot craft this container as you have reached your limit for this base."));
		}
		return result;

  }
	
}