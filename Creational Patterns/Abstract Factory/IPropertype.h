#ifndef IPROPERTYPE_H
#define IPROPERTYPE_H
#include <string>
class IPropertype{
    public:
    virtual ~IPropertype();
    virtual std::string create() const = 0;
    
};
#endif