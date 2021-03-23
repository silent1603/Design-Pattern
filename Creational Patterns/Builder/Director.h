#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "IBuilder.h"
class Director
{
private:
    IBuilder *builder;

public:
    Director();
    ~Director();
    void SetBuilder(IBuilder *);
    void BuildMinimalViableProduct();

    void BuildFullFeaturedProduct();
};
#endif