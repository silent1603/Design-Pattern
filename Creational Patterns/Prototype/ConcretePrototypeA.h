#ifndef CONCRETEPROTOTYPEA_H
#define CONCRETEPROTOTYPEA_H
#include "Prototype.h"
class ConcretePrototypeA: public Prototype{
    private:
    float valueS;
    public:
    ConcretePrototypeA();
    ConcretePrototypeA(std::string,float);
    ~ConcretePrototypeA();
    Prototype* Clone() const override;
};
#endif