#ifndef FACTORYATSEA_H
#define FACTORYATSEA_H
#include "Factory.h"
class FactoryAtSea:public Factory{
    public:
    FactoryAtSea();
    ~FactoryAtSea();
    IVehicle* getIProduct(Vehicle) const override;
};
#endif