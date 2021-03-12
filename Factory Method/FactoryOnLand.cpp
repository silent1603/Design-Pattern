#include "FactoryOnLand.h"
#include "Tank.h"
#include "Car.h"

FactoryOnLand::FactoryOnLand()
{

}

FactoryOnLand::~FactoryOnLand()
{

}

IVehicle* FactoryOnLand::getProduct(Vehicle v) const
{
    IVehicle* p = nullptr;
    switch (v)
    {
    case Vehicle::CAR :
        p = new Car();
        break;
    case Vehicle::TANK:
        p = new Tank();
        break;
    default:
    std::cout << "Can't find type" << '\n';
        break;
    }
    return p;
}