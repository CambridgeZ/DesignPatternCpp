#ifndef WOMAN_HPP
#define WOMAN_HPP

#include "Person.hpp"
#include "Action.hpp"
#include <memory>

class Woman: public Person {
public:
    void accept(std::shared_ptr<Action> visitor) override {
        //bug: visitor->getWomanConclusion(this);
        //这里使用shared_from_this()返回一个指向当前对象的shared_ptr
        visitor->getWomanConclusion(this);
    }
};

#endif