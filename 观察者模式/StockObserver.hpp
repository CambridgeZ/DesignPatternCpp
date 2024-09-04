#ifndef STOCKOBSERVER_HPP
#define STOCKOBSERVER_HPP

#include <iostream>
#include "Subject.hpp"

using std::cout;
using std::endl;

class StockObserver: public Observer{
public:
    StockObserver(string name,Subject* sub): Observer(name, sub){}
    void update(string message){
        cout << name << " " << message << endl;
    }
};

#endif