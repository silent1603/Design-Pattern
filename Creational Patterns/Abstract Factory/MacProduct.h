#ifndef MACPRODUCT_H
#define MACPRODUCT_H
#include "Product.h"
class MacProduct: public Product{
    public:
    std::string create() const override;
    std::string apply(const Propertype& p) const override;
};
#endif