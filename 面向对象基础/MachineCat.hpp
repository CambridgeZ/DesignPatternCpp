#ifndef MACHINECAT_HPP
#define MACHINECAT_HPP

#include "Cat.hpp"
#include "IChange.hpp"
#include <string>

using std::string;

class MachineCat: public Cat, public IChange {
    public:
        MachineCat(string name) : Cat(name){}
        MachineCat() : Cat(){}
        string change(const string &s) const override{
            return "我是机器猫，我会变身";
        }
        ~MachineCat(){}
};

#endif