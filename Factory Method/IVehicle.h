#ifndef IVEHICLE_H
#define IVEHICLE_H
#include <iostream>
class IVehicle{
    public:
    virtual ~IVehicle() ;
    virtual std::string getType() =0;
};
#endif 