#ifndef SUBFACTORY_HPP
#define SUBFACTORY_HPP

#include "IFactory.hpp"
#include "Sub.hpp"
#include "Operation.hpp"

class SubFactory : public IFactory
{
public:
    Operation CreateOperation() override;
};

Operation SubFactory::CreateOperation()
{
    return Sub();
}

#endif // SUBFACTORY_HPP