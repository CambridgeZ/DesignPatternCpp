#ifndef SECRETARY_HPP
#define SECRETARY_HPP

#include "Subject.hpp"
#include <string>
#include <vector>

using std::string;
using std::vector;

class Secretary: public Subject{
public:
    Secretary(string name):Subject(name){}
};

#endif