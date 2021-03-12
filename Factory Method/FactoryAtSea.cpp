#include "FactoryAtSea.h"
#include "Boat.h"
#include "SteamShip.h"
FactoryAtSea::FactoryAtSea()
{

}
FactoryAtSea::~FactoryAtSea(){

}

IVehicle* FactoryAtSea::getProduct(Vehicle v) const {
    IVehicle* p = nullptr;
    switch (v)
    {
    case Vehicle::STEAMSHIP :
        p = new SteamShip();
        break;
    case Vehicle::BOAT :
        p = new Boat();
        break;
    default:
        std::cout << "can't find type" << '\n';
        break;
    }
    return p;
}