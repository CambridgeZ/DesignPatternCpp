#ifndef NBAOBSERVER_HPP
#define NBAOBSERVER_HPP

#include <iostream>
#include "Observer.hpp"
#include "Subject.hpp"

using std::cout;
using std::endl;

class NBAObserver: public Observer{
public:
    NBAObserver(string name, Subject* sub): Observer(name, sub){}
    void update(string message){
        cout << name << " " << message << endl;
    }
};

#endif