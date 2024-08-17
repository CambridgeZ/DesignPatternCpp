#ifndef CASHPROMOTION_HPP
#define CASHPROMOTION_HPP

#include "CashSuper.hpp"

class CashRebate : public CashSuper{
    public :
        CashRebate(double moneyRebate){
            this->moneyRebate = moneyRebate;
        }
        double acceptCash(double price, int num){
            return price * num * moneyRebate;
        }
    private :
        double moneyRebate;
};

#endif // CASHPROMOTION_HPP