#ifndef CONCRETEFLYWEIGHT_HPP
#define CONCRETEFLYWEIGHT_HPP

#include "Flyweight.hpp"
#include <iostream>

class ConcreteFlyweight : public Flyweight{
public:
    void Operation(int extrinsicstate) override{
        std::cout << "ConcreteFlyweight: " << extrinsicstate << std::endl;
    }
};

#endif