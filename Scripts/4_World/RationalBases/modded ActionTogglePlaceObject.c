modded class ActionTogglePlaceObject
{

	override void Start( ActionData action_data )
	{
		Print("ActionTogglePlaceObject()");
		
		ItemBase item = action_data.m_MainItem;	
		Print(string.Format("Attempting to place/craft: [%1]", item.GetDisplayName()));
		
		int containerCount = 0;
		if(ScanUtils.IsBaseContainer(item) || ScanUtils.IsCraftableContainer(item))
		{
			Print(string.Format("Total containers = [%1]", containerCount ));
			if(ScanUtils.CanPlaceContainer(Config_Globals.Get().max_containers,Config_Globals.Get().search_radius))
			{
				super.Start(action_data);
			}
			else{
						
				GetGame().ChatPlayer(string.Format("You cannot place/deploy this container as you have reached your limit for this base."));
				return;
			}

			
		}
		else{
			super.Start(action_data);
		
		}
		
		
		
		

						
	}
}