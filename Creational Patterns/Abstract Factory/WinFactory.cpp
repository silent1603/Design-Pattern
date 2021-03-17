#include "WinFactory.h"

void WinFactory::createProduct(){
    Product* p = new WinProduct();
    std::cout << p->create() << '\n';
    delete p; 
}

void WinFactory::createPropertype()
{
    Propertype* p = new WinPropertype();
    std::cout << p->create();
    delete p;
}