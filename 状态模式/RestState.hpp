#ifndef RESTSTATE_HPP
#define RESTSTATE_HPP

#include "State.hpp"
#include <iostream>

class RestState : public State {
public:
    void handle(Work* work) override{
        std::cout << "Resting" << std::endl;
    }
};

#endif // RESTSTATE_HPP
