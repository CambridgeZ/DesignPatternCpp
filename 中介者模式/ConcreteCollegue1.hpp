#ifndef CONCRETECOLLEGUE1_HPP
#define CONCRETECOLLEGUE1_HPP

#include "Collegue.hpp"

class ConcreteCollegue1: public Collegue {
public:
    ConcreteCollegue1(Mediator* mediator): Collegue(mediator) {}
    void notify(string message) {
        cout << "ConcreteCollegue1 received message: " << message << endl;
    }
    void send(string message) {
        cout << "ConcreteCollegue1 sent message: " << message << endl;
        mediator->notify(message, this);
    }
};

#endif // CONCRETECOLLEGUE_HPP