#ifndef CASHCONTEXT_HPP
#define CASHCONTEXT_HPP

#include "ISale.hpp"
#include "IFactory.hpp"
#include "CashSuper.hpp"
#include "CashNormal.hpp"
#include "CashRebate.hpp"
#include "CashReturn.hpp"
#include "CashRebateReturnFactory.hpp"
#include "CashReturnRebateFactory.hpp"

class CashContext{
    private:
        ISale* sale;
    public:
        double getResult(double price, double Number){
            return sale->acceptCash(price, Number);
        }

        CashContext(int cashType){
            IFactory *factory;
            switch (cashType){
            case 1:
                factory = new CashRebateReturnFactory(1, 0, 0);
                break;
            case 2:
                factory = new CashRebateReturnFactory(0.8, 0, 0);
                break;
            case 3:
                factory = new CashRebateReturnFactory(0.7, 0, 0);
                break;
            case 4:
                factory = new CashReturnRebateFactory(300, 100, 1);
                break;
            case 5:
                factory = new CashReturnRebateFactory(500, 200, 1);
                break;
            case 6:
                factory = new CashReturnRebateFactory(800, 300, 1);
                break;

            default:
                break;
            }
            this->sale = factory->createSale();
        }

        ~CashContext(){
            delete sale;
        }
};

#endif