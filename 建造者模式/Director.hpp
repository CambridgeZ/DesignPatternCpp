#ifndef DIRECTOR_HPP
#define DIRECTOR_HPP

#include "Builder.hpp"

class Director{
public:
    Director(Builder* builder){
        m_builder = builder;
    }

    void construct(){
        m_builder->buildPartA();
        m_builder->buildPartB();
    }

private:
    Builder* m_builder;
};

#endif