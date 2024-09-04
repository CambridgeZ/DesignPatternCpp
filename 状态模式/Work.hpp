#ifndef WORK_HPP
#define WORK_HPP

#include "NoonState.hpp"
class State;

class Work {
private:
    State* state;
    int hour;
    bool finish;

public:
    Work() : state(new NoonState()), hour(9), finish(false) {}

    void setHour(int hour) {
        this->hour = hour;
    }

    int getHour() {
        return hour;
    }

    void setState(State* state) {
        this->state = state;
    }

    void setFinish(bool finish) {
        this->finish = finish;
    }

    bool isFinish() {
        return finish;
    }

    void handle() {
        state->handle(this);
    }
};

#endif // WORK_HPP