#!/bin/bash

# Build the project using CMake
cmake --build build

# Check if the build was successful
if [ $? -eq 0 ]; then
  # Run the executable
  ./build/hello
else
  echo "Build failed. Exiting."
  exit 1
fi