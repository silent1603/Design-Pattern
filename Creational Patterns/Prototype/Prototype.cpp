#include "Prototype.h"

Prototype::Prototype(): name(""),value(0) {

}

Prototype::Prototype(std::string n): name(n),value(0)
{
    
}

void Prototype::Print(float value)
{
    this->value = value;
    std::cout << "Name: " << name << " with value :" << value <<'\n'; 
}

Prototype::~Prototype()
{

}