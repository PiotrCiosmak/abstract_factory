#include "../../include/furniture_factory/ModernFurnitureFactory.hpp"
#include "../../include/chair/ModernChair.hpp"
#include "../../include/table/ModernTable.hpp"

std::shared_ptr<Chair> ModernFurnitureFactory::createChair() const
{
    return std::make_shared<ModernChair>();
}

std::shared_ptr<Table> ModernFurnitureFactory::createTable() const
{
    return std::make_shared<ModernTable>();
}
