#ifndef OPERATIONFACTORY_HPP
#define OPERATIONFACTORY_HPP

#include "Add.hpp"
#include "Sub.hpp"
#include "Mul.hpp"
#include "Div.hpp"

class OperationFactory{
    public:
        static Operation* createOperation(char operate){
            Operation* operation = nullptr;
            switch(operate){
                case '+':
                    operation = new Add();
                    break;
                case '-':
                    operation = new Sub();
                    break;
                case '*':
                    operation = new Mul();
                    break;
                case '/':
                    operation = new Div();
                    break;
            }
            return operation;
        }
};

#endif