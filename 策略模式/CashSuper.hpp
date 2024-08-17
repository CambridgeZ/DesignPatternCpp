#ifndef CASH_SUPER_HPP
#define CASH_SUPER_HPP

class CashSuper{
public :
    virtual double acceptCash(double price, int num) = 0;
};

#endif // CASH_SUPER_HPP