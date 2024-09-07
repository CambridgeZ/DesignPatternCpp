#ifndef FAIL_HPP
#define FAIL_HPP

#include "Action.hpp"

class Fail: public Action{
public :
    void getManConclusion(Man* concreteElementA) override{
        std::cout << "男人失败时，闷头喝酒，谁也不用劝" << std::endl;
    }
    void getWomanConclusion(Woman* concreteElementB) override{
        std::cout << "女人失败时，眼泪汪汪，谁也劝不了" << std::endl;
    }
};

#endif // FAIL_HPP