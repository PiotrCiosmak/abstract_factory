#pragma once

#include "../chair/Chair.hpp"
#include "../table/Table.hpp"

class FurnitureFactory
{
public:
    [[nodiscard]] virtual std::shared_ptr<Chair> createChair() const = 0;
    [[nodiscard]] virtual std::shared_ptr<Table> createTable() const = 0;
};