#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include "IPropertype.h"
class IProduct{
    public:
    virtual ~IProduct();
    virtual std::string create() const = 0;
    virtual std::string apply(const IPropertype& p) const = 0;
};
#endif