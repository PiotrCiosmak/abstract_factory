#include <iostream>
#include <memory>
#include "include/furniture_factory/FurnitureFactory.hpp"
#include "include/furniture_factory/ModernFurnitureFactory.hpp"
#include "include/furniture_factory/VictorianFurnitureFactory.hpp"
#include "include/chair/Chair.hpp"
#include "include/table/Table.hpp"

void clientCode(const FurnitureFactory& furniture_factory);

int main()
{
    std::cout << "Client: Testing client code with the first factory type:\n";
    std::unique_ptr<ModernFurnitureFactory> modern_furniture_factory{new ModernFurnitureFactory()};
    clientCode(*modern_furniture_factory);

    std::cout << "\nClient: Testing the same client code with the second factory type:\n";
    std::unique_ptr<VictorianFurnitureFactory> victorian_furniture_factory{new VictorianFurnitureFactory()};
    clientCode(*victorian_furniture_factory);
}

void clientCode(const FurnitureFactory& furniture_factory)
{
    const std::unique_ptr<Chair> chair{furniture_factory.createChair()};
    const std::unique_ptr<Table> table{furniture_factory.createTable()};
    std::cout << chair->sitOn() << " This chair has " << chair->getNumberOfLegs() << " legs." << std::endl;
    std::cout << table->getUpOn() << " " << table->getNumberOfSeats() << " people can sit at this table." << std::endl;
}