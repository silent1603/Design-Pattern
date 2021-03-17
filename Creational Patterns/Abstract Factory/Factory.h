#ifndef FACTORY_H
#define FACTORY_H
class Factory{
    public:
    virtual ~Factory();
    virtual void createProduct() = 0;
    virtual void createPropertype() = 0;
};
#endif