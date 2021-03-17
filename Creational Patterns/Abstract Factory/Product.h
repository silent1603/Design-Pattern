#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include "Propertype.h">
class Product{
    public:
    virtual ~Product();
    virtual std::string create() const = 0;
    virtual std::string apply(const Propertype& p) const = 0;
};
#endif