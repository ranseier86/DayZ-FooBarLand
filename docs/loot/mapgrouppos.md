<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/loot/img/initcgetceapi.png">


DayZServer\mpmissions\dayzOffline.chernarusplus

void main()
{
	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();
	
	//GetCEApi().ExportProxyData("4096 0 4096", 8192);	// standard map groups (buildings) export, terrain center and radius needs to be specified
	//GetCEApi().ExportClusterData();						// cluster-type map groups export (fruit trees etc.)
