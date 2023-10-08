del "C:\Program Files (x86)\Steam\steamapps\common\DayZServer\@FooBarLand" /S /F /Q
rmdir "C:\Program Files (x86)\Steam\steamapps\common\DayZServer\@FooBarLand" /S /Q
xcopy "P:\_Tutorial_by_error\@FooBarLand" "C:\Program Files (x86)\Steam\steamapps\common\DayZServer\@FooBarLand\" /E
del "C:\Program Files (x86)\Steam\steamapps\common\DayZServer\NavMeshServer.bat" /S /F /Q
del "C:\Program Files (x86)\Steam\steamapps\common\DayZServer\serverDZFooBarLand.cfg" /S /F /Q
xcopy "P:\_Tutorial_by_error\Misc\NavMeshServer\NavMeshServer.bat" "C:\Program Files (x86)\Steam\steamapps\common\DayZServer\" /E
xcopy "P:\_Tutorial_by_error\Misc\NavMeshServer\serverDZFooBarLand.cfg" "C:\Program Files (x86)\Steam\steamapps\common\DayZServer\" /E
C:
cd "C:\Program Files (x86)\Steam\steamapps\common\DayZServer\"
NavMeshServer.bat
pause