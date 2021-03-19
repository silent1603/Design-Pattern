#include "Singleton.h"

std::mutex Singleton::mutex;
Singleton* Singleton::instance{nullptr};

std::string Singleton::Value()const {
    return value;
}

Singleton::Singleton(const std::string nvalue):value(nvalue)
{

}

Singleton::~Singleton(){

}

Singleton* Singleton::GetInstance(const std::string& value)
{
    std::lock_guard<std::mutex> lock(mutex);
    if(instance == nullptr)
    {
        instance = new Singleton(value);
    }
    return instance;
}