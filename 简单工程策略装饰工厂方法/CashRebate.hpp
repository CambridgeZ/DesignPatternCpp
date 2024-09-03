#ifndef CASHREBATE_HPP
#define CASHREBATE_HPP

#include "CashSuper.hpp"

class CashRebate : public CashSuper
{
public:
    CashRebate(double moneyRebate)
    {
        this->moneyRebate = moneyRebate;
    }

    double acceptCash(double price, int num)
    {
        double result = price * num * moneyRebate;
        return CashSuper::acceptCash(result, 1);
    }

private:
    double moneyRebate;
};

#endif
