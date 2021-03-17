#ifndef MACFACTORY_H
#define MACFACTORY_H
#include "Factory.h"
#include "MacProduct.h"
#include "MacPropertype.h"
class MacFactory: public Factory{
    public:
    void createProduct() override;
    void createPropertype() override; 
};
#endif