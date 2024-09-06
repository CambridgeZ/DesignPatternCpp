#ifndef MEDAITOR_HPP
#define MEDAITOR_HPP

#include <string>

using std::string;

class Collegue;

class Mediator {
public:
    virtual void notify(string message, Collegue* collegue) = 0;
};


#endif // MEDAITOR_HPP
