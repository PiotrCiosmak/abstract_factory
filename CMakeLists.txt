cmake_minimum_required(VERSION 3.25)
project(abstract_factory)

set(CMAKE_CXX_STANDARD 23)

add_executable(abstract_factory main.cpp include/chair/Chair.hpp include/chair/ModernChair.hpp src/chair/ModernChair.cpp include/chair/VictorianChair.hpp src/chair/VictorianChair.cpp include/furniture_factory/FurnitureFactory.hpp include/furniture_factory/ModernFurnitureFactory.hpp src/furniture_factory/ModernFurnitureFactory.cpp include/furniture_factory/VictorianFurnitureFactory.hpp src/furniture_factory/VictorianFurnitureFactory.cpp include/table/Table.hpp include/table/ModernTable.hpp src/table/ModernTable.cpp include/table/VictorianTable.hpp src/table/VictorianTable.cpp)
