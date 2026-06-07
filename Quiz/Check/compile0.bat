pushd F:\Projects\Quiz\Check
if exist  *.o del *.o
if exist *.exe del *.exe
i686-w64-mingw32-g++.exe -W -std=c++1z -fexceptions -c mod.cpp -o mod.o
i686-w64-mingw32-g++.exe -o mod.exe mod.o
if exist  *.o del *.o
popd
