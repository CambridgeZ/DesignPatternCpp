#ifndef ISALE_HPP
#define ISALE_HPP

class ISale
{
public:
    virtual double acceptCash(double price, int num) = 0;
};

#endif
