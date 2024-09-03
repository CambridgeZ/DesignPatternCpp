#ifndef CASHRETURN_HPP
#define CASHRETURN_HPP

#include "CashSuper.hpp"

class CashReturn : public CashSuper
{
public:
    CashReturn(double moneyCondition, double moneyReturn)
    {
        this->moneyCondition = moneyCondition;
        this->moneyReturn = moneyReturn;
    }

    double acceptCash(double price, int num)
    {
        double result = sale->acceptCash(price, num);
        if (result >= moneyCondition)
        {
            result = result - moneyReturn;
        }
        return CashSuper::acceptCash(result, 1);
    }

private:
    double moneyCondition;
    double moneyReturn;
};

#endif