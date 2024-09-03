#ifndef CASHSUPER_HPP
#define CASHSUPER_HPP

#include "ISale.hpp"

class CashSuper : public ISale{
    protected:
        ISale* sale;
    public:
        void decorate(ISale* sale){
            this->sale = sale;
        }
        double acceptCash(double price, double Number){
            if(sale != nullptr){
                return sale->acceptCash(price, Number);
            }
            return 0;
        }
};


#endif

