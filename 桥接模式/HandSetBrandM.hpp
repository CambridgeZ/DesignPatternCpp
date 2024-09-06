#ifndef HANDSETBRANDM_HPP
#define HANDSETBRANDM_HPP

#include "HandsetBrand.hpp"


class HandSetBrandM :public HandsetBrand{
public:
    void run() override {
        soft->run();
    }
};

#endif