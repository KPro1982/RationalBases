modded class BBP_BASE	
{
	
	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
	
		Print("bbp_base.CanReceiveAttachment");
		string attType = attachment.GetType();
		attType.ToLower();
		
		if(attType == "codelock")
		{
			return ScanUtils.CanPlaceCodeLock(Config_Globals.Get().max_locks,Config_Globals.Get().search_radius);
		}
		else{
			Print(attType);
			return super.CanReceiveAttachment(attachment, slotId );
		}
		
		
	
	}
  

}