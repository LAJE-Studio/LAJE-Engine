@ECHO OFF
set HOME_DIR=%~dp0/..
set BIN_DIR=%HOME_DIR%/Projects
cmake -G "Visual Studio 15 2017" -B%BIN_DIR% -H%HOME_DIR%