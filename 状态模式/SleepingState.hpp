#ifndef SLEEPINGSTATE_HPP
#define SLEEPINGSTATE_HPP

#include "State.hpp"
#include <iostream>

class SleepingState : public State {
public:
    void handle(Work* work) override{
        std::cout << "Sleeping" << std::endl;
    }
};

#endif
