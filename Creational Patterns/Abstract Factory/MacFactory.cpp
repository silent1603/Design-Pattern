#include "MacFactory.h"

void MacFactory::createProduct()
{
    IProduct *p = new MacProduct();
    std::cout << p->create() << '\n';
    delete p;
}

void MacFactory::createPropertype()
{
    IPropertype *p = new MacPropertype();
    std::cout << p->create() << '\n';
    delete p;
}

MacFactory::MacFactory()
{

}

MacFactory::~MacFactory()
{
    
}