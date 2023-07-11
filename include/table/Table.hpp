#pragma once

#include <iostream>

class Table
{
public:
    [[nodiscard]] virtual std::string getUpOn() const = 0;
    [[nodiscard]] virtual int getNumberOfSeats() const = 0;
    virtual ~Table() = default;
};