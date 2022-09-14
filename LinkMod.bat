@echo off

cd /D "%~dp0"

IF exist "P:\RationalBases\" (
	echo Removing existing link P:\RationalBases
	rmdir "P:\RationalBases\"
)

echo mklink /J "P:\RationalBases\" "%~dp0"
mklink /J "P:\RationalBases\" "%~dp0"

echo Done
