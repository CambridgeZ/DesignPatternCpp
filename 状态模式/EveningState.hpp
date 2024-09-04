#ifndef EVENINGSTATE_HPP
#define EVENINGSTATE_HPP

#include "State.hpp"

class EveningState : public State {
public:
    void handle(Work* work) override;
};

#endif // EVENINGSTATE_HPP