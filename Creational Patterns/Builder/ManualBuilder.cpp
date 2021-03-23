#include "ManualBuilder.h"


ManualBuilder::ManualBuilder()
{
    this->Reset();
}

ManualBuilder::~ManualBuilder(){
    delete product;
}

Product* ManualBuilder::GetProduct()
{
    Product* product = this->product;
    this->Reset();
    return product;
}

void ManualBuilder::Reset(){
    this->product = new Product();
}

void ManualBuilder::ProductPartA() const{
    this->product->parts.push_back("part A");
}

void ManualBuilder::ProductPartB() const{
    this->product->parts.push_back("part B");
}

void ManualBuilder::ProductPartC() const{
    this->product->parts.push_back("part C");
}