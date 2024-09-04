#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include <string>
// #include "Subject.hpp"

class Subject;

using std::string;

class Observer{
public:
    virtual void update(string message) = 0;
    Observer(string name, Subject* sub){
        this->name = name;
        this->sub = sub;
    }
protected:
    string name;
    Subject* sub;
    
};


#endif