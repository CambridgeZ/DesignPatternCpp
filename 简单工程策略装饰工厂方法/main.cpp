#include <iostream>
#include "CashSuper.hpp"
#include "CashNormal.hpp"
#include "CashRebate.hpp"
#include "CashReturn.hpp"
#include "CashContext.hpp"

int main(){
    CashContext* cashContext = new CashContext(1);
    double result = cashContext->getResult(100, 1);
    std::cout << result << std::endl;
    return 0;
}