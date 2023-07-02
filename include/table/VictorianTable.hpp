#pragma once

#include "Table.hpp"

class VictorianTable : public Table
{
public:
    std::string getUpOn() const override;
    int getNumberOfSeats() const override;
};