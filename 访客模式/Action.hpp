#ifndef ACTION_HPP
#define ACTION_HPP

#include <memory>
#include <iostream>

using std::shared_ptr;
using std::weak_ptr;

class Man;
class Woman;

class Action {
public:
    virtual void getManConclusion(shared_ptr<Man> concreteElementA) = 0;
    virtual void getWomanConclusion(shared_ptr<Woman> concreteElementB) = 0;
};

#endif // ACTION_HPP