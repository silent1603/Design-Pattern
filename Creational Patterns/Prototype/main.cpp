#include "main.h"


void Client(PrototypeFactory &prototype_factory) {
  std::cout << "Let's create a Prototype 1\n";

  Prototype *prototype = prototype_factory.CreatePrototype(TypePrototype::PROTOTYPE_1);
  prototype->Print(90);
  delete prototype;

  std::cout << "\n";

  std::cout << "Let's create a Prototype 2 \n";

  prototype = prototype_factory.CreatePrototype(TypePrototype::PROTOTYPE_2);
  prototype->Print(10);

  delete prototype;
}

int main(int argc, char **argv)
{
    PrototypeFactory *prototype_factory = new PrototypeFactory();
    Client(*prototype_factory);
    delete prototype_factory;

    return 0;
}