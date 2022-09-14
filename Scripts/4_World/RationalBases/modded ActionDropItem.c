modded class ActionDropItem
{
	
	override void OnExecuteServer( ActionData action_data )
	{
		Print("ActionDropItem()");
		if ( !GetGame().IsMultiplayer() )
		{
			if(ScanUtils.CanPlaceContainer(Config_Globals.Get().max_locks,Config_Globals.Get().search_radius))
			{
				super.OnExecuteServer(action_data);
			}
			else{
		
				GetGame().ChatPlayer(string.Format("You cannot drop this container as you have reached your limit for this base."));
			}
		}
		
	}
	
	override void OnExecuteClient( ActionData action_data )
	{
		Print("ActionDropItem()");
		if(ScanUtils.CanPlaceContainer(Config_Globals.Get().max_locks,Config_Globals.Get().search_radius))
		{
			super.OnExecuteClient(action_data);
		}
		else{
		
			GetGame().ChatPlayer(string.Format("You cannot drop this container as you have reached your limit for this base."));
		}
	}
}