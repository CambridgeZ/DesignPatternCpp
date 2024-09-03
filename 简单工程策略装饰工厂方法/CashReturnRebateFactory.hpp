#ifndef CASHRETURNREBATEFACTORY_HPP
#define CASHRETURNREBATEFACTORY_HPP

#include "IFactory.hpp"
#include "CashSuper.hpp"
#include "CashReturn.hpp"
#include "CashRebate.hpp"
#include "CashNormal.hpp"

class CashReturnRebateFactory : public IFactory
{
public:
    CashReturnRebateFactory(double moneyCondition, double moneyReturn, double moneyRebate)
    {
        this->moneyCondition = moneyCondition;
        this->moneyReturn = moneyReturn;
        this->moneyRebate = moneyRebate;
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
    double moneyCondition;
    double moneyReturn;
    double moneyRebate;
};

#endif
