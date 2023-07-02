#pragma once

#include <iostream>

class Chair
{
public:
    virtual std::string sitOn() const = 0;
    virtual int getNumberOfLegs() const = 0;

    virtual ~Chair()
    {};
};