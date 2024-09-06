#ifndef HANDSETMUSIC_HPP
#define HANDSETMUSIC_HPP

#include "HandsetSoftware.hpp"
#include <iostream>

class HandsetMusic : public HandsetSoftware {
public:
    void run() override {
        std::cout << "HandsetMusic run" << std::endl;
    }
};

#endif // HANDSETMUSIC_HPP