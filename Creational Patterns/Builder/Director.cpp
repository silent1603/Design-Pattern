#include "Director.h"

Director::Director(){

}

Director::~Director(){
    
}

void Director::SetBuilder(IBuilder* b)
{
    this->builder = b;
}

void Director::BuildMinimalViableProduct(){
    this->builder->ProductPartA();
}

void Director::BuildFullFeaturedProduct(){
    this->builder->ProductPartA();
    this->builder->ProductPartB();
    this->builder->ProductPartC();
}