#include "MacFactory.h"

void MacFactory::createProduct()
{
    Product *p = new MacProduct();
    std::cout << p->create() << '\n';
    delete p;
}

void MacFactory::createPropertype()
{
    Propertype *p = new MacPropertype();
    std::cout << p->create();
    delete p;
}