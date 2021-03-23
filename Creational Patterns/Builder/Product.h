#ifndef PRODUCT_H
#define PRODUCT_H

#include<string>
#include <vector>
class Product{
    public:
    std::vector<std::string> parts;

    Product();
    ~Product();
    void ListParts() const;
};
#endif