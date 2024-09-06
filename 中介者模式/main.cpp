#include "ConcreteMediator.hpp"
#include "ConcreteCollegue1.hpp"
#include "ConcreteCollegue2.hpp"

int main() {
    ConcreteMediator mediator;
    ConcreteCollegue1 collegue1(&mediator);
    ConcreteCollegue2 collegue2(&mediator);
    mediator.setConegreCollegue1(&collegue1);
    mediator.setConegreCollegue2(&collegue2);
    collegue1.send("Hello, I am ConcreteCollegue1.");
    collegue2.send("Hello, I am ConcreteCollegue2.");
    return 0;
}