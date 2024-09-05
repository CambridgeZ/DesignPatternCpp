#ifndef CENTER_HPP
#define CENTER_HPP

#include "Player.hpp"

class Center : public Player {
public:
    void attack() override{
        std::cout<< this->name << " Center attack" << std::endl;
    }
    void defense() override{
        std::cout<< this->name << " Center defense" << std::endl;
    }
    Center(string name) : Player(name) {}
};

#endif