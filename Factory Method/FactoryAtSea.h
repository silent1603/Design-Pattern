#ifndef FACTORYATSEA_H
#define FACTORYATSEA_H
#include "Factory.h"
class FactoryAtSea:Factory{
    public:
    FactoryAtSea();
    ~FactoryAtSea();
    IVehicle* getProduct(Vehicle) const override;
};
#endif