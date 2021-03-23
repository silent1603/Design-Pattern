#ifndef IBUILDER_H
#define IBUILDER_H
class IBuilder{
    public:
    virtual ~IBuilder();
    virtual void Reset() = 0;
    virtual void ProductPartA()const = 0;
    virtual void ProductPartB()const = 0;
    virtual void ProductPartC()const = 0;
};
#endif