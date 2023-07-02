#pragma once

#include "FurnitureFactory.hpp"

class VictorianFurnitureFactory : public FurnitureFactory
{
public:
    Chair* createChair() const override;
    Table* createTable() const override;
};