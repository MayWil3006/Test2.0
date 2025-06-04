# Set the minimum required CMake version
cmake_minimum_required(VERSION 3.20)

# Define the project name and specify C++ as the project language
project(DeveloperApp LANGUAGES CXX)

# Set the C++ standard to 14 and mark it as required
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add common compiler flags: -Wall, -Wextra, and -pedantic
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")

# Add subdirectories for source files and tests
add_subdirectory(src)
add_subdirectory(tests)