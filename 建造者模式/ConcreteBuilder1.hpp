#ifndef CONCRETEBUILDER1_HPP
#define CONCRETEBUILDER1_HPP

#include "Builder.hpp"
#include "Product.hpp"

class ConcreteBuilder1 : public Builder{
public:
    void buildPartA(){
        m_product->addPart("A1");
    }

    void buildPartB(){
        m_product->addPart("B1");
    }

    Product* getResult(){
        return m_product;
    }

    ConcreteBuilder1(){
        m_product = new Product();
    }

    ~ConcreteBuilder1(){
        delete m_product;
    }

private:
    Product* m_product;
};

#endif