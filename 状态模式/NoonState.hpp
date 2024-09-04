#ifndef NOONSTATE_HPP
#define NOONSTATE_HPP

#include "State.hpp"

class NoonState : public State {
public:
    void handle(Work* work) override;
};

#endif // NOONSTATE_HPP