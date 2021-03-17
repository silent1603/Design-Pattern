#ifndef MACPRODUCT_H
#define MACPRODUCT_H
#include "IProduct.h"
class MacProduct: public IProduct{
    public:
    MacProduct();
    ~MacProduct();
    std::string create() const override;
    std::string apply(const IPropertype& p) const override;
};
#endif