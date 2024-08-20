#ifndef ISALE_HPP
#define ISALE_HPP

class ISale{
public:
    virtual double acceptCash(double price, double Number) = 0;
};

#endif // ISALE_HPP