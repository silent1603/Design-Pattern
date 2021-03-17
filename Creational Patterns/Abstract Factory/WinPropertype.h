#ifndef WINPROPERTYPE_H 
#define WINPROPERTYPE_H
#include "IPropertype.h"

class WinPropertype:public IPropertype{
    public:
    WinPropertype();
    ~WinPropertype();
    std::string create() const override;
 
};
#endif