@echo off
title Modern Warfare 2 (PC Recompiled)
echo ====================================================================
echo        Modern Warfare 2 - Native PC Port (Vulkan / x64)
echo ====================================================================
echo Launching game on your primary display...
echo.
cd /d "%~dp0"
build-win\mw2.exe mw2\default.pe mw2\game
if errorlevel 1 (
    echo.
    echo Game exited with an error. Check the console output above.
    pause
)
