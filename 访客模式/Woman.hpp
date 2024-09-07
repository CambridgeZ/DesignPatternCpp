#ifndef WOMAN_HPP
#define WOMAN_HPP

#include "Person.hpp"
#include "Action.hpp"

class Woman: public Person {
public:
    void accept(std::shared_ptr<Action> visitor) override {
        visitor->getWomanConclusion(std::shared_ptr<Woman>(this));
    }
};

#endif