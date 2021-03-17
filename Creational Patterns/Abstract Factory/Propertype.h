#ifndef PROPERTYPE_H
#define PROPERTYPE_H

class Propertype{
    public:
    virtual ~Propertype();
    virtual std::string create() const = 0;
    
};
#endif