#ifndef BOAT_H
#define BOAT_H
#include "IVehicle.h"
class Boat:IVehicle{
    public:
    Boat();
    ~Boat();
    std::string getType() override;
};
#endif