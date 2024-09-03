#ifndef CASHNORMAL_HPP
#define CASHNORMAL_HPP

#include "ISale.hpp"

class CashNormal : public ISale
{
public:
    double acceptCash(double price, int num)
    {
        return price * num;
    }
};

#endif
