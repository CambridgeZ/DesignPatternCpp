#ifndef SUB_HPP
#define SUB_HPP

#include "Operation.hpp"

class Sub : public Operation{
    public:
        double getResult(double numberA, double numberB) override{
            return numberA - numberB;
        }
};

#endif