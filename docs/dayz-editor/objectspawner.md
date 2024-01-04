DayZ-Rheingau Discord: https://discord.gg/rguhT6HHD7

Official article for **DayZ Object Spawner** https://community.bistudio.com/wiki/DayZ:Object_Spawner

# known issues

placed animals or infected do not move or interact

# adding objects to your server

find your serverDZ.cfg (or your custom serverDZ.cfg) in your DayZ server root and add ***"enableCfgGameplayFile = 1;"*** as shown
```
enableCfgGameplayFile = 1;
```
<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/dayz-editor/img/serverconfig.png">

start the official DayZ Launcher and install a mod called "DayZ-Editor". enabled the mod and the map you want to edit. in this example we are using "Rheingau" as map. hit "play" to start DayZ.

<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/dayz-editor/img/dayzlauncher.png">

after the editor loaded you can click "open editor" and select your map.

<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/dayz-editor/img/editormenu.png">

find a location you want to edit

<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/dayz-editor/img/empty.jpg">

add some object. we are using a garage in this case

<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/dayz-editor/img/garage.jpg">

export your changes via file > export > export to objectspawner.json

<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/dayz-editor/img/exportmenu.jpg">

save your file where ever you like

<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/dayz-editor/img/examplefile.jpg">

when you get a green message like this you can close the DayZ-Editor

<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/dayz-editor/img/saved.jpg">

create a folder ***"custom"*** (or whatever you like) in your mission folder

<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/dayz-editor/img/customfolder.png">

move your saved file in this folder

<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/dayz-editor/img/custominside.png">

edit ***cfggameplay.json*** inside your mission folder

<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/dayz-editor/img/cfggameplayjson.png">

<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/dayz-editor/img/cfggameplayjsonedit.png">

run your server

<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/dayz-editor/img/server.png">

enjoy your objects

<img src="https://github.com/ranseier86/DayZ-FooBarLand/blob/main/docs/dayz-editor/img/finish.jpg">
