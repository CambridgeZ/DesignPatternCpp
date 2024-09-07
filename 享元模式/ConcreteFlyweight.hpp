#ifndef CONCRETEFLYWEIGHT_HPP
#define CONCRETEFLYWEIGHT_HPP

#include "Flyweight.hpp"
#include <iostream>

using std::cout;
using std::endl;

class ConcreteFlyweight : public Flyweight{
public:
    void Operation( shared_ptr<User> user ) override{
        cout<< "ConcreteFlyweight: " << user->getName() << endl;
    }
};

#endif