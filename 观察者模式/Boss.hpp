#ifndef BOSS_HPP
#define BOSS_HPP

#include <string>
#include "Subject.hpp"

using std::string;

class Boss: public Subject{
public:
    Boss(string name):Subject(name){}
};

#endif