#include "PrototypeFactory.h"

  PrototypeFactory::PrototypeFactory() {
    prototypes_[TypePrototype::PROTOTYPE_1] = new ConcretePrototypeA("PROTOTYPE_1 ", 50.f);
    prototypes_[TypePrototype::PROTOTYPE_2] = new ConcretePrototypeB("PROTOTYPE_2 ", 60.f);
  }

  
  PrototypeFactory::~PrototypeFactory() {
    delete prototypes_[TypePrototype::PROTOTYPE_1];
    delete prototypes_[TypePrototype::PROTOTYPE_2];
  }

 
Prototype*   PrototypeFactory::CreatePrototype(TypePrototype type) {
    return prototypes_[type]->Clone();
  }