#pragma once

#include <iostream>

class Chair
{
public:
    [[nodiscard]] virtual std::string sitOn() const = 0;
    [[nodiscard]] virtual int getNumberOfLegs() const = 0;
    virtual ~Chair() = default;
};