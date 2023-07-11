#pragma once

#include <memory>
#include "FurnitureFactory.hpp"

class VictorianFurnitureFactory : public FurnitureFactory
{
public:
    [[nodiscard]] std::shared_ptr<Chair> createChair() const override;
    [[nodiscard]] std::shared_ptr<Table> createTable() const override;
};