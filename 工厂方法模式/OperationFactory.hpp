#ifndef OPERATIONFACTORY_HPP
#define OPERATIONFACTORY_HPP

#include "IFactory.hpp"
#include "Operation.hpp"
#include "AddFactory.hpp"
#include "SubFactory.hpp"
#include "MulFactory.hpp"
#include "DivFactory.hpp"

class OperationFactory
{
public:
    static IFactory* CreateFactory(char op);
};