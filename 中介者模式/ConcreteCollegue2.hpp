#ifndef CONCRETECOLLEGUE2_HPP
#define CONCRETECOLLEGUE2_HPP

#include "Collegue.hpp"

class ConcreteCollegue2: public Collegue {
public:
    ConcreteCollegue2(Mediator* mediator): Collegue(mediator) {}
    void notify(string message) {
        cout << "ConcreteCollegue2 received message: " << message << endl;
    }
    void send(string message) {
        cout << "ConcreteCollegue2 sent message: " << message << endl;
        mediator->notify(message, this);
    }
};

#endif // CONCRETECOLLEGUE2_HPP