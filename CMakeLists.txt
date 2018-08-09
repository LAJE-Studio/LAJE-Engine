cmake_policy(SET CMP0048 NEW)
project(LAJE-Engine LANGUAGES CXX VERSION 0.0.1)
cmake_minimum_required(VERSION 3.10)
# Load Engine Modules
set(CMAKE_MODULE_PATH ${CMAKE_HOME_DIRECTORY}/CMake)
add_subdirectory(Engine)
add_subdirectory(Example)