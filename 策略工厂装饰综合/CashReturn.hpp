#ifndef CASHRETURN_HPP
#define CASHRETURN_HPP

#include "CashSuper.hpp"

class CashReturn : public CashSuper{
    private:
        double moneyCondition;
        double moneyReturn;
    public:
        CashReturn(double moneyCondition, double moneyReturn){
            this->moneyCondition = moneyCondition;
            this->moneyReturn = moneyReturn;
        }
        double acceptCash(double price, double Number){
            double result = sale->acceptCash(price, Number);
            if(result >= moneyCondition){
                result = result - moneyReturn;
            }
            return CashSuper::acceptCash(result, 1);
        }
};

#endif // CASHRETURN_HPP