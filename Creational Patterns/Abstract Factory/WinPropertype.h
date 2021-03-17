#ifndef WINPROPERTYPE_H 
#define WINPROPERTYPE_H
#include "Propertype.h"

class WinPropertype:public Propertype{
    public:
    std::string create() const override;
 
};
#endif