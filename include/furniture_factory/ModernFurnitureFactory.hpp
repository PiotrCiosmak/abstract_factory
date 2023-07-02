#pragma once

#include "FurnitureFactory.hpp"

class ModernFurnitureFactory : public FurnitureFactory
{
public:
    Chair* createChair() const override;
    Table* createTable() const override;
};