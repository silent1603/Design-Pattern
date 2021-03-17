#include "MacProduct.h"

std::string MacProduct::create() const
{
    return "Mac Product";
}

std::string MacProduct::apply(const IPropertype& p) const {
    const std::string tempPro = p.create();
    return "Propertype was apply from "+tempPro;
}

MacProduct::MacProduct()
{

}

MacProduct::~MacProduct()
{
    
}