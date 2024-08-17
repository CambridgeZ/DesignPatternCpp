#ifndef CASHCONTEXT_HPP
#define CASHCONTEXT_HPP

#include "CashSuper.hpp"
#include "CashNormal.hpp"
#include "CashRebate.hpp"
#include "CashReturn.hpp"
#include <memory>

using std::unique_ptr;
using std::make_unique;

class CashContext{
    public :
        CashContext(int type){
            switch (type){
                case 1:
                    cs = make_unique<CashNormal>();
                    break;
                case 2:
                    cs = make_unique<CashRebate>(0.8);
                    break;
                case 3:
                    cs = make_unique<CashReturn>(300, 100);
                    break;
                default:
                    cs = make_unique<CashNormal>();
                    break;
            }
        }
        double GetResult(double price, int num){
            return cs->acceptCash(price, num);
        }
    private:
        unique_ptr<CashSuper> cs;
};

#endif // CASHCONTEXT_HPP