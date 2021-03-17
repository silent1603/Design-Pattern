#include "WinProduct.h"

std::string WinProduct::create() const
{
   return "WinProduct" ;
}

std::string WinProduct::apply(const IPropertype& p) const {
    const std::string tempPro = p.create();
    return  "Propertype was apply from "+ tempPro ;
}

WinProduct::WinProduct()
{

}

WinProduct::~WinProduct()
{

}