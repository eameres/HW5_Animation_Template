@echo off

mkdir ga5-win64
cd ga5-win64
cmake -G "Visual Studio 16 2019" ../../src/engine
cd ..
