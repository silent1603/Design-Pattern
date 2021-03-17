#ifndef WINFACTORY_H
#define WINFACTORY_H
#include "Factory.h"
#include "WinProduct.h"
#include "WinPropertype.h"
class WinFactory: public Factory{
    public:
    void createProduct() override;
    void createPropertype() override;
};
#endif