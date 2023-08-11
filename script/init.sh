#!/bin/sh
echo "Initializing the script"
echo "Creating build directory"
mkdir build
echo  "Switching to build folder"
cd build
echo  "cmaking your file"
cmake ..
echo  "make your file"
make
echo "copy self destory file to .."
cp selfDestory.sh ~/
