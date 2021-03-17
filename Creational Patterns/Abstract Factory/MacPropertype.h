#ifndef MACPROPERTYPE_H
#define MACPROPERTYPE_H
#include "Propertype.h"
class MacPropertype: public Propertype{
    public:
    std::string create() const override;
};
#endif
