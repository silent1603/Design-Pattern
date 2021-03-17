#ifndef MACFACTORY_H
#define MACFACTORY_H
#include "IFactory.h"
#include "MacProduct.h"
#include "MacPropertype.h"
class MacFactory: public IFactory{
    public:
    MacFactory();
    ~MacFactory();
    void createProduct() override;
    void createPropertype() override; 
};
#endif