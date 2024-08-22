#ifndef CASHCONTEXT_HPP
#define CASHCONTEXT_HPP

#include "ISale.hpp"
#include "CashNormal.hpp"
#include "CashRebate.hpp"
#include "CashReturn.hpp"

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
                CashNormal cn = CashNormal();
                CashRebate cr = CashRebate(0.8);
                CashReturn crn = CashReturn(300, 100);
                cr.decorate(&cn);
                crn.decorate(&cr);
                sale = &crn;
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