#include "Singleton.hpp"
#include <iostream>

// int main(){
//     Singleton* s1 = Singleton::getInstance();
//     Singleton* s2 = Singleton::getInstance();
//     if(s1 == s2){
//         std::cout << "s1 and s2 are the same instance." << std::endl;
//     }else{
//         std::cout << "s1 and s2 are different instances." << std::endl;
//     }
//     return 0;
// }

#include <thread>

void test(){
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();
    if(s1 == s2){
        std::cout << "s1 and s2 are the same instance." << std::endl;
    }else{
        std::cout << "s1 and s2 are different instances." << std::endl;
    }
}

int main(){
    std::thread t1(test);
    std::thread t2(test);
    t1.join();
    t2.join();
    return 0;
}

//编译命令：cd "/root/learnCppProgram/DesignPatternCpp/单例模式/懒汉单例模式/" && g++ test.cpp -o test -pthread  && "/root/learnCppProgram/DesignPatternCpp/单例模式/懒汉单例模式/"test