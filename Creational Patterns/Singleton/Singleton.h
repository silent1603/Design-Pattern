#ifndef SINGLETON_H
#define SINGLETON_H
#include <string>
#include <mutex>
class Singleton{
    public:
    Singleton(Singleton& other) = delete;
    void operator=(const Singleton* ) = delete;
    static Singleton *GetInstance(const std::string& value);
    std::string Value() const;
    private:
    static Singleton* instance;
    static std::mutex mutex;
    protected:
    std::string value;
    Singleton(const std::string value);
    ~Singleton();
};
#endif