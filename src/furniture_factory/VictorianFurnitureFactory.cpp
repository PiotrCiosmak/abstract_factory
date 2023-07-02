#include "../../include/furniture_factory/VictorianFurnitureFactory.hpp"
#include "../../include/chair/VictorianChair.hpp"
#include "../../include/table/VictorianTable.hpp"

Chair* VictorianFurnitureFactory::createChair() const
{
    return new VictorianChair();
}

Table* VictorianFurnitureFactory::createTable() const
{
    return new VictorianTable();
}
