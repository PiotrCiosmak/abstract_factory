#pragma once

#include "Chair.hpp"

class ModernChair : public Chair
{
public:
    std::string sitOn() const override;
    int getNumberOfLegs() const override;
};