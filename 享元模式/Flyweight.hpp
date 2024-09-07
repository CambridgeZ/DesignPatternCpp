#ifndef FLYWEIGHT_HPP
#define FLYWEIGHT_HPP

#include "User.hpp"
#include <memory>

using std::shared_ptr;

class Flyweight{
public:
    virtual void Operation(shared_ptr<User> user) = 0;
};

#endif
