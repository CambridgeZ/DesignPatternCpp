#ifndef CASHNORMAL_HPP
#define CASHNORMAL_HPP

#include "ISale.hpp"

class CashNormal : public ISale{
public:
    double acceptCash(double price, double Number){
        // 正常收费
        return price*Number;
    }
};

#endif // CASHNORMAL_HPP
