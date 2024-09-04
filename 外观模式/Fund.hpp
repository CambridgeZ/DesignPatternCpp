#ifndef FUND_HPP
#define FUND_HPP

#include <iostream>
#include <string>
#include "Stock1.hpp"
#include "Stock2.hpp"
#include "Realty1.hpp"
#include "NationDebt1.hpp"

class Fund{
    Stock1 stock1;
    Stock2 stock2;
    Realty1 realty1;
    NationalDebt1 nationalDebt1;
public:
    void buyFund(){
        stock1.buy();
        stock2.buy();
        realty1.buy();
        nationalDebt1.buy();
    }

    void sellFund(){
        stock1.sell();
        stock2.sell();
        realty1.sell();
        nationalDebt1.sell();
    }
};

#endif




