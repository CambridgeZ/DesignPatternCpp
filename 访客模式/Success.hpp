#ifndef SUCCESS_HPP
#define SUCCESS_HPP

#include "Action.hpp"

class Success: public Action{
public :
    void getManConclusion(std::shared_ptr<Man> concreteElementA) override {
        std::cout << "男人成功时，背后多半有一个伟大的女人" << std::endl;
    }
    void getWomanConclusion(std::shared_ptr<Woman> concreteElementB) override {
        std::cout << "女人成功时，背后多半有一个不成功的男人" << std::endl;
    }
};


#endif // SUCCESS_HPP