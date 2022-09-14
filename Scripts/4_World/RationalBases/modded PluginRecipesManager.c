modded class PluginRecipesManager	
{
	
	override int GetValidRecipes(ItemBase item1, ItemBase item2, array<int> ids, PlayerBase player)
	{
		//Print("InsideRecipeManager.GetValidRecipes");
		return super.GetValidRecipes(item1, item2, ids, player);
	}
  

}