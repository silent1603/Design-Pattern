#ifndef TANK_H
#define TANK_H
#include "IVehicle.h"
class Tank:public IVehicle {
    public:
    Tank();
    ~Tank();
    std::string getType() override;
};
#endif