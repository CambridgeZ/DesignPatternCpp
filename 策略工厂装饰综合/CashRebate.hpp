#ifndef CASHREBATE_HPP
#define CASHREBATE_HPP

#include "CashSuper.hpp"

class CashRebate : public CashSuper{
    private:
        double moneyRebate;
    public:
        CashRebate(double moneyRebate){
            this->moneyRebate = moneyRebate;
        }
        double acceptCash(double price, double Number){
            double result = price*Number*moneyRebate;
            return CashSuper::acceptCash(result, 1);
        }
};

#endif