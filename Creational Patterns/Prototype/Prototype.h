#ifndef PROTOTYPE_H
#define PROTOTYPE_H
#include <iostream>
#include <string>
class Prototype{
    protected:
    std::string name;
    float value;
    public:
    Prototype();
    Prototype(std::string);
    virtual ~Prototype();
    virtual Prototype* Clone() const = 0;
    virtual void Print(float);
};
#endif