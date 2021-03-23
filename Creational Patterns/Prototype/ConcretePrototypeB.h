#ifndef CONCRETEPROTOTYPEB_H
#define CONCRETEPROTOTYPEB_H
#include "Prototype.h"
class ConcretePrototypeB: public Prototype{
    private:
    float valueS;
    public:
    ConcretePrototypeB();
    ConcretePrototypeB(std::string,float);
    ~ConcretePrototypeB();
    Prototype* Clone() const override;
};
#endif