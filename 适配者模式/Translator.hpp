#ifndef TRANSLATOR_HPP
#define TRANSLATOR_HPP

#include "Player.hpp"
#include "ForeignCenter.hpp"

class Translator : public Player {
public:
    Translator(string name) : Player(name), wjzf(new ForeignCenter(name)) {}
    void attack() override{
        wjzf->attack();
    }
    void defense() override{
        wjzf->defense();
    }
private:
    ForeignCenter* wjzf;
};

#endif