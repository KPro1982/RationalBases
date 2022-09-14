modded class ActionAttachCodeLockToFence  {
    

    override void OnExecuteClient(ActionData action_data) {
       PlayerBase pBase = PlayerBase.Cast(GetGame().GetPlayer());
		bool result = ScanUtils.CanPlaceCodeLock(Config_Globals.Get().max_locks,Config_Globals.Get().search_radius);
		
		if(result) 
  			 super.OnExecuteClient(action_data);
    }

    override void OnExecuteServer(ActionData action_data) {
        PlayerBase pBase = PlayerBase.Cast(GetGame().GetPlayer());
		bool result = ScanUtils.CanPlaceCodeLock(Config_Globals.Get().max_locks,Config_Globals.Get().search_radius);
		
		if(result) 
  			 super.OnExecuteClient(action_data);
    }
}