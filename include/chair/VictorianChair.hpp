#pragma once

#include "Chair.hpp"

class VictorianChair : public Chair
{
public:
    std::string sitOn() const override;
    int getNumberOfLegs() const override;
};