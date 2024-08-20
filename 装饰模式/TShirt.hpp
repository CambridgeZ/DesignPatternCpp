#ifndef TSHIRT_HPP
#define TSHIRT_HPP

#include "Finery.hpp"
#include <iostream>

using std::cout;
using std::endl;

class TShirt : public Finery{
public:
    void show(){
        cout<<"大T恤 ";
        Finery::show();
    }
};

#endif // TSHIRT_HPP