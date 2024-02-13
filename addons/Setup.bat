@ECHO OFF

xcopy /y /i /f "cfgPatches.hpp" "%~dp0..\..\Export\@armcohalo\Addons\cfgPatches.hpp"
xcopy /y /i /f "config.cpp" "%~dp0..\..\Export\@armcohalo\Addons\config.cpp"
xcopy /y /i /f "%~dp0..\example\@armcohalo\mod.cpp" "%~dp0..\..\Export\@armcohalo\mod.cpp"


PAUSE