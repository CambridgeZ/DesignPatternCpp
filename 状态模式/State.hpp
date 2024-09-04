#ifndef STATE_HPP
#define STATE_HPP

class Work;

class State {
public:
    virtual void handle(Work* work) = 0;
};

#endif // STATE_HPP