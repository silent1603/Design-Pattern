#ifndef FACTORYONLAND_H
#define FACTORYONLAND_H
#include "Factory.h"
class FactoryOnLand:public Factory{
    public:
    FactoryOnLand();
    ~FactoryOnLand();
    IVehicle* getIProduct(Vehicle) const override;
};
#endif