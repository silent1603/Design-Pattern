#ifndef WINPRODUCT_H
#define WINPRODUCT_H
#include "IProduct.h"
class WinProduct:public IProduct{
    public:
    WinProduct();
    ~WinProduct();
    std::string create() const override;
    std::string apply(const IPropertype& p) const override;
};
#endif