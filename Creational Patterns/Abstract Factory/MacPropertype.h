#ifndef MACPROPERTYPE_H
#define MACPROPERTYPE_H
#include "IPropertype.h"
class MacPropertype: public IPropertype{
    public:
    MacPropertype();
    ~MacPropertype();
    std::string create() const override;
};
#endif
