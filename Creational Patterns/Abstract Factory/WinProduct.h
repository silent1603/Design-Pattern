#ifndef WINPRODUCT_H
#define WINPRODUCT_H
#include "Product.h"
class WinProduct:public Product{
    public:
    std::string create() const override;
    std::string apply(const Propertype& p) const override;
};
#endif