#ifndef CASH_NORMAL_HPP
#define CASH_NORMAL_HPP

#include "CashSuper.hpp"

class CashNormal : public CashSuper{
    public :
        double acceptCash(double price, int num){
            return price * num;
        }
};


#endif // CASH_NORMAL_HPP