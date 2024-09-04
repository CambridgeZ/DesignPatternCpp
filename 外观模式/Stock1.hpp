#ifndef STOCK1_HPP
#define STOCK1_HPP

#include <iostream>
#include <string>

class Stock1{
public:
    void buy(){
        std::cout << "Stock1 buy" << std::endl;
    }

    void sell(){
        std::cout << "Stock1 sell" << std::endl;
    }
};

#endif