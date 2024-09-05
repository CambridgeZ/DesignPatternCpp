#ifndef FORWARDS_HPP
#define FORWARDS_HPP

#include "Player.hpp"

class Forwards : public Player {
public:
    void attack() override{
        std::cout<< this->name << " Forwards attack" << std::endl;
    }
    void defense() override{
        std::cout<< this->name << " Forwards defense" << std::endl;
    }
    Forwards(string name) : Player(name) {}
};

#endif