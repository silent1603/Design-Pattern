#ifndef CAR_H
#define CAR_H
#include "IVehicle.h"
class Car: public IVehicle
{
    public:
    Car();
    ~Car();
    std::string getType() override;
};
#endif