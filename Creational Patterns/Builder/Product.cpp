#include <iostream>
#include "Product.h"

Product::Product(){

}

Product::~Product(){
    
}

void Product::ListParts() const{
    for(size_t i = 0 ; i < parts.size() ; i++)
    {
            if(parts[i] == parts.back())
            {
                std::cout << parts[i] <<'\n';
            }else{
                std::cout << parts[i] << " , ";
            }
    }
}