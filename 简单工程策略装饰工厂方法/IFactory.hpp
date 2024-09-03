#ifndef IFACTORY_HPP
#define IFACTORY_HPP

#include "ISale.hpp"

class IFactory
{
public:
    virtual ISale* createSale() = 0;
};

#endif

