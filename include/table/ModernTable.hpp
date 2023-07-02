#pragma once

#include "Table.hpp"

class ModernTable : public Table
{
public:
    std::string getUpOn() const override;
    int getNumberOfSeats() const override;
};