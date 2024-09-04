#ifndef BUILDER_HPP
#define BUILDER_HPP
#include "Product.hpp"

class Builder{
public:
    virtual void buildPartA() = 0;
    virtual void buildPartB() = 0;
    virtual Product* getResult() = 0;
};

#endif
