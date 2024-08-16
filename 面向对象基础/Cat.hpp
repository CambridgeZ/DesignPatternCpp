#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <string>

using std::string;

class Cat : public Animal{
    protected:
        string getShoutSound() override{
            return "喵";
        }
    public:
        Cat(string name) : Animal(name){}
        Cat() : Animal(){}
        ~Cat(){}
};

#endif