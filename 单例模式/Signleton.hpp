#ifndef SINGLETON_HPP
#define SINGLETON_HPP
#include <iostream>

class Singleton{
public:
    static Singleton& get_instance(){
        static Singleton instance;
        return instance;
    }
    void show(){
        std::cout << "Singleton::show()" << std::endl;
    }

private:
    Singleton() = default;
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    ~Singleton() = default;    
};


#endif // SINGLETON_HPP