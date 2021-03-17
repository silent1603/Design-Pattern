#ifndef FACTORY_H
#define FACTORY_H
#include "IVehicle.h"
#include "Vehicle.h"
class Factory{
    public:
    
    virtual ~Factory();
    virtual IVehicle* getIProduct(Vehicle) const = 0;

    std::string printIProduct(Vehicle) const; 

};
#endif 