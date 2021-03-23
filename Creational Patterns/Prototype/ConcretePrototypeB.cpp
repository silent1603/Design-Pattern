#include "ConcretePrototypeB.h"

ConcretePrototypeB::ConcretePrototypeB()
{

}
ConcretePrototypeB::ConcretePrototypeB(std::string n,float v):Prototype(n),valueS(v){

}

Prototype* ConcretePrototypeB::Clone() const  {
    return new ConcretePrototypeB(*this);
}

ConcretePrototypeB::~ConcretePrototypeB()
{

}