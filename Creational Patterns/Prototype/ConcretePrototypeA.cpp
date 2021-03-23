#include "ConcretePrototypeA.h"

ConcretePrototypeA::ConcretePrototypeA()
{

}

ConcretePrototypeA::ConcretePrototypeA(std::string n,float v):Prototype(n),valueS(v){

}

Prototype* ConcretePrototypeA::Clone() const  {
    return new ConcretePrototypeA(*this);
}

ConcretePrototypeA::~ConcretePrototypeA()
{

}