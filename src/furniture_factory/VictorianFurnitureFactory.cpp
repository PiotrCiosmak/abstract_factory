#include "../../include/furniture_factory/VictorianFurnitureFactory.hpp"
#include "../../include/chair/VictorianChair.hpp"
#include "../../include/table/VictorianTable.hpp"

std::shared_ptr<Chair> VictorianFurnitureFactory::createChair() const
{
    return std::make_shared<VictorianChair>();
}

std::shared_ptr<Table> VictorianFurnitureFactory::createTable() const
{
    return std::make_shared<VictorianTable>();
}
