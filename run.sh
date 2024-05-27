#!/bin/bash
#first
# cd build
# cmake ..
# make
# cd ../
# Build the project using CMake
cd build
cmake ..
make
cd ../
# cmake --build build

# Check if the build was successful
if [ $? -eq 0 ]; then
  # Run the executable
  ./build/hello
else
  echo "Build failed. Exiting."
  exit 1
fi