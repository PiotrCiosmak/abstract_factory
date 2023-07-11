#pragma once

#include "Chair.hpp"

class VictorianChair : public Chair
{
public:
    [[nodiscard]] std::string sitOn() const override;
    [[nodiscard]] int getNumberOfLegs() const override;
};