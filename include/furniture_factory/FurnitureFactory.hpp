#pragma once

#include "../chair/Chair.hpp"
#include "../table/Table.hpp"

class FurnitureFactory
{
public:
    virtual Chair* createChair() const = 0;
    virtual Table* createTable() const = 0;
};