#include "Main.h"

auto main(int argc,char** argv) -> int 
{
    Factory* fs = new FactoryAtSea();
    Factory* fl = new FactoryOnLand();
    std::cout << "Factory Sea: " <<fs->printProduct(Vehicle::BOAT) << '\n';
    std::cout <<"Factory Land: " << fl->printProduct(Vehicle::CAR) << '\n';
    delete fs;
    delete fl;
    return 0;
}