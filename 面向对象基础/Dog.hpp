#include "Animal.hpp"
#include <string>

using std::string;

class Dog : public Animal{
    protected:
        string getShoutSound()override{
            return "汪";
        }
    public:
        Dog(string name) : Animal(name){}
        Dog() : Animal(){}
        ~Dog(){}
};