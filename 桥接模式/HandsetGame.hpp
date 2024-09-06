#ifndef HANDSETGAME_HPP
#define HANDSETGAME_HPP

#include "HandsetSoftware.hpp"
#include <iostream>

class HandsetGame : public HandsetSoftware {
public:
    void run() override {
        std::cout << "HandsetGame run" << std::endl;
    }
};

#endif // HANDSETGAME_HPP
