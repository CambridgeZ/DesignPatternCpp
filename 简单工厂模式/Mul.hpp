#ifndef MUL_HPP
#define MUL_HPP

#include "Operation.hpp"

class Mul : public Operation{
    public:
        double getResult(double numberA, double numberB) override{
            return numberA * numberB;
        }
};

#endif