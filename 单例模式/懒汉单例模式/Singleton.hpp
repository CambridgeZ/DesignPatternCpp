#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <mutex>
#include <memory>

using std::mutex;
using std::unique_lock;


class Singleton{
public:
    static Singleton* getInstance(){
        /*
            unique_lock是一个RAII对象，它在构造函数中锁住互斥量，在析构函数中释放互斥量。
            这样可以保证在任何情况下，互斥量都会被释放。
        */
        unique_lock<mutex> lock(mtx);
        if(instance == nullptr){
            instance = new Singleton();
        }
        return instance;
    }

private:
    static Singleton* instance;
    Singleton(){}
    static std::mutex mtx;
};

std::mutex Singleton::mtx;
Singleton* Singleton::instance = nullptr;

#endif