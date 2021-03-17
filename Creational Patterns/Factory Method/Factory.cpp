#include "Factory.h"


Factory::~Factory()
{

}

std::string Factory::printIProduct(Vehicle v) const
{
    IVehicle* IProduct = getIProduct(v);
    std::string result = IProduct->getType();
    std::cout << "Type of IProduct is "<< result << '\n';
    delete IProduct;
    return result;
}
