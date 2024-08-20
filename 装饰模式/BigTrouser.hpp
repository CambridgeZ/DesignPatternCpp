#ifndef BIGTROUSER_HPP
#define BIGTROUSER_HPP

#include "Finery.hpp"
#include <iostream>

using std::cout;
using std::endl;

class BigTrouser : public Finery{
public:
    void show(){
        cout<<"垮裤 ";
        Finery::show();
    }
};

#endif // BIGTROUSER_HPP