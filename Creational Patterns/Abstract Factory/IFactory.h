#ifndef IFACTORY_H
#define IFACTORY_H
class IFactory{
    public:
    virtual ~IFactory();
    virtual void createProduct() = 0;
    virtual void createPropertype() = 0;
};
#endif