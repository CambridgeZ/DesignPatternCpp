#ifndef SINGLETON_HPP
#define SINGLETON_HPP

class Singleton {
public:
    static Singleton* getInstance(){
        return &instance;
    }
private:
    static Singleton instance;
    Singleton() {}
};

Singleton Singleton::instance;

#endif