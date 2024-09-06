#include "Singleton.hpp"
#include <iostream>

int main(){
    Singleton *s1 = Singleton::getInstance();
    Singleton *s2 = Singleton::getInstance();
    if(s1 == s2){
        std::cout << "s1 == s2" << std::endl;
    }else{
        std::cout << "s1 != s2" << std::endl;
    }
    return 0;
}