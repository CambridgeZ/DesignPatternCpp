#ifndef CONCRETEMEDIATOR_HPP
#define CONCRETEMEDIATOR_HPP

#include "Mediator.hpp"
#include "ConcreteCollegue1.hpp"
#include "ConcreteCollegue2.hpp"

class ConcreteMediator: public Mediator {
public:
    void setConegreCollegue1(ConcreteCollegue1* collegue1) {
        this->collegue1 = collegue1;
    }
    void setConegreCollegue2(ConcreteCollegue2* collegue2) {
        this->collegue2 = collegue2;
    }
    void notify(string message, Collegue* collegue) {
        if (collegue == collegue1) {
            collegue2->notify(message);
        } else {
            collegue1->notify(message);
        }
    }

private:
    ConcreteCollegue1* collegue1;
    ConcreteCollegue2* collegue2;
};



#endif // CONCRETEMEDIATOR_HPP