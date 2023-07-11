#include "include/furniture_factory/ModernFurnitureFactory.hpp"
#include "include/furniture_factory/VictorianFurnitureFactory.hpp"

void clientCode(const std::shared_ptr<FurnitureFactory>& furniture_factory);

int main()
{
    std::cout << "Client: Testing client code with the first factory type:" << std::endl;
    std::shared_ptr<ModernFurnitureFactory> modern_furniture_factory = std::make_shared<ModernFurnitureFactory>();
    clientCode(modern_furniture_factory);

    std::cout << "\nClient: Testing the same client code with the second factory type:\n";
    std::shared_ptr<VictorianFurnitureFactory> victorian_furniture_factory = std::make_shared<VictorianFurnitureFactory>();
    clientCode(victorian_furniture_factory);
}

void clientCode(const std::shared_ptr<FurnitureFactory>& furniture_factory)
{
    const std::shared_ptr<Chair> chair{furniture_factory->createChair()};
    const std::shared_ptr<Table> table{furniture_factory->createTable()};
    std::cout << chair->sitOn() << " This chair has " << chair->getNumberOfLegs() << " legs."
              << std::endl;
    std::cout << table->getUpOn() << " " << table->getNumberOfSeats()
              << " people can sit at this table." << std::endl;
}