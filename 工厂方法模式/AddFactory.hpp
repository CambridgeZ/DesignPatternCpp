#ifndef ADDFACTORY_HPP
#define ADDFACTORY_HPP

#include "IFactory.hpp"
#include "Add.hpp"
#include "Operation.hpp"

class AddFactory : public IFactory
{
public:
    Operation CreateOperation() override;
};

Operation AddFactory::CreateOperation()
{
    return Add();
}


#endif // ADDFACTORY_HPP