#include "WinFactory.h"

void WinFactory::createProduct(){
    IProduct* p = new WinProduct();
    std::cout << p->create() << '\n';
    delete p; 
}

void WinFactory::createPropertype()
{
    IPropertype* p = new WinPropertype();
    std::cout << p->create() << '\n';
    delete p;
}

WinFactory::WinFactory()
{

}

WinFactory::~WinFactory()
{
    
}