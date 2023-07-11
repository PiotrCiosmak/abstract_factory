#pragma once

#include "Table.hpp"

class ModernTable : public Table
{
public:
    [[nodiscard]] std::string getUpOn() const override;
    [[nodiscard]] int getNumberOfSeats() const override;
};