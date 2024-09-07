#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include <memory>

using std::string;
using std::shared_ptr;

class Action;

class Person {
public:
    virtual void accept(shared_ptr<Action> visitor) = 0;
};


#endif // PERSON_HPP