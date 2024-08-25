#ifndef DIV_HPP
#define DIV_HPP

#include "Operation.hpp"

class Div : public Operation{
    public:
        double getResult(double numberA, double numberB) override{
            if(numberB == 0){
                throw "除数不能为0";
            }
            return numberA / numberB;
        }
};

#endif