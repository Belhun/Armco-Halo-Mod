@ECHO OFF

del /q /s "%~dp0..\..\Export\@armcohalo\Addons\*.pbo"

xcopy /y /i /f "cfgPatches.hpp" "%~dp0..\..\Export\@armcohalo\Addons\cfgPatches.hpp"
xcopy /y /i /f "config.cpp" "%~dp0..\..\Export\@armcohalo\Addons\config.cpp"
xcopy /y /i /f "%~dp0..\example\@armcohalo\mod.cpp" "%~dp0..\..\Export\@armcohalo\mod.cpp"

C:
cd C:\Program Files\PBO Manager v.1.4 beta

PBOConsole.exe -pack %~dp0armco_vehicles       %~dp0..\..\Export\@armcohalo\Addons\armco_vehicles.pbo
PBOConsole.exe -pack %~dp0armco_armours         %~dp0..\..\Export\@armcohalo\Addons\armco_armours.pbo
PBOConsole.exe -pack %~dp0armco_items           %~dp0..\..\Export\@armcohalo\Addons\armco_items.pbo
PBOConsole.exe -pack %~dp0armco_units           %~dp0..\..\Export\@armcohalo\Addons\armco_units.pbo

PAUSE