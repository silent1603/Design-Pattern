#include "main.h"


void ClientCode(Director& director)
{
    ManualBuilder* builder = new ManualBuilder();
    director.SetBuilder(builder);
    std::cout << "Standard basic product:\n"; 
    director.BuildMinimalViableProduct();
    
    Product* p= builder->GetProduct();
    p->ListParts();
    delete p;

    std::cout << "Standard full featured product:\n"; 
    director.BuildFullFeaturedProduct();

    p= builder->GetProduct();
    p->ListParts();
    delete p;

    // Remember, the Builder pattern can be used without a Director class.
    std::cout << "Custom product:\n";
    builder->ProductPartA();
    builder->ProductPartB();
    p=builder->GetProduct();
    p->ListParts();
    delete p;

    delete builder;
}

int main(int argc , char** argv)
{
    Director* d = new Director();
    ClientCode(*d);
    delete d;
    return 0;
}