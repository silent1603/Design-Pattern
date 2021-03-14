#ifndef BOAT_H
#define BOAT_H
#include "IVehicle.h"
class Boat:public IVehicle{
    public:
    Boat();
    ~Boat();
    std::string getType() override;
};
#endif