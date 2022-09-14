modded class PlayerBase	
{
	
	
	override void OnJumpStart()    
    {
		ScanUtils.CountContainers(Config_Globals.Get().search_radius);
        super.OnJumpStart();         


		
    }
	
	override bool CanDropEntity (notnull EntityAI item) 
  { 
		Print("CanDropEntity()");
	
		if(ScanUtils.IsBaseContainer(item))
		{
  			return ScanUtils.CanPlaceContainer(Config_Globals.Get().max_locks,Config_Globals.Get().search_radius);
		}
		return super.CanDropEntity(item);
  }
  

}