#ifndef TANK_H
#define TANK_H
#include "IVehicle.h"
class Tank:IVehicle {
    public:
    Tank();
    ~Tank();
    std::string getType() override;
};
#endif