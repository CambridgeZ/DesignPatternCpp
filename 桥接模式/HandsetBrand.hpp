#ifndef HANDSETBRAND_HPP
#define HANDSETBRAND_HPP

#include "HandsetSoftware.hpp"

class HandsetBrand {
protected:
    HandsetSoftware *soft;

public:
    void setHandsetSoft(HandsetSoftware *soft){
        this->soft = soft;
    }

    virtual void run() = 0;
};

#endif
