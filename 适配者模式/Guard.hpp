#ifndef GUARD_HPP
#define GUARD_HPP

#include "Player.hpp"

class Guard : public Player {
public:
    void attack() override{
        std::cout<< this->name << " Guard attack" << std::endl;
    }
    void defense() override{
        std::cout<< this->name << " Guard defense" << std::endl;
    }
    Guard(string name) : Player(name) {}
};

#endif

