#ifndef ADD_HPP
#define ADD_HPP

#include "Operation.hpp"

class Add : public Operation{
    public:
        double getResult(double numberA, double numberB) override{
            return numberA + numberB;
        }
};

#endif