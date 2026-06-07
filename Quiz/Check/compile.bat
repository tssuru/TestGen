rem echo off
chcp 1251
call F:\Projects\Quiz\Check\compile0.bat 2>F:\Projects\Quiz\Check\msg.txt 1>&2
rem if exist mod.exe (mod.exe)
if exist mod.exe (mod.exe > check_pass.txt)
pause