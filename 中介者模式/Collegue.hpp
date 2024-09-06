#ifndef COLLERGUE_HPP
#define COLLERGUE_HPP

#include <string>
#include <iostream>
#include "Mediator.hpp"

using std::string;
using std::cout;
using std::endl;



class Collegue {
protected:
    Mediator* mediator;
public:
    Collegue(Mediator* mediator): mediator(mediator) {}
    virtual void notify(string message) = 0;
    virtual void send(string message) = 0;
};

#endif // COLLERGUE_HPP