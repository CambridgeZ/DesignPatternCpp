#ifndef CASHCONTEXT_HPP
#define CASHCONTEXT_HPP

#include "ISale.hpp"

class CashContext{
    private:
        ISale* sale;
    public:
        CashContext(int type){
            switch (type)
            {
            case 1:
                sale = new CashNormal();
                break;
            case 2:
                sale = new CashRebate(0.8);
                break;
            case 3:
                sale = new CashReturn(300, 100);
                break;
            case 4:
            // 先打八折再返利
                sale = new CashRebate(0.8);
                sale->decorate(new CashReturn(300, 100));
                break;
            case 5:
            // 先返利再打七折
                sale = new CashReturn(300, 100);
                sale->decorate(new CashRebate(0.7));
                break;
            default:
                break;
            }
        }
        double getResult(double price, double Number){
            return sale->acceptCash(price, Number);
        }


};

#endif // CASHCONTEXT_HPP