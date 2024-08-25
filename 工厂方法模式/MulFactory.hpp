#ifndef MULFACTORY_HPP
#define MULFACTORY_HPP

#include "IFactory.hpp"
#include "Mul.hpp"
#include "Operation.hpp"

class MulFactory : public IFactory
{
public:
    Operation CreateOperation() override;
};

Operation MulFactory::CreateOperation()
{
    return Mul();
}

#endif // MULFACTORY_HPP