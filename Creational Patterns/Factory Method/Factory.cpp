#include "Factory.h"


Factory::~Factory()
{

}

std::string Factory::printProduct(Vehicle v) const
{
    IVehicle* product = getProduct(v);
    std::string result = product->getType();
    std::cout << "Type of product is "<< result << '\n';
    delete product;
    return result;
}
