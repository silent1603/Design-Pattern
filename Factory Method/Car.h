#ifndef CAR_H
#define CAR_H
#include "IVehicle.h"
class Car:IVehicle
{
    public:
    Car();
    ~Car();
    std::string getType() override;
};
#endif