#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
#include <iostream>

using std::string;

class Player {
public:
    virtual void attack() = 0;
    virtual void defense() = 0;
    Player(string name) : name(name) {}
protected:
    string name;
};

#endif