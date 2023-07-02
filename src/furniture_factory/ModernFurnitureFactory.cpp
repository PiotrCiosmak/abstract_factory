#include "../../include/furniture_factory/ModernFurnitureFactory.hpp"
#include "../../include/chair/ModernChair.hpp"
#include "../../include/table/ModernTable.hpp"

Chair* ModernFurnitureFactory::createChair() const
{
    return new ModernChair();
}

Table* ModernFurnitureFactory::createTable() const
{
    return new ModernTable();
}
