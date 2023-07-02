cmake_minimum_required(VERSION 3.25)
project(abstract_factory)

set(CMAKE_CXX_STANDARD 23)

add_executable(abstract_factory main.cpp src/chair/VictorianChair.cpp include/chair/Chair.hpp src/chair/ModernChair.cpp include/table/Table.hpp src/table/VictorianTable.cpp src/table/ModernTable.cpp include/furniture_factory/FurnitureFactory.hpp src/furniture_factory/ModernFurnitureFactory.cpp src/furniture_factory/VictorianFurnitureFactory.cpp)
