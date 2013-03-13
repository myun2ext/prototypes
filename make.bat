@echo off
set CC=mingw32-c++
set CFLAGS=-O3
set INCLUDES=include
set SOURCES=test.cpp
set OUTFILE=test.exe

@echo on
%CC% %CFLAGS% -I %INCLUDES% %SOURCES% -o %OUTFILE%

@REM # Test Exec
%OUTFILE%

@pause