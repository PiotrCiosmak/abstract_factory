#pragma once

#include <iostream>

class Table
{
public:
    virtual std::string getUpOn() const = 0;
    virtual int getNumberOfSeats() const = 0;

    virtual ~Table()
    {};
};