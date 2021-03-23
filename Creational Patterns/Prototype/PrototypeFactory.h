#ifndef PROTOTYPEFACTORY_H
#define PROTOTYPEFACTORY_H
#include "ConcretePrototypeA.h"
#include "ConcretePrototypeB.h"
#include "Type.h"
#include <unordered_map>
#include <unordered_set>
class PrototypeFactory{
    private:
     std::unordered_map<TypePrototype, Prototype *, std::hash<int>> prototypes_;
    public:
    PrototypeFactory();
    ~PrototypeFactory();
    Prototype* CreatePrototype(TypePrototype type);
};
#endif