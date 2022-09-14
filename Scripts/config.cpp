class CfgPatches
{
	class RB_Scripts
	{
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
		requiredAddons[] = {"Code Lock"};
	};
};

class CfgMods 
{
	class DZ_RationalBases
	{
		name = "RationalBases";
		dir = "RationalBases";
		credits = "Kpro1982";
		author = "Kpro1982";
		overview = "A mod that limits the number of codelocks and storage containers for a base.";
		creditsJson = "RationalBases/Scripts/Data/Credits.json";
		versionPath = "RationalBases/Scripts/Data/Version.hpp";
		type = "mod";
		dependencies[] =
		{
			"Game", "World", "Mission"
		};
		class defs
		{
			class imageSets
			{
				files[]=
				{
					"RationalBases/gui/imagesets/prefabs.imageset"
				};
			};

			class widgetStyles
			{
				files[]=
				{
					"RationalBases/gui/looknfeel/prefabs.styles"
				};
			};

			class engineScriptModule
			{
				value = "";
				files[] =
				{
					"RationalBases/scripts/common",
					"RationalBases/scripts/1_core"
				};
			};

			class gameScriptModule
			{
				value="";
				files[] = 
				{
					"RationalBases/scripts/common",
					"RationalBases/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[] = 
				{
					"RationalBases/scripts/common",
					"RationalBases/scripts/4_World"
				};
			};

			class missionScriptModule 
			{
				value="";
				files[] = 
				{
					"RationalBases/scripts/common",
					"RationalBases/scripts/5_Mission"
				};
			};
		};
	};
};
