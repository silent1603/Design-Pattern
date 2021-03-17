#ifndef WINFACTORY_H
#define WINFACTORY_H
#include "IFactory.h"
#include "WinProduct.h"
#include "WinPropertype.h"
#include <iostream>
class WinFactory: public IFactory{
    public:
    WinFactory();
    ~WinFactory();
    void createProduct() override;
    void createPropertype() override;
};
#endif