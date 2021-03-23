#ifndef MANUALBUILDER_H
#define MANUALBUILDER_H
#include "IBuilder.h"
#include "Product.h"
class ManualBuilder:public IBuilder{
    private:
    Product* product;
    public:
    
    ManualBuilder();
    ~ManualBuilder();
    void Reset() override;
    void ProductPartA() const override;
    void ProductPartB() const override;
    void ProductPartC() const override;
    Product* GetProduct();
};
#endif