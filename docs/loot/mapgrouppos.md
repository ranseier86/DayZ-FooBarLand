# mapgrouppos.xml
contains all positions of your houses or spawnable objects like trains, wrecks etc.

# mapgroupcluster.xml
contains all positions of your environment objects like fruit trees etc.

# generate mapgrouppos and mapgroupcluster
your default init.c should look like this https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/loot/files/init.c and should be located in something like this **DayZServer\mpmissions\dayzOffline.rheingau\init.c**

edit this file
<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/loot/img/initcgetceapi.png">

```
void main()
{
	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();
	
	GetCEApi().ExportProxyData("4096 0 4096", 8192);	// standard map groups (buildings) export, terrain center and radius needs to be specified
	GetCEApi().ExportClusterData();						// cluster-type map groups export (fruit trees etc.)
```

run your local server and wait until it is done loading.

<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/loot/img/server.png">

you now find a folder "export" inside your "storage" folder.

<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/loot/img/export.png">

select those two files mapgroupcluster.xml and mapgrouppos.xml 

<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/loot/img/xmlfiles.png">

and move them to your mission root

<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/loot/img/export2mission.png">

you can stop the local server.

if you like you can keep the GetCEApi commands by commenting them out. do not keep those commands active in a production environment

<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/loot/img/initcgetceapicomment.png">

```
void main()
{
	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();
	
	GetCEApi().ExportProxyData("4096 0 4096", 8192);	// standard map groups (buildings) export, terrain center and radius needs to be specified
	GetCEApi().ExportClusterData();						// cluster-type map groups export (fruit trees etc.)
```

restart your server to see the effect

<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/loot/img/server.png">
