#ifndef AFTERNOONSTATE_HPP
#define AFTERNOONSTATE_HPP

#include "State.hpp"

class AfternoonState : public State {
public:
    void handle(Work* work) override;
};

#endif // AFTERNOONSTATE_HPP

