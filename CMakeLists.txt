cmake_minimum_required(VERSION 3.12)
project(ExtraAssignment)

set(CMAKE_CXX_STANDARD 14)

add_executable(ExtraAssignment main.cpp Vehicle.hpp DerivedVehicle.cpp DerivedVehicle.hpp Car.cpp Car.hpp Bicycle.cpp Bicycle.hpp)