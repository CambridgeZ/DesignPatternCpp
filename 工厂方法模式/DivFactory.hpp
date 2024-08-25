#ifndef DIVFACTORY_HPP
#define DIVFACTORY_HPP

#include "IFactory.hpp"
#include "Div.hpp"
#include "Operation.hpp"

class DivFactory : public IFactory
{
public:
    Operation CreateOperation() override;
};

Operation DivFactory::CreateOperation()
{
    return Div();
}

#endif // DIVFACTORY_HPP