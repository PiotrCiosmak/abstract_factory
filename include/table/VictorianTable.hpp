#pragma once

#include "Table.hpp"

class VictorianTable : public Table
{
public:
    [[nodiscard]] std::string getUpOn() const override;
    [[nodiscard]] int getNumberOfSeats() const override;
};