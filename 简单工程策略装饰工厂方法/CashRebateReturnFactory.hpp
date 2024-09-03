#ifndef CASHREBATERETURNFACTORY_HPP
#define CASHREBATERETURNFACTORY_HPP

#include "IFactory.hpp"
#include "CashRebate.hpp"
#include "CashReturn.hpp"
#include "CashNormal.hpp"

class CashRebateReturnFactory : public IFactory
{
public:
    CashRebateReturnFactory(double moneyRebate, double moneyCondition, double moneyReturn)
    {
        this->moneyRebate = moneyRebate;
        this->moneyCondition = moneyCondition;
        this->moneyReturn = moneyReturn;
    }

    ISale* createSale()
    {
        CashNormal* cn = new CashNormal();
        CashRebate* cr1 = new CashRebate(this->moneyRebate);
        CashReturn* cr2 = new CashReturn(this->moneyCondition, this->moneyReturn);

        cr2->decorate(cn);
        cr1->decorate(cr2);

        return cr1;    
    }

private:
    double moneyRebate;
    double moneyCondition;
    double moneyReturn;
};

#endif