#ifndef FOREIGNCENTER_HPP
#define FOREIGNCENTER_HPP

#include "Player.hpp"

class ForeignCenter {
public:
    void attack(){
        std::cout<< this->name << " ForeignCenter attack" << std::endl;
    }
    void defense(){
        std::cout<< this->name << " ForeignCenter defense" << std::endl;
    }
    ForeignCenter(string name) : name(name) {}
private:
    string name;
};

#endif